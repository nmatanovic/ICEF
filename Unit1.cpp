// ---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "UnitDataModule1.h"
#include "UnitFormStavkaEdit.h"
#include "UnitFormProjektEdit.h"
#include "UnitFormKategorijeProjekata.h"
#include "UnitFormPrint.h"
#include "UnitFormKoefEdit.h"
#include "UnitLjudi.h"
#include "UnitUtil.h"
#include "UnitformBackupRestore.h"
#include "UnitFormKategorijaProEdit.h"
#include "UnitFormLogin.h"
#include "UnitModels.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "cxClasses"
#pragma link "cxControls"
#pragma link "cxCustomData"
#pragma link "cxData"
#pragma link "cxDataStorage"
#pragma link "cxDBData"
#pragma link "cxEdit"
#pragma link "cxFilter"
#pragma link "cxGraphics"
#pragma link "cxGrid"
#pragma link "cxGridCustomTableView"
#pragma link "cxGridCustomView"
#pragma link "cxGridDBTableView"
#pragma link "cxGridLevel"
#pragma link "cxGridTableView"
#pragma link "cxLookAndFeelPainters"
#pragma link "cxLookAndFeels"
#pragma link "cxStyles"
#pragma link "dxSkinOffice2007Blue"
#pragma link "dxSkinsCore"
#pragma link "dxSkinscxPCPainter"
#pragma link "dxSkinsDefaultPainters"
#pragma link "dxSkinsdxStatusBarPainter"
#pragma link "dxStatusBar"
#pragma link "cxSplitter"
#pragma link "dxNavBar"
#pragma link "dxNavBarBase"
#pragma link "dxNavBarCollns"
#pragma link "dxSkinsdxNavBar2Painter"
#pragma link "cxContainer"
#pragma link "cxDBLabel"
#pragma link "cxLabel"
#pragma link "cxDrawTextUtils"
#pragma link "dxBkgnd"
#pragma link "dxPrnDev"
#pragma link "dxPrnPg"
#pragma link "dxPSCompsProvider"
#pragma link "dxPSCore"
#pragma link "dxPScxEditorProducers"
#pragma link "dxPScxExtEditorProducers"
#pragma link "dxPScxPageControlProducer"
#pragma link "dxPSEdgePatterns"
#pragma link "dxPSEngn"
#pragma link "dxPSFillPatterns"
#pragma link "dxPSGlbl"
#pragma link "dxPSPDFExport"
#pragma link "dxPSPDFExportCore"
#pragma link "dxPSPrVwAdv"
#pragma link "dxPSPrVwRibbon"
#pragma link "dxPSPrVwStd"
#pragma link "dxPSUtl"
#pragma link "dxSkinsdxBarPainter"
#pragma link "dxWrap"
#pragma link "dxPScxCommon"
#pragma link "dxPScxGrid6Lnk"
#pragma link "dxSkinOffice2010Blue"
#pragma link "dxNavBarStyles"
#pragma resource "*.dfm"
TForm1 *Form1;

