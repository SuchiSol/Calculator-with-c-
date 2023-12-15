//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "calc1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
int num1;
int num2;
int result;
String operation;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	
}
//---------------------------------------------------------------------------


void __fastcall TForm1::NumberClick(TObject *Sender)
{
	TButton* button = ((TButton*)Sender);

	if  (EditDisplay->Text=="0")
	{
		EditDisplay->Text = button->Caption;
	}
	else
	{
		EditDisplay->Text = EditDisplay->Text +button->Caption;
	}

}
//---------------------------------------------------------------------------

void __fastcall TForm1::OperatorClick(TObject *Sender)
{
	 TButton* button = ((TButton*)Sender);
	 num1 =   (EditDisplay->Text.ToInt());
	 operation = button->Caption;
	 EditDisplay->Text = "";

}
//---------------------------------------------------------------------------

void __fastcall TForm1::btnEqualsClick(TObject *Sender)
{
	num2 =  (EditDisplay->Text.ToInt());
	if (operation == "+")
	{
	  result= num1+ num2;
	  EditDisplay->Text= result;
	}
	else if (operation == "-")
	{
	  result= num1 - num2;
	  EditDisplay->Text= result;
	}
	else if (operation == "*")
	{
	  result= num1* num2;
	  EditDisplay->Text= result;
	}
	else if (operation == "/")
	{
	  result= num1/ num2;
	  EditDisplay->Text= result;
	}

}
//---------------------------------------------------------------------------

void __fastcall TForm1::btnCClick(TObject *Sender)
{
	EditDisplay->Text ="";

}
//---------------------------------------------------------------------------

