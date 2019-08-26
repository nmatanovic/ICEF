// ---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UnitLjudi.h"
#include "UnitDataModule1.h"
#include "Unit1.h"
#include "UnitUtil.h"
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
#pragma link "cxDBVGrid"
#pragma link "cxInplaceContainer"
#pragma link "cxVGrid"
#pragma link "cxDBNavigator"
#pragma link "cxNavigator"
#pragma link "dxSkinOffice2010Blue"
#pragma link "cxButtons"
#pragma link "cxMaskEdit"
#pragma link "cxTextEdit"
#pragma link "cxContainer"
#pragma link "cxLabel"
#pragma link "cxCheckBox"
#pragma resource "*.dfm"
TFormLjudi *FormLjudi;

// ---------------------------------------------------------------------------
__fastcall TFormLjudi::TFormLjudi(TComponent* Owner) : TForm(Owner)
{
}

// ---------------------------------------------------------------------------
void __fastcall TFormLjudi::cxDBNavigator1ButtonsButtonClick(TObject *Sender, int AButtonIndex, bool &ADone)
{
	if (8 != AButtonIndex)
	{
		cxDBVerticalGrid1->SetFocus();
		cxDBVerticalGrid1MATBROJ->Focused = true;
	}
	else
		ADone = !MsgBoxDaNe("Brisete trenutno selektovani slog?");
}
// ---------------------------------------------------------------------------

void __fastcall TFormLjudi::DataSource1StateChange(TObject * Sender)
{
	UnicodeString strStanje = "";

	switch (DataSource1->DataSet->State)
	{
	case dsBrowse:
		strStanje = "Pregled slogova";
		break;
	case dsInsert:
	case dsEdit:
		strStanje = "Izmena/dodavanje sloga";
		break;
	}

	cxLabel1->Caption = strStanje;

	bool bS = (DataSource1->DataSet->State == dsBrowse);

	cxDBNavigator1->Enabled = bS;
	cxGrid1->Enabled = bS;
}

// ---------------------------------------------------------------------------
void __fastcall TFormLjudi::cxButton1Click(TObject *Sender)
{
	Close();
}
// ---------------------------------------------------------------------------

void __fastcall TFormLjudi::cxDBVerticalGrid1MATBROJEditPropertiesValidate(TObject *Sender, Variant &DisplayValue, TCaption &ErrorText, bool &Error)
{
	// ErrorText = "Niste ispravno uneli mat. broj!";
	// if (DataSource1->DataSet->State == dsBrowse)
	// Error = false;
}
// ---------------------------------------------------------------------------

