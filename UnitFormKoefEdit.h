// ---------------------------------------------------------------------------

#ifndef UnitFormKoefEditH
#define UnitFormKoefEditH
// ---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <DB.hpp>
#include "cxButtons.hpp"
#include "cxGraphics.hpp"
#include "cxLookAndFeelPainters.hpp"
#include "cxLookAndFeels.hpp"
#include <Menus.hpp>
#include "cxContainer.hpp"
#include "cxControls.hpp"
#include "cxDBEdit.hpp"
#include "cxEdit.hpp"
#include "cxLabel.hpp"
#include "cxMaskEdit.hpp"
#include "cxSpinEdit.hpp"
#include "cxTextEdit.hpp"
#include "dxSkinOffice2007Blue.hpp"
#include "dxSkinsCore.hpp"
#include "dxSkinOffice2010Blue.hpp"
// ---------------------------------------------------------------------------
class TStavkaTipModel;

// ---------------------------------------------------------------------------
class TFormKoefEdit : public TForm
{
__published: // IDE-managed Components

	TDataSource *DataSourceAH;
	TcxButton *cxButton1;
	TcxDBSpinEdit *cxDBSpinEdit1;
	TcxDBSpinEdit *cxDBSpinEdit2;
	TcxDBSpinEdit *cxDBSpinEdit3;
	TcxLabel *cxLabel1;
	TcxLabel *cxLabel2;
	TcxLabel *cxLabel3;
	TDataSource *DataSourceUG;
	TDataSource *DataSourceZR;
	TcxButton *cxButton2;
	TLabel *Label1;

	void __fastcall cxButton1Click(TObject *Sender);

private: // User declarations

	TStavkaTipModel *m_StavkaAH;
	TStavkaTipModel *m_StavkaUG;
	TStavkaTipModel *m_StavkaZR;

public: // User declarations

	__fastcall TFormKoefEdit(TComponent* Owner);
};

// ---------------------------------------------------------------------------
extern PACKAGE TFormKoefEdit *FormKoefEdit;
// ---------------------------------------------------------------------------
#endif
