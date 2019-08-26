//---------------------------------------------------------------------------

#ifndef UnitFormKategorijeProjekataH
#define UnitFormKategorijeProjekataH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "cxClasses.hpp"
#include "cxControls.hpp"
#include "cxCustomData.hpp"
#include "cxData.hpp"
#include "cxDataStorage.hpp"
#include "cxDBData.hpp"
#include "cxEdit.hpp"
#include "cxFilter.hpp"
#include "cxGraphics.hpp"
#include "cxGrid.hpp"
#include "cxGridCustomTableView.hpp"
#include "cxGridCustomView.hpp"
#include "cxGridDBTableView.hpp"
#include "cxGridLevel.hpp"
#include "cxGridTableView.hpp"
#include "cxLookAndFeelPainters.hpp"
#include "cxLookAndFeels.hpp"
#include "cxStyles.hpp"
#include "dxSkinOffice2007Blue.hpp"
#include <DB.hpp>
#include <ExtCtrls.hpp>
#include "cxButtons.hpp"
#include <Menus.hpp>
#include <ActnList.hpp>
#include "dxSkinsCore.hpp"
#include "dxSkinscxPCPainter.hpp"
#include "cxSpinEdit.hpp"
#include "cxDBNavigator.hpp"
#include "cxDBVGrid.hpp"
#include "cxInplaceContainer.hpp"
#include "cxNavigator.hpp"
#include "cxVGrid.hpp"
#include "dxSkinOffice2010Blue.hpp"
#include "cxContainer.hpp"
#include "cxLabel.hpp"
//---------------------------------------------------------------------------
class TFormKategorijeProjekata : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TcxDBNavigator *cxDBNavigator1;
	TcxButton *cxButton1;
	TcxLabel *cxLabel1;
	TPanel *Panel2;
	TSplitter *Splitter1;
	TcxGrid *cxGrid1;
	TcxGridDBTableView *cxGrid1DBTableView1;
	TcxGridLevel *cxGrid1Level1;
	TPanel *Panel4;
	TcxDBVerticalGrid *cxDBVerticalGrid1;
	TcxDBNavigator *cxDBNavigator2;
	TPanel *Panel3;
	TDataSource *DataSource1;
	TcxDBEditorRow *cxDBVerticalGrid1NAZIV;
	TcxDBEditorRow *cxDBVerticalGrid1ZSIC;
	TcxDBEditorRow *cxDBVerticalGrid1ZSEF;
	TcxGridDBColumn *cxGrid1DBTableView1NAZIV;
	TcxGridDBColumn *cxGrid1DBTableView1ZSIC;
	TcxGridDBColumn *cxGrid1DBTableView1ZSEF;
	void __fastcall cxDBNavigator1ButtonsButtonClick(TObject *Sender, int AButtonIndex,
          bool &ADone);
	void __fastcall cxButton1Click(TObject *Sender);
	void __fastcall DataSource1StateChange(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFormKategorijeProjekata(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormKategorijeProjekata *FormKategorijeProjekata;
//---------------------------------------------------------------------------
#endif
