// ---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UnitDataModule1.h"
#include "UnitModels.h"
#include <ioutils.hpp>
#include <IniFiles.hpp>
// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TDataModule1 *DataModule1;

const UnicodeString strConPart1 = "Provider=Microsoft.Jet.OLEDB.4.0;Data Source=";
const UnicodeString strConPart2 = ";Persist Security Info=False;";
const UnicodeString strBaza = "rajo.mdb";
UnicodeString strPutanja = "";

// ---------------------------------------------------------------------------
__fastcall TDataModule1::TDataModule1(TComponent* Owner) : TDataModule(Owner)
{
	strPutanja = GetCurrentDir();
	AktivirajBazu(strBaza);
}

void __fastcall TDataModule1::SetAktivnoNeAktivno(bool bS)
{
	ADOConnection1->Connected = bS;
	ADOTableProjekti->Active = bS;
	ADOTableStavkeProjekta->Active = bS;
	ADOTableStavkaTip->Active = bS;
	ADOTableSISTEM->Active = bS;
	ADOTableKategorije->Active = bS;
	ADOTableLjudi->Active = bS;
}

// ---------------------------------------------------------------------------
UnicodeString __fastcall TDataModule1::GetOrigBazaIme()
{
	return strBaza;
}

// ---------------------------------------------------------------------------
void __fastcall TDataModule1::AktivirajBazu(const UnicodeString &_strImeBaze)
{
	SetAktivnoNeAktivno(false);
	ADOConnection1->ConnectionString = strConPart1 + strPutanja + "\\" + _strImeBaze + strConPart2;
	m_StrAktivnaBazaIme = _strImeBaze;
	SetAktivnoNeAktivno(true);
}

// ---------------------------------------------------------------------------
void __fastcall TDataModule1::AktivirajBackUpBazu(const UnicodeString &_strImeBaze)
{
	AktivirajBazu("\\BACKUP\\" + _strImeBaze);
}

// ---------------------------------------------------------------------------
void __fastcall TDataModule1::DataModuleCreate(TObject *Sender)
{
	m_ZSEF_PRO = new TRecordModel(ADOTableProjekti);
	m_ZSIC_PRO = new TRecordModel(ADOTableProjekti);

	m_ZSEF_PRO->InitStructure();
	m_ZSIC_PRO->InitStructure();

	m_ZSEF_PRO->LoadByField("ZSIC_ZSEF", (int)1);
	m_ZSIC_PRO->LoadByField("ZSIC_ZSEF", (int)2);
}

// ---------------------------------------------------------------------------
int __fastcall TDataModule1::GetTransID()
{
	ADOTableSISTEM->Edit();
	ADOTableSISTEM->FieldByName("LASTTRANSACTION")->AsInteger++;
	ADOTableSISTEM->Post();

	return ADOTableSISTEM->FieldByName("LASTTRANSACTION")->AsInteger;
}

