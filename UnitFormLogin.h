// ---------------------------------------------------------------------------

#ifndef UnitFormLoginH
#define UnitFormLoginH
// ---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include "cxButtons.hpp"
#include "cxContainer.hpp"
#include "cxControls.hpp"
#include "cxEdit.hpp"
#include "cxGraphics.hpp"
#include "cxLabel.hpp"
#include "cxLookAndFeelPainters.hpp"
#include "cxLookAndFeels.hpp"
#include "dxSkinOffice2007Blue.hpp"
#include "dxSkinOffice2010Blue.hpp"
#include "dxSkinsCore.hpp"
#include <Menus.hpp>
#include "cxTextEdit.hpp"

// ---------------------------------------------------------------------------
class TFormLogin : public TForm
{
__published: // IDE-managed Components

	TPanel *Panel1;
	TPanel *Panel2;
	TPanel *Panel3;
	TcxButton *cxButton1;
	TcxButton *cxButton2;
	TcxLabel *cxLabel1;
	TcxLabel *cxLabel2;
	TcxTextEdit *cxTextEdit1;
	TcxTextEdit *cxTextEdit2;
	TLabel *Label1;

private: // User declarations

public: // User declarations

	__fastcall UnicodeString GetUserNameText()
	{
		return cxTextEdit1->Text;
	}

	__fastcall UnicodeString GetPasswordText()
	{
		return cxTextEdit2->Text;
	}
	__fastcall TFormLogin(TComponent* Owner);
};

// ---------------------------------------------------------------------------
extern PACKAGE TFormLogin *FormLogin;
// ---------------------------------------------------------------------------
#endif
