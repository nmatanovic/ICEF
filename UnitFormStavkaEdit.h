// ---------------------------------------------------------------------------

#ifndef UnitFormStavkaEditH
#define UnitFormStavkaEditH
// ---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "cxButtons.hpp"
#include "cxGraphics.hpp"
#include "cxLookAndFeelPainters.hpp"
#include "cxLookAndFeels.hpp"
#include <ExtCtrls.hpp>
#include <Menus.hpp>
#include "cxCalendar.hpp"
#include "cxContainer.hpp"
#include "cxControls.hpp"
#include "cxDBEdit.hpp"
#include "cxDropDownEdit.hpp"
#include "cxEdit.hpp"
#include "cxLabel.hpp"
#include "cxMaskEdit.hpp"
#include "cxTextEdit.hpp"
#include "dxSkinOffice2007Blue.hpp"
#include "cxDBLookupComboBox.hpp"
#include "cxDBLookupEdit.hpp"
#include "cxLookupEdit.hpp"
#include "cxCurrencyEdit.hpp"
#include "cxMemo.hpp"
#include <DB.hpp>
#include <DBCtrls.hpp>
#include "dxSkinsCore.hpp"
#include "dxSkinOffice2010Blue.hpp"
#include "cxDBExtLookupComboBox.hpp"
// ---------------------------------------------------------------------------
class TRecordModel;
class TProjektModel;
class TStavkaModel;
class TStavkaTipModel;

// ---------------------------------------------------------------------------
class TFormStavkaEdit : public TForm
{
__published: // IDE-managed Components

	TPanel *Panel1;
	TPanel *Panel2;
	TPanel *Panel3;
	TcxButton *cxButton1;
	TcxButton *cxButton2;
	TcxDBDateEdit *cxDBDateEdit1;
	TcxLabel *cxLabel1;
	TGridPanel *GridPanel1;
	TcxLabel *LabelUplata;
	TcxDBCurrencyEdit *EditUplata;
	TcxLabel *LabelTrosak;
	TcxDBCurrencyEdit *EditTrosak;
	TcxLabel *LabelBrutoNaknada;
	TcxDBCurrencyEdit *EditBrutoNaknada;
	TcxLabel *LabelNetoNaknada;
	TcxDBCurrencyEdit *EditNetoNaknada;
	TcxLabel *LabelFondZSIC;
	TcxDBCurrencyEdit *EditFondZSIC;
	TcxLabel *LabelFondZSEF;
	TcxDBCurrencyEdit *EditFondZSEF;
	TDataSource *DataSourceStavka;
	TDataSource *DataSourceStavkaTip;
	TcxDBLookupComboBox *ComboBoxStavkaTip;
	TcxLabel *cxLabel9;
	TDBText *DBText1;
	TDBText *DBText2;
	TDataSource *DataSource1;
	TLabel *Label1;
	TcxDBMemo *EditKomentar;
	TDataSource *DataSourceLjudi;
	TcxLabel *cxLabel2;
	TcxDBLookupComboBox *UplatiNaComboBox;

	void __fastcall ComboBoxStavkaTipPropertiesChange(TObject *Sender);
	void __fastcall EditNetoNaknadaExit(TObject *Sender);
	void __fastcall EditBrutoNaknadaExit(TObject *Sender);
	void __fastcall cxButton1Click(TObject *Sender);
	void __fastcall cxButton2Click(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall cxDBLookupComboBox1PropertiesChange(TObject *Sender);

private: // User declarations

	TStavkaModel *m_RMStavka;
	TProjektModel *m_RMProjekt;
	TRecordModel *m_RMStavkaTip;

public: // User declarations

	__fastcall TFormStavkaEdit(TComponent* Owner);

};

// ---------------------------------------------------------------------------
extern PACKAGE TFormStavkaEdit *FormStavkaEdit;
// ---------------------------------------------------------------------------
#endif