// ---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner) : TForm(Owner)
{
	m_Total = 0;
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::Action_NovProjektExecute(TObject *Sender)
{
	//
	MsgAdminPriv();
	//
	TFormProjektEdit *pFPE = new TFormProjektEdit(this);
	pFPE->ShowModal();
	delete pFPE;
}
// ---------------------------------------------------------------------------

void __fastcall TForm1::Action_ZatvoriOtvoriExecute(TObject *Sender)
{
	//
	MsgAdminPriv();
	//

	if (MsgBoxDaNe("Menjate stanje trenutno selektovanog projekta?"))
		DataModule1->ZatvoriOtvoriProjektCurrentRecNo();
}
// ---------------------------------------------------------------------------

void __fastcall TForm1::Action_ObrisiProjektExecute(TObject *Sender)
{
	//
	MsgAdminPriv();
	//

	if (MsgBoxDaNe("Da li brisete trenutno selektovani projekat?"))
		DataModule1->ObrisiProjektCurrentRecNo();
}
// ---------------------------------------------------------------------------

void __fastcall TForm1::Action_NovaStavkaExecute(TObject *Sender)
{
	if (DataModule1->ProjektJeZatvorenCurrentRecNo())
	{
		MsgBoxUpoz("Dodavanje stavke nije dozovljeno, projekat je zatvoren!");
		return;
	}

	TFormStavkaEdit *pFSE = new TFormStavkaEdit(this);
	pFSE->ShowModal();
	delete pFSE;
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::Action_ObrisiStavkuExecute(TObject *Sender)
{

	if (DataModule1->ProjektJeZatvorenCurrentRecNo())
	{
		MsgBoxUpoz("Brisanje stavke nije dozovljeno, projekat je zatvoren!");
		return;
	}

	if (MsgBoxDaNe("Da li brisete trenutno selektovanu stavku?"))
		DataModule1->ObrisiStavkuCurrentRecNo();
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::Action_KategorijeExecute(TObject *Sender)
{
	TFormKategorijeProjekata *pFKP = new TFormKategorijeProjekata(this);
	pFKP->ShowModal();
	delete pFKP;
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::Action_PrintExecute(TObject *Sender)
{
	if (!DataModule1->ImaStavki())
	{
		MessageBox(this->Handle, L"Nema stavki za štampu", L"", MB_OK | MB_ICONERROR);
		return;
	}

	TFormPrint *pFP = new TFormPrint(this, m_Total);
	pFP->ShowModal();
	delete pFP;
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::Action_KoeficijentiExecute(TObject *Sender)
{
	TFormKoefEdit * pFKE = new TFormKoefEdit(this);
	pFKE->ShowModal();
	delete pFKE;
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::Action_BackupRucnoExecute(TObject *Sender)
{
	DataModule1->NapraviBackupBaze(true);
	ShowMessage("Backup kreiran!");
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::Action_LjudiExecute(TObject *Sender)
{
	TFormLjudi * pFL = new TFormLjudi(this);
	pFL->ShowModal();
	delete pFL;
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::Action_BackupRestoreExecute(TObject *Sender)
{
	TFormBackupRestore * pFBR = new TFormBackupRestore(this);
	pFBR->ShowModal();
	delete pFBR;
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::cxGrid2DBTableView1DataControllerSummaryAfterSummary(TcxDataSummary *ASender)
{
	m_Total = 0;
	TcxDataSummary *s;
	s = cxGrid2DBTableView1->DataController->Summary;

	try
	{
		double uUplata = s->FooterSummaryValues[1];
		double uTrosak = s->FooterSummaryValues[2];
		double uBruto = s->FooterSummaryValues[3];
		double uETF = s->FooterSummaryValues[6];
		double uIC = s->FooterSummaryValues[5];

		// SveUplate - (SveTrosak + SveBruto + SveZaETF + SveZaICEF)

		double kon = uUplata - (uTrosak + uBruto + uETF + uIC);
		m_Total = kon;
		UnicodeString c = FormatFloat("#,##0.00", kon);
		c = "Total: " + c + "   ";
		Label2->Caption = c;
	}
	catch (...)
	{
		Label2->Caption = " ___ ";
	}
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::FormResize(TObject *Sender)
{
	PanelS->Height = Height / 2;
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::DataSourceProjektiStateChange(TObject *Sender)
{
	Panel1->Caption = "   " + DataModule1->GetAktivnaBazaIme();
}

// ---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{

	try
	{
		ADOConnectionUsers->ConnectionString = "Provider=Microsoft.Jet.OLEDB.4.0;Data Source=" + GetCurrentDir() + "\\Users.mdb" +
			";Persist Security Info=False;";
		ADOConnectionUsers->Connected = true;
		ADOTableUsers->Active = true;
	}
	catch (...)
	{
		MsgBoxGreska("Ne mogu da otvorim sistemske tabele !!!");
		Application->Terminate();
	}

	m_UserModel = new TUserModel(ADOTableUsers);
	m_UserModel->InitStructure();

	if (!LogujSe())
		Application->Terminate();

}
// ---------------------------------------------------------------------------

// ---------------------------------------------------------------------------
bool __fastcall TForm1::LogujSe()
{
	TFormLogin * pFL = new TFormLogin(this);

_petlja:
	if (mrOk == pFL->ShowModal())
	{
		if (m_UserModel->LoadByField("USERNAME", pFL->GetUserNameText()))
		{
			if (m_UserModel->GetFieldStr("PASSWORD").UpperCase() != pFL->GetPasswordText().UpperCase())
			{
				MsgBoxGreska("Logovanje nije moguce, lozinka nije ispravna !");
				goto _petlja;
			}
			else
			{
				delete pFL;
				return true;
			}
		}
		else
		{
			MsgBoxGreska("Logovanje nije moguce, ne postoji korisnik!");
			goto _petlja;
		}

	}

	delete pFL;
	return false;
}

// ---------------------------------------------------------------------------
bool __fastcall TForm1::JelAdminLogovan()
{
	return m_UserModel->JeAdmin();
}
