// ---------------------------------------------------------------------------

#pragma hdrstop

#include "UnitUtil.h"
#include "Unit1.h"

// ---------------------------------------------------------------------------

#pragma package(smart_init)

bool MsgBoxDaNe(const UnicodeString &strMsg)
{
	return (IDYES == MessageBoxW(Application->ActiveFormHandle, strMsg.w_str(), Application->Title.w_str(), MB_YESNO | MB_ICONQUESTION));
}

void MsgBoxUpoz(const UnicodeString &strMsg)
{
	MessageBox(Application->ActiveFormHandle, strMsg.w_str(), Application->Title.w_str(), MB_OK | MB_ICONWARNING);
}

void MsgBoxGreska(const UnicodeString &strMsg)
{
	MessageBox(Application->ActiveFormHandle, strMsg.w_str(), Application->Title.w_str(), MB_OK | MB_ICONERROR);
}

void MsgAdminPriv()
{
	if (!Form1->JelAdminLogovan())
		throw Exception("Neophodne privilegije rukovodioca ICEF-a");
}
