//---------------------------------------------------------------------------

#ifndef UnitFormPrintH
#define UnitFormPrintH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "cxDrawTextUtils.hpp"
#include "dxBkgnd.hpp"
#include "dxPrnDev.hpp"
#include "dxPrnPg.hpp"
#include "dxPSCompsProvider.hpp"
#include "dxPSCore.hpp"
#include "dxPScxEditorProducers.hpp"
#include "dxPScxExtEditorProducers.hpp"
#include "dxPScxPageControlProducer.hpp"
#include "dxPSEdgePatterns.hpp"
#include "dxPSEngn.hpp"
#include "dxPSFillPatterns.hpp"
#include "dxPSGlbl.hpp"
#include "dxPSPDFExport.hpp"
#include "dxPSPDFExportCore.hpp"
#include "dxPSPrVwAdv.hpp"
#include "dxPSPrVwRibbon.hpp"
#include "dxPSPrVwStd.hpp"
#include "dxPSUtl.hpp"
#include "dxSkinOffice2007Blue.hpp"
#include "dxSkinsCore.hpp"
#include "dxSkinscxPCPainter.hpp"
#include "dxSkinsdxBarPainter.hpp"
#include "dxWrap.hpp"
#include "frxClass.hpp"
#include "frxPreview.hpp"
#include <ExtCtrls.hpp>
#include "cxButtons.hpp"
#include "cxGraphics.hpp"
#include "cxLookAndFeelPainters.hpp"
#include "cxLookAndFeels.hpp"
#include <Menus.hpp>
//---------------------------------------------------------------------------
class TFormPrint : public TForm
{
__published:	// IDE-managed Components
	TfrxUserDataSet *frxUserDataSet1;
	TfrxReport *frxReport1;
	TfrxPreview *frxPreview1;
	TPanel *Panel1;
	TcxButton *cxButton1;
	TcxButton *cxButton2;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall frxUserDataSet1CheckEOF(TObject *Sender, bool &Eof);
	void __fastcall frxUserDataSet1First(TObject *Sender);
	void __fastcall frxUserDataSet1Next(TObject *Sender);
	void __fastcall frxUserDataSet1GetValue(const UnicodeString VarName, Variant &Value);
	void __fastcall cxButton1Click(TObject *Sender);
	void __fastcall cxButton2Click(TObject *Sender);
	void __fastcall frxReport1BeforePrint(TfrxReportComponent *Sender);

private:	// User declarations
	double m_Total;
public:		// User declarations
	__fastcall TFormPrint(TComponent* Owner,double dTotal);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormPrint *FormPrint;
//---------------------------------------------------------------------------
#endif
