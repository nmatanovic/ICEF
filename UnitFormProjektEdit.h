// ---------------------------------------------------------------------------

#ifndef UnitFormProjektEditH
#define UnitFormProjektEditH
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
#include "cxSpinEdit.hpp"
#include "cxTextEdit.hpp"
#include "dxSkinOffice2007Blue.hpp"
#include "dxSkinsCore.hpp"
#include "dxSkinsDefaultPainters.hpp"
#include "dxSkinStardust.hpp"
#include <DB.hpp>
#include "cxDBLookupComboBox.hpp"
#include "cxDBLookupEdit.hpp"
#include "cxLookupEdit.hpp"
#include "dxSkinOffice2010Blue.hpp"
// ---------------------------------------------------------------------------
class TRecordModel;
class TProjektModel;
class TKategorijaModel;

// ---------------------------------------------------------------------------
class TFormProjektEdit : public TForm
{
__published: // IDE-managed Components

	TPanel *Panel2;
	TcxButton *cxButton1;
	TcxButton *cxButton2;
	TPanel *Panel1;
	TPanel *Panel3;
	TGridPanel *GridPanel1;
	TcxLabel *cxLabel;
	TcxDBSpinEdit *cxDBSpinEdit1;
	TcxLabel *cxLabel2;
	TcxDBTextEdit *cxDBTextEdit1;
	TcxLabel *cxLabel3;
	TcxDBSpinEdit *cxDBSpinEdit2;
	TcxLabel *cxLabel4;
	TcxDBSpinEdit *cxDBSpinEdit3;
	TcxLabel *cxLabel5;
	TcxDBDateEdit *cxDBDateEdit1;
	TDataSource *DataSourceProjekt;
	TDataSource *DataSourceKategorije;
	TcxDBLookupComboBox *cxDBLookupComboBox1;
	TcxLabel *cxLabel1;
	TLabel *Label1;
	TcxLabel *cxLabel6;
	TDataSource *DataSourceLjudi;
	TcxDBLookupComboBox *RukovodilacCombo;
	void __fastcall cxButton1Click(TObject *Sender);
	void __fastcall cxDBLookupComboBox1PropertiesChange(TObject *Sender);
	void __fastcall cxButton2Click(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);

private: // User declarations
	TProjektModel *m_RMProjekt;
	TKategorijaModel *m_RMKategorija;

public: // User declarations

	__fastcall TFormProjektEdit(TComponent* Owner);
};

// ---------------------------------------------------------------------------
extern PACKAGE TFormProjektEdit *FormProjektEdit;
// ---------------------------------------------------------------------------
#endif
