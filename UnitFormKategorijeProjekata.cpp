// ---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UnitFormKategorijeProjekata.h"
#include "UnitDataModule1.h"
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

#pragma link "cxButtons"
#pragma link "dxSkinsCore"
#pragma link "dxSkinscxPCPainter"
#pragma link "cxSpinEdit"
#pragma link "cxDBNavigator"
#pragma link "cxDBVGrid"
#pragma link "cxInplaceContainer"
#pragma link "cxNavigator"
#pragma link "cxVGrid"
#pragma link "dxSkinOffice2010Blue"
#pragma link "cxContainer"
#pragma link "cxLabel"
#pragma resource "*.dfm"
TFormKategorijeProjekata *FormKategorijeProjekata;

// ---------------------------------------------------------------------------
__fastcall TFormKategorijeProjekata::TFormKategorijeProjekata(TComponent* Owner) : TForm(Owner)
{
}

// ---------------------------------------------------------------------------
void __fastcall TFormKategorijeProjekata::cxDBNavigator1ButtonsButtonClick(TObject *Sender, int AButtonIndex, bool &ADone)
{
	//
	MsgAdminPriv();
	//

	if (8 != AButtonIndex)
	{
		cxDBVerticalGrid1->SetFocus();
		cxDBVerticalGrid1NAZIV->Focused = true;
	}
	else
		ADone = !MsgBoxDaNe("Brisete trenutno selektovani slog?");
}

// ---------------------------------------------------------------------------
void __fastcall TFormKategorijeProjekata::DataSource1StateChange(TObject *Sender)
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
void __fastcall TFormKategorijeProjekata::cxButton1Click(TObject *Sender)
{
	Close();
}
// ---------------------------------------------------------------------------
