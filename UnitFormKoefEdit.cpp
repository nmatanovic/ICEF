// ---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UnitFormKoefEdit.h"
#include "UnitDataModule1.h"
#include "UnitModels.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "cxButtons"
#pragma link "cxGraphics"
#pragma link "cxLookAndFeelPainters"
#pragma link "cxLookAndFeels"
#pragma link "cxContainer"
#pragma link "cxControls"
#pragma link "cxDBEdit"
#pragma link "cxEdit"
#pragma link "cxLabel"
#pragma link "cxMaskEdit"
#pragma link "cxSpinEdit"
#pragma link "cxTextEdit"
#pragma link "dxSkinOffice2007Blue"
#pragma link "dxSkinsCore"
#pragma link "dxSkinOffice2010Blue"
#pragma resource "*.dfm"
TFormKoefEdit *FormKoefEdit;

// ---------------------------------------------------------------------------
__fastcall TFormKoefEdit::TFormKoefEdit(TComponent* Owner) : TForm(Owner)
{
	m_StavkaAH = new TStavkaTipModel(DataModule1->ADOTableStavkaTip);
	m_StavkaUG = new TStavkaTipModel(DataModule1->ADOTableStavkaTip);
	m_StavkaZR = new TStavkaTipModel(DataModule1->ADOTableStavkaTip);

	m_StavkaAH->InitStructure();
	m_StavkaUG->InitStructure();
	m_StavkaZR->InitStructure();

	m_StavkaAH->LoadByField("STAVKA_TIP", "AH");
	m_StavkaUG->LoadByField("STAVKA_TIP", "UG");
	m_StavkaZR->LoadByField("STAVKA_TIP", "ZR");

	DataSourceAH->DataSet = m_StavkaAH;
	DataSourceUG->DataSet = m_StavkaUG;
	DataSourceZR->DataSet = m_StavkaZR;
}

// ---------------------------------------------------------------------------
void __fastcall TFormKoefEdit::cxButton1Click(TObject *Sender)
{
	TLocateOptions lo;

	DataModule1->ADOTableStavkaTip->Locate("STAVKA_TIP", "AH", lo);
	DataModule1->ADOTableStavkaTip->Edit();
	DataModule1->ADOTableStavkaTip->FieldByName("KOEFICIJENT")->AsFloat = m_StavkaAH->GetFieldDouble("KOEFICIJENT");
	DataModule1->ADOTableStavkaTip->Post();
	//
	DataModule1->ADOTableStavkaTip->Locate("STAVKA_TIP", "UG", lo);
	DataModule1->ADOTableStavkaTip->Edit();
	DataModule1->ADOTableStavkaTip->FieldByName("KOEFICIJENT")->AsFloat = m_StavkaUG->GetFieldDouble("KOEFICIJENT");
	DataModule1->ADOTableStavkaTip->Post();
	//
	DataModule1->ADOTableStavkaTip->Locate("STAVKA_TIP", "ZR", lo);
	DataModule1->ADOTableStavkaTip->Edit();
	DataModule1->ADOTableStavkaTip->FieldByName("KOEFICIJENT")->AsFloat = m_StavkaZR->GetFieldDouble("KOEFICIJENT");
	DataModule1->ADOTableStavkaTip->Post();

	Close();
}
// ---------------------------------------------------------------------------
