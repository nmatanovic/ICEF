// ---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UnitFormStavkaEdit.h"
#include "UnitModels.h"
#include "UnitDataModule1.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "dxSkinsCore"
#pragma link "dxSkinOffice2010Blue"
#pragma link "cxDBExtLookupComboBox"
#pragma resource "*.dfm"
TFormStavkaEdit *FormStavkaEdit;

// ---------------------------------------------------------------------------
__fastcall TFormStavkaEdit::TFormStavkaEdit(TComponent* Owner) : TForm(Owner)
{
	m_RMProjekt = new TProjektModel(DataModule1->ADOTableProjekti);
	m_RMStavka = new TStavkaModel(DataModule1->ADOTableStavkeProjekta);
	m_RMStavkaTip = new TRecordModel(DataModule1->ADOTableStavkaTip);

	m_RMProjekt->InitStructure();
	m_RMStavka->InitStructure();
	m_RMStavkaTip->InitStructure();

	DataSourceStavka->DataSet = m_RMStavka;

	m_RMProjekt->LoadByCurrentRecNo();
	// m_RMStavka->LoadByCurrentRecNo();

	m_RMStavka->SetFieldVar("PROJEKT_ID", m_RMProjekt->GetFieldVar("ID"));
	m_RMStavka->SetFieldVar("DATUM", Date());

	ComboBoxStavkaTip->ItemIndex = 0;
}

// ---------------------------------------------------------------------------

void __fastcall TFormStavkaEdit::ComboBoxStavkaTipPropertiesChange(TObject *Sender)
{
	m_RMStavkaTip->LoadByField("STAVKA_TIP", ComboBoxStavkaTip->Properties->ListField->Value);

	m_RMStavka->SetFieldVar("ZSIC_FOND", (double)0);
	m_RMStavka->SetFieldVar("ZSEF_FOND", (double)0);
	m_RMStavka->SetFieldVar("ZSIC_PROCENT", m_RMProjekt->GetFieldInt("ZSIC_PROCENT"));
	m_RMStavka->SetFieldVar("ZSEF_PROCENT", m_RMProjekt->GetFieldInt("ZSEF_PROCENT"));

	m_RMStavka->SetFieldVar("UPLATA", (double)0);
	m_RMStavka->SetFieldVar("TROSAK", (double)0);

	m_RMStavka->SetFieldVar("BRUTO_NAKNADA", (double)0);
	m_RMStavka->SetFieldVar("NETO_NAKNADA", (double)0);
	m_RMStavka->SetFieldVar("STAVKATIP", m_RMStavkaTip->GetFieldVar("STAVKA_TIP"));
	m_RMStavka->SetFieldVar("STAVKATIPKOEF", m_RMStavkaTip->GetFieldDouble("KOEFICIJENT"));

	LabelFondZSIC->Caption = "Fond ZSIC(" + IntToStr((__int64)m_RMStavka->GetFieldInt("ZSIC_PROCENT")) + "%)";
	LabelFondZSEF->Caption = "Fond ZSEF(" + IntToStr((__int64)m_RMStavka->GetFieldInt("ZSEF_PROCENT")) + "%)";

	bool bK = m_RMStavkaTip->GetFieldBool("JE_KOEF");
	bool bU = m_RMStavkaTip->GetFieldBool("JE_UPLATA");
	bool bT = m_RMStavkaTip->GetFieldBool("JE_TROSAK");

	LabelUplata->Enabled = bU;
	LabelTrosak->Enabled = bT;
	LabelFondZSIC->Enabled = bK;
	LabelFondZSEF->Enabled = bK;
	LabelBrutoNaknada->Enabled = bK;
	LabelNetoNaknada->Enabled = bK;

	EditUplata->Enabled = bU;
	EditTrosak->Enabled = bT;
	EditFondZSIC->Enabled = bK;
	EditFondZSEF->Enabled = bK;
	EditBrutoNaknada->Enabled = bK;
	EditNetoNaknada->Enabled = bK;

	UplatiNaComboBox->Enabled = bK;

}
// ---------------------------------------------------------------------------

void __fastcall TFormStavkaEdit::EditNetoNaknadaExit(TObject *Sender)
{
	double vr = 1;

	try
	{
		vr = EditNetoNaknada->Value * (1.0 / m_RMStavka->GetFieldDouble("STAVKATIPKOEF"));
	}
	catch (...)
	{
		return;
	}

	m_RMStavka->SetFieldVar("BRUTO_NAKNADA", vr);

	if (!m_RMStavkaTip->GetFieldBool("JE_KOEF"))
		return;

	m_RMStavka->SetFieldVar("ZSIC_FOND", m_RMStavka->GetFieldDouble("BRUTO_NAKNADA") / 100 * m_RMStavka->GetFieldInt("ZSIC_PROCENT"));
	m_RMStavka->SetFieldVar("ZSEF_FOND", m_RMStavka->GetFieldDouble("BRUTO_NAKNADA") / 100 * m_RMStavka->GetFieldInt("ZSEF_PROCENT"));

}
// ---------------------------------------------------------------------------

void __fastcall TFormStavkaEdit::EditBrutoNaknadaExit(TObject *Sender)
{
	double vr = 1;

	try
	{
		vr = EditBrutoNaknada->Value * m_RMStavka->GetFieldDouble("STAVKATIPKOEF");
	}
	catch (...)
	{
		return;
	}

	m_RMStavka->SetFieldVar("NETO_NAKNADA", vr);

	if (!m_RMStavkaTip->GetFieldBool("JE_KOEF"))
		return;

	m_RMStavka->SetFieldVar("ZSIC_FOND", m_RMStavka->GetFieldDouble("BRUTO_NAKNADA") / 100 * m_RMStavka->GetFieldInt("ZSIC_PROCENT"));
	m_RMStavka->SetFieldVar("ZSEF_FOND", m_RMStavka->GetFieldDouble("BRUTO_NAKNADA") / 100 * m_RMStavka->GetFieldInt("ZSEF_PROCENT"));

}
// ---------------------------------------------------------------------------

void __fastcall TFormStavkaEdit::cxButton1Click(TObject *Sender)
{
	DataModule1->DodajStavku(m_RMProjekt, m_RMStavka);
	Close();
}

// ---------------------------------------------------------------------------
void __fastcall TFormStavkaEdit::cxButton2Click(TObject *Sender)
{
	Close();
}
// ---------------------------------------------------------------------------

void __fastcall TFormStavkaEdit::FormCreate(TObject *Sender)
{
	DataModule1->ADOQueryLjudi->Active = false;
	DataModule1->ADOQueryLjudi->Filter = "";
	DataModule1->ADOQueryLjudi->Filtered = false;
	DataModule1->ADOQueryLjudi->Active = true;
}

// ---------------------------------------------------------------------------
void __fastcall TFormStavkaEdit::cxDBLookupComboBox1PropertiesChange(TObject *Sender)
{
	EditKomentar->Text = UplatiNaComboBox->Text;
}
// ---------------------------------------------------------------------------
