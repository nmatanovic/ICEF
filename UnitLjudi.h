//---------------------------------------------------------------------------

#ifndef UnitLjudiH
#define UnitLjudiH
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
#include "dxSkinsCore.hpp"
#include "dxSkinscxPCPainter.hpp"
#include <DB.hpp>
#include <ExtCtrls.hpp>
#include "cxDBVGrid.hpp"
#include "cxInplaceContainer.hpp"
#include "cxVGrid.hpp"
#include "cxDBNavigator.hpp"
#include "cxNavigator.hpp"
#include "dxSkinOffice2010Blue.hpp"
#include "cxButtons.hpp"
#include <Menus.hpp>
#include "cxMaskEdit.hpp"
#include "cxTextEdit.hpp"
#include "cxContainer.hpp"
#include "cxLabel.hpp"
#include "cxCheckBox.hpp"
//---------------------------------------------------------------------------
class TFormLjudi : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TPanel *Panel2;
	TPanel *Panel3;
	TcxGrid *cxGrid1;
	TcxGridDBTableView *cxGrid1DBTableView1;
	TcxGridLevel *cxGrid1Level1;
	TDataSource *DataSource1;
	TcxGridDBColumn *cxGrid1DBTableView1ID;
	TcxGridDBColumn *cxGrid1DBTableView1MATBROJ;
	TcxGridDBColumn *cxGrid1DBTableView1PREZIME;
	TcxGridDBColumn *cxGrid1DBTableView1IME;
	TcxGridDBColumn *cxGrid1DBTableView1ADRESA;
	TcxGridDBColumn *cxGrid1DBTableView1TELEFON;
	TcxGridDBColumn *cxGrid1DBTableView1EMAIL;
	TcxGridDBColumn *cxGrid1DBTableView1TEKUCI_RACUN;
	TSplitter *Splitter1;
	TPanel *Panel4;
	TcxDBVerticalGrid *cxDBVerticalGrid1;
	TcxDBNavigator *cxDBNavigator2;
	TcxDBNavigator *cxDBNavigator1;
	TcxButton *cxButton1;
	TcxDBEditorRow *cxDBVerticalGrid1ID;
	TcxDBEditorRow *cxDBVerticalGrid1MATBROJ;
	TcxDBEditorRow *cxDBVerticalGrid1PREZIME;
	TcxDBEditorRow *cxDBVerticalGrid1IME;
	TcxDBEditorRow *cxDBVerticalGrid1ADRESA;
	TcxDBEditorRow *cxDBVerticalGrid1TELEFON;
	TcxDBEditorRow *cxDBVerticalGrid1EMAIL;
	TcxDBEditorRow *cxDBVerticalGrid1TEKUCI_RACUN;
	TcxLabel *cxLabel1;
	TcxGridDBColumn *cxGrid1DBTableView1NA_PROJEKTU;
	TcxGridDBColumn *cxGrid1DBTableView1NA_STAVKAMA;
	TcxDBEditorRow *cxDBVerticalGrid1NA_PROJEKTU;
	TcxDBEditorRow *cxDBVerticalGrid1NA_STAVKAMA;
	void __fastcall cxDBNavigator1ButtonsButtonClick(TObject *Sender, int AButtonIndex,
          bool &ADone);
	void __fastcall DataSource1StateChange(TObject *Sender);
	void __fastcall cxButton1Click(TObject *Sender);
	void __fastcall cxDBVerticalGrid1MATBROJEditPropertiesValidate(TObject *Sender,
          Variant &DisplayValue, TCaption &ErrorText, bool &Error);
private:	// User declarations
public:		// User declarations
	__fastcall TFormLjudi(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormLjudi *FormLjudi;
//---------------------------------------------------------------------------
#endif
