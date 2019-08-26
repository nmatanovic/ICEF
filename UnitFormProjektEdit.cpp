// ---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UnitFormProjektEdit.h"
#include "UnitDataModule1.h"
#include "UnitModels.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "dxSkinOffice2010Blue"
#pragma resource "*.dfm"
TFormProjektEdit *FormProjektEdit;

// ---------------------------------------------------------------------------
__fastcall TFormProjektEdit::TFormProjektEdit(TComponent* Owner) : TForm(Owner)
{
	m_RMProjekt = new TProjektModel(DataModule1->ADOTableProjekti);
	m_RMProjekt->InitStructure();

	m_RMKategorija = new TKategorijaModel(DataModule1->ADOTableKategorije);
	m_RMKategorija->InitStructure();

	DataSourceProjekt->DataSet = m_RMProjekt;

	m_RMProjekt->SetFieldVar("ID", (int)0);
	m_RMProjekt->SetFieldVar("NAZIV_PROJEKTA", "IME_PROJEKTA");
	m_RMProjekt->SetFieldVar("ZSEF_PROCENT", (int)0);
	m_RMProjekt->SetFieldVar("ZSIC_PROCENT", (int)0);
	m_RMProjekt->SetFieldVar("OTVOREN_DATUM", Date());
}

// ---------------------------------------------------------------------------

void __fastcall TFormProjektEdit::cxButton1Click(TObject *Sender)
{

	if (!m_RMProjekt->Append())
	{
		MessageBox(this->Handle, L"Ne mogu da zapamtim projekat!", L"", MB_OK | MB_ICONERROR);
		return;
	}

	Close();
}
// ---------------------------------------------------------------------------

void __fastcall TFormProjektEdit::cxDBLookupComboBox1PropertiesChange(TObject *Sender)
{
	if (!m_RMKategorija->LoadByField("NAZIV", cxDBLookupComboBox1->Text))
		return;

	m_RMProjekt->SetFieldVar("ZSEF_PROCENT", m_RMKategorija->GetFieldInt("ZSEF"));
	m_RMProjekt->SetFieldVar("ZSIC_PROCENT", m_RMKategorija->GetFieldInt("ZSIC"));

}

// ---------------------------------------------------------------------------
void __fastcall TFormProjektEdit::cxButton2Click(TObject *Sender)
{
	Close();
}
// ---------------------------------------------------------------------------

void __fastcall TFormProjektEdit::FormCreate(TObject *Sender)
{
	DataModule1->ADOQueryLjudi->Active = false;
	DataModule1->ADOQueryLjudi->Filter = "NA_PROJEKTU = TRUE";
	DataModule1->ADOQueryLjudi->Filtered = true;
	DataModule1->ADOQueryLjudi->Active = true;
}
// ---------------------------------------------------------------------------
