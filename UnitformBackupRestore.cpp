// ---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UnitformBackupRestore.h"
#include "UnitUtil.h"
#include "UnitDataModule1.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "cxContainer"
#pragma link "cxControls"
#pragma link "cxEdit"
#pragma link "cxGraphics"
#pragma link "cxLookAndFeelPainters"
#pragma link "cxLookAndFeels"
#pragma link "cxShellCommon"
#pragma link "cxShellListView"
#pragma link "dxSkinOffice2007Blue"
#pragma link "dxSkinOffice2010Blue"
#pragma link "dxSkinsCore"
#pragma link "cxLabel"
#pragma link "cxButtons"
#pragma resource "*.dfm"
TFormBackupRestore *FormBackupRestore;

// ---------------------------------------------------------------------------
__fastcall TFormBackupRestore::TFormBackupRestore(TComponent* Owner) : TForm(Owner)
{
	try
	{
		LB1->Mask = "rucno*";
		LB1->Directory = GetCurrentDir() + "\\BACKUP";
	}
	catch (...)
	{
		// ShowMessage(" 1111 ");
	}

	try
	{
		LB2->Mask = "auto*";
		LB2->Directory = LB1->Directory;
	}
	catch (...)
	{
		// ShowMessage("2222");
	}

}

// ---------------------------------------------------------------------------
void __fastcall TFormBackupRestore::FormResize(TObject *Sender)
{
	LB1->Width = Width / 2;
	cxButton3->Left = LB2->Left;
	cxButton4->Left = LB2->Left;
}

// ---------------------------------------------------------------------------
void __fastcall TFormBackupRestore::cxButton1Click(TObject *Sender)
{
	if (-1 == LB1->ItemIndex)
	{
		MsgBoxUpoz("Nije selektovana BuckUp baza za Aktiviranje/Pregled!");
		return;
	}

	DataModule1->AktivirajBackUpBazu(LB1->Items->operator[](LB1->ItemIndex));
	MsgBoxUpoz("Napomena: Sve izmene idu u BackUP bazu !!! Nije preporuceno unositi/menjati podatke !!!");
}

// ---------------------------------------------------------------------------
void __fastcall TFormBackupRestore::cxButton3Click(TObject *Sender)
{
	if (-1 == LB2->ItemIndex)
	{
		MsgBoxUpoz("Nije selektovana BuckUp baza iz AutoBackup-a za Aktiviranje/Pregled!");
		return;
	}

	DataModule1->AktivirajBackUpBazu(LB2->Items->operator[](LB2->ItemIndex));
	MsgBoxUpoz("Napomena: Sve izmene idu u BackUP bazu !!! Nije preporuceno unositi/menjati podatke !!!");
}

// ---------------------------------------------------------------------------
void __fastcall TFormBackupRestore::cxButton2Click(TObject *Sender)
{
	//
	MsgAdminPriv();
	//

	if (-1 == LB1->ItemIndex)
	{
		MsgBoxUpoz("Nije selektovana BuckUp baza za Aktiviranje/Pregled!");
		return;
	}

	if (MsgBoxDaNe("Izabrali ste Restorovanje BackUp Baze, ovo ce prebrisati originalnu bazu, da li ste sigurni?"))
	{
		DataModule1->RestorujBackUpBazu(LB1->Items->operator[](LB1->ItemIndex));
		return;
	}

}

// ---------------------------------------------------------------------------
void __fastcall TFormBackupRestore::cxButton4Click(TObject *Sender)
{
	//
	MsgAdminPriv();
	//

	if (-1 == LB1->ItemIndex)
	{
		MsgBoxUpoz("Nije selektovana BuckUp baza za Aktiviranje/Pregled!");
		return;
	}

	if (MsgBoxDaNe("Izabrali ste Restorovanje BackUp Baze, ovo ce prebrisati originalnu bazu, da li ste sigurni?"))
	{
		DataModule1->RestorujBackUpBazu(LB2->Items->operator[](LB2->ItemIndex));
		return;
	}
}
// ---------------------------------------------------------------------------

void __fastcall TFormBackupRestore::cxButton5Click(TObject *Sender)
{
	Close();
}
// ---------------------------------------------------------------------------
