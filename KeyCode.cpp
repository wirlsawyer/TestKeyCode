//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "KeyCode.h"
#include <stdio.h>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormKeyDown(TObject *Sender, WORD &Key, TShiftState Shift)

{
	wchar_t buf[256];
	wsprintf(buf, L"Key=%d (%xH)\n", Key, Key);
	OutputDebugString(buf);
	Label1->Caption = buf;
}
//---------------------------------------------------------------------------

