// ---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UnitFormPrint.h"
#include "UnitDataModule1.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)
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
#pragma link "dxSkinOffice2007Blue"
#pragma link "dxSkinsCore"
#pragma link "dxSkinscxPCPainter"
#pragma link "dxSkinsdxBarPainter"
#pragma link "dxWrap"
#pragma link "frxClass"
#pragma link "frxPreview"
#pragma link "cxButtons"
#pragma link "cxGraphics"
#pragma link "cxLookAndFeelPainters"
#pragma link "cxLookAndFeels"
#pragma resource "*.dfm"
TFormPrint *FormPrint;

// ---------------------------------------------------------------------------
__fastcall TFormPrint::TFormPrint(TComponent* Owner, double dTotal) : TForm(Owner)
{
	m_Total = dTotal;
}

// ---------------------------------------------------------------------------
void __fastcall TFormPrint::FormCreate(TObject *Sender)
{
	frxReport1->ShowReport(true);
}
// ---------------------------------------------------------------------------

void __fastcall TFormPrint::frxUserDataSet1CheckEOF(TObject *Sender, bool &Eof)
{
	Eof = DataModule1->ADOTableStavkeProjekta->Eof;
}
// ---------------------------------------------------------------------------

void __fastcall TFormPrint::frxUserDataSet1First(TObject *Sender)
{
	DataModule1->ADOTableStavkeProjekta->First();
}

// ---------------------------------------------------------------------------
void __fastcall TFormPrint::frxUserDataSet1Next(TObject *Sender)
{
	DataModule1->ADOTableStavkeProjekta->Next();
}

// ---------------------------------------------------------------------------
void __fastcall TFormPrint::frxUserDataSet1GetValue(const UnicodeString VarName, Variant &Value)
{
	Value = DataModule1->ADOTableStavkeProjekta->FieldValues[VarName];
}

// ---------------------------------------------------------------------------
void __fastcall TFormPrint::cxButton1Click(TObject *Sender)
{
	Close();
}

// ---------------------------------------------------------------------------
void __fastcall TFormPrint::cxButton2Click(TObject *Sender)
{
	frxReport1->Print();
	Close();
}

// ---------------------------------------------------------------------------
void __fastcall TFormPrint::frxReport1BeforePrint(TfrxReportComponent *Sender)
{
	TfrxMemoView *pMemoTmp = dynamic_cast<TfrxMemoView*>(frxReport1->FindObject("MemoTotal"));
	pMemoTmp->Text = FormatFloat("#,##0.00", m_Total);

	pMemoTmp = dynamic_cast<TfrxMemoView*>(frxReport1->FindObject("MemoProjektIme"));
	pMemoTmp->Text = IntToStr(DataModule1->ADOTableProjekti->FieldByName("ID")->AsInteger) + " - " +
		DataModule1->ADOTableProjekti->FieldByName("NAZIV_PROJEKTA")->AsString;

	pMemoTmp = dynamic_cast<TfrxMemoView*>(frxReport1->FindObject("MemoVodja"));
	pMemoTmp->Text = DataModule1->ADOTableProjekti->FieldByName("VODJA")->AsString;
}
// ---------------------------------------------------------------------------