// ---------------------------------------------------------------------------
bool __fastcall TDataModule1::DodajStavku(TRecordModel *pRMProjekt, TRecordModel *pRMStavka)
{
	//
	DataModule1->NapraviBackupBaze(false);
	int TransID = this->GetTransID();

	TRecordModel *RMStavkaZSIC_ZSEF = new TRecordModel(DataModule1->ADOTableStavkeProjekta);
	RMStavkaZSIC_ZSEF->InitStructure();

	RMStavkaZSIC_ZSEF->SetFieldVar("TRANSID", (int)TransID);
	UnicodeString strKom = "Auto sa: ";
	strKom += IntToStr(pRMProjekt->GetFieldInt("ID"));
	strKom += " Bruto: ";
	strKom += FormatFloat("#,##0.00", pRMStavka->GetFieldDouble("BRUTO_NAKNADA"));
	RMStavkaZSIC_ZSEF->SetFieldVar("KOMENTAR", strKom);
	RMStavkaZSIC_ZSEF->SetFieldVar("DATUM", pRMStavka->GetFieldVar("DATUM"));
	RMStavkaZSIC_ZSEF->SetFieldVar("ZSIC_FOND", (double)0);
	RMStavkaZSIC_ZSEF->SetFieldVar("ZSEF_FOND", (double)0);
	RMStavkaZSIC_ZSEF->SetFieldVar("ZSIC_PROCENT", (int)0);
	RMStavkaZSIC_ZSEF->SetFieldVar("ZSEF_PROCENT", (int)0);
	RMStavkaZSIC_ZSEF->SetFieldVar("TROSAK", (double)0);

	RMStavkaZSIC_ZSEF->SetFieldVar("BRUTO_NAKNADA", (double)0);
	RMStavkaZSIC_ZSEF->SetFieldVar("NETO_NAKNADA", (double)0);
	RMStavkaZSIC_ZSEF->SetFieldVar("STAVKATIP", "UPLATA");

	if (pRMStavka->GetFieldDouble("ZSIC_FOND") > 0.0)
	{
		RMStavkaZSIC_ZSEF->SetFieldVar("PROJEKT_ID", m_ZSIC_PRO->GetFieldInt("ID"));
		RMStavkaZSIC_ZSEF->SetFieldVar("UPLATA", pRMStavka->GetFieldDouble("ZSIC_FOND"));
		RMStavkaZSIC_ZSEF->Append();
	}

	if (pRMStavka->GetFieldDouble("ZSEF_FOND") > 0.0)
	{
		RMStavkaZSIC_ZSEF->SetFieldVar("PROJEKT_ID", m_ZSEF_PRO->GetFieldInt("ID"));
		RMStavkaZSIC_ZSEF->SetFieldVar("UPLATA", pRMStavka->GetFieldDouble("ZSEF_FOND"));
		RMStavkaZSIC_ZSEF->Append();
	}

	pRMStavka->SetFieldVar("TRANSID", (int)TransID);
	pRMStavka->Append();

	delete RMStavkaZSIC_ZSEF;

	return true;
}

// ---------------------------------------------------------------------------
bool __fastcall TDataModule1::ObrisiProjektCurrentRecNo()
{
	if (-1 == ADOTableProjekti->RecNo)
	{
		MessageBox(Application->Handle, L"Nema kreiranih projekata !", L"", MB_OK | MB_ICONERROR);
		return false;
	}

	int rez = ADOTableProjekti->FieldByName("ZSIC_ZSEF")->AsInteger;

	if (1 == rez || 2 == rez)
	{
		MessageBox(Application->Handle, L"Brisanje projekta nije dozvoljeno !", L"", MB_OK | MB_ICONERROR);
		return false;
	}

	try
	{
		ADOTableProjekti->Delete();
	}
	catch (...)
	{
		MessageBox(Application->Handle, L"Brisanje projekta nije moguce !", L"", MB_OK | MB_ICONERROR);
		return false;
	}

	return true;
}

// ---------------------------------------------------------------------------
void OSVEZI_SET(TCustomADODataSet *pSET)
{
	if (NULL == pSET)
		return;

	if (pSET->Active == false)
		return;

	TBookmark pStanje = pSET->GetBookmark();
	pSET->Requery();

	try
	{
		try
		{
			pSET->GotoBookmark(pStanje);
		}
		catch (...)
		{
		}
	}
	__finally
	{
		pSET->FreeBookmark(pStanje);
	}
}

// ---------------------------------------------------------------------------
bool __fastcall TDataModule1::ObrisiStavkuCurrentRecNo()
{
	if (-1 == ADOTableStavkeProjekta->RecNo)
	{
		MessageBox(Application->Handle, L"Nema stavki !", L"", MB_OK | MB_ICONERROR);
		return false;
	}

	//
	DataModule1->NapraviBackupBaze(false);

	int TransID = ADOTableStavkeProjekta->FieldByName("TRANSID")->AsInteger;

	ADOQuery1->SQL->Clear();
	ADOQuery1->SQL->Add("DELETE FROM STAVKE WHERE TRANSID =" + IntToStr(TransID));
	ADOQuery1->ExecSQL();

	int iRec1 = ADOTableProjekti->RecNo;
	int iRec2 = ADOTableStavkeProjekta->RecNo;

	OSVEZI_SET(ADOTableProjekti);
	OSVEZI_SET(ADOTableStavkeProjekta);

	try
	{
		ADOTableProjekti->RecNo = iRec1;
		ADOTableStavkeProjekta->RecNo = iRec2;
	}
	catch (...)
	{
	}

	return true;
}

// ---------------------------------------------------------------------------
bool __fastcall TDataModule1::ImaStavki()
{
	return (-1 != ADOTableStavkeProjekta->RecNo);
}

