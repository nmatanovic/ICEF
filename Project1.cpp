//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("UnitFormPrint.cpp", FormPrint);
USEFORM("UnitFormProjektEdit.cpp", FormProjektEdit);
USEFORM("UnitFormKategorijeProjekata.cpp", FormKategorijeProjekata);
USEFORM("UnitFormKoefEdit.cpp", FormKoefEdit);
USEFORM("UnitFormStavkaEdit.cpp", FormStavkaEdit);
USEFORM("UnitLjudi.cpp", FormLjudi);
USEFORM("UnitFormKategorijaProEdit.cpp", FormKategorijaProEdit);
USEFORM("UnitDataModule1.cpp", DataModule1); /* TDataModule: File Type */
USEFORM("UnitformBackupRestore.cpp", FormBackupRestore);
USEFORM("Unit1.cpp", Form1);
USEFORM("UnitFormLogin.cpp", FormLogin);
//---------------------------------------------------------------------------
WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->Title = "Evidencija projekata Inovacionog centra";
		Application->CreateForm(__classid(TForm1), &Form1);
		Application->CreateForm(__classid(TDataModule1), &DataModule1);
		Application->CreateForm(__classid(TFormLogin), &FormLogin);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
