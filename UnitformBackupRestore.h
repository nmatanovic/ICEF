//---------------------------------------------------------------------------

#ifndef UnitformBackupRestoreH
#define UnitformBackupRestoreH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include "cxContainer.hpp"
#include "cxControls.hpp"
#include "cxEdit.hpp"
#include "cxGraphics.hpp"
#include "cxLookAndFeelPainters.hpp"
#include "cxLookAndFeels.hpp"
#include "cxShellCommon.hpp"
#include "cxShellListView.hpp"
#include "dxSkinOffice2007Blue.hpp"
#include "dxSkinOffice2010Blue.hpp"
#include "dxSkinsCore.hpp"
#include <ComCtrls.hpp>
#include <ShlObj.hpp>
#include "cxLabel.hpp"
#include <FileCtrl.hpp>
#include "cxButtons.hpp"
#include <Menus.hpp>
//---------------------------------------------------------------------------
class TFormBackupRestore : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TPanel *Panel2;
	TPanel *Panel3;
	TcxLabel *cxLabel2;
	TcxLabel *cxLabel1;
	TFileListBox *LB1;
	TcxButton *cxButton1;
	TcxButton *cxButton2;
	TcxButton *cxButton3;
	TcxButton *cxButton4;
	TcxButton *cxButton5;
	TFileListBox *LB2;
	void __fastcall FormResize(TObject *Sender);
	void __fastcall cxButton1Click(TObject *Sender);
	void __fastcall cxButton3Click(TObject *Sender);
	void __fastcall cxButton2Click(TObject *Sender);
	void __fastcall cxButton4Click(TObject *Sender);
	void __fastcall cxButton5Click(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall TFormBackupRestore(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormBackupRestore *FormBackupRestore;
//---------------------------------------------------------------------------
#endif