// ---------------------------------------------------------------------------
bool __fastcall TDataModule1::ProjektJeZatvorenCurrentRecNo()
{
	if (-1 == ADOTableProjekti->RecNo)
		return true;

	return ADOTableProjekti->FieldByName("ZATVOREN")->AsBoolean;
}

// ---------------------------------------------------------------------------
bool __fastcall TDataModule1::ZatvoriOtvoriProjektCurrentRecNo()
{
	if (-1 == ADOTableProjekti->RecNo)
		return false;

	if (1 == ADOTableProjekti->FieldByName("ZSIC_ZSEF")->AsInteger)
		return false;

	if (2 == ADOTableProjekti->FieldByName("ZSIC_ZSEF")->AsInteger)
		return false;

	ADOTableProjekti->Edit();

	if (!ProjektJeZatvorenCurrentRecNo())
	{
		ADOTableProjekti->FieldByName("ZATVOREN_DATUM")->AsDateTime = Date();
		ADOTableProjekti->FieldByName("ZATVOREN")->AsBoolean = true;
	}
	else
	{
		ADOTableProjekti->FieldByName("ZATVOREN_DATUM")->Clear();
		ADOTableProjekti->FieldByName("ZATVOREN")->AsBoolean = false;
	}

	ADOTableProjekti->Post();

	return true;
}

// ---------------------------------------------------------------------------
const int MaxBackUpOva = 10;

bool __fastcall TDataModule1::NapraviBackupBaze(bool bAuto)
{
	int iZadnjiBackup = -1;

	try
	{
		TDirectory::CreateDirectory(strPutanja + "\\BACKUP");
	}
	catch (...)
	{
		// ShowMessage("Ne mogu da kreiram DIR !");
		return false;
	}

	TIniFile *IniFile = 0;
	if (!bAuto)
	{
		IniFile = new TIniFile(strPutanja + "\\" + "rajo.ini");

		try
		{
			iZadnjiBackup = IniFile->ReadInteger(Name, "ZADNJIBACKUP", -1);
		}
		catch (Exception* e)
		{
			ShowMessage("Citnaje iz.INI fajla nije uspelo !");
		}

		if (-1 == iZadnjiBackup || iZadnjiBackup > MaxBackUpOva)
			iZadnjiBackup = 0;

		iZadnjiBackup++;
	}

_D:
	UnicodeString dod;
	unsigned short myYear, myMonth, myDay;
	unsigned short myHour, myMin, mySec, myMilli;

	DecodeDate(TDateTime::CurrentDate(), myYear, myMonth, myDay);
	DecodeTime(TDateTime::CurrentTime(), myHour, myMin, mySec, myMilli);

	UnicodeString _str;
	_str.sprintf(L"%d_%d_%d_%d_%d_%d", (int)myYear, (int)myMonth, (int)myDay, (int)myHour, (int)myMin, (int)mySec);

	UnicodeString strFajlAuto = strPutanja + "\\BACKUP\\auto_icfbaza_" + _str + IntToStr(iZadnjiBackup);
	UnicodeString strFajlRucno = strPutanja + "\\BACKUP\\rucno_icfbaza_" + _str;
	UnicodeString strFajl = bAuto ? strFajlRucno : strFajlAuto;

	// ShowMessage(strPutanja + "\\" + GetOrigBazaIme() + "\n" + strFajl);

	TFile::Copy(strPutanja + "\\" + GetOrigBazaIme(), strFajl, true);

	if (bAuto)
		goto _D1;

	try
	{
		IniFile->WriteInteger(Name, "ZADNJIBACKUP", iZadnjiBackup);
	}
	catch (...)
	{
		ShowMessage("Upisivanje u.INI fajl nije uspelo !");
	}

_D1:
	delete IniFile;
	return true;
}

void __fastcall TDataModule1::RestorujBackUpBazu(const UnicodeString &_strImeBaze)
{
	SetAktivnoNeAktivno(false);
	TFile::Copy(strPutanja + "\\BACKUP\\" + _strImeBaze, strPutanja + "\\" + GetOrigBazaIme(), true);
	AktivirajBazu(strBaza);
}

void __fastcall TDataModule1::ADOTableLjudiAfterPost(TDataSet *DataSet)
{
	OSVEZI_SET(ADOTableLjudi);
}
// ---------------------------------------------------------------------------
