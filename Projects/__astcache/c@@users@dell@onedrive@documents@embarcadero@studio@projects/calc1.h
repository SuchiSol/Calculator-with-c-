 //---------------------------------------------------------------------------

#ifndef calc1H
#define calc1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TButton *btn1;
	TButton *btn2;
	TButton *btn3;
	TButton *btn4;
	TButton *btn5;
	TButton *btn6;
	TButton *btn7;
	TButton *btn8;
	TButton *btn9;
	TButton *btnadd;
	TButton *btnMinus;
	TButton *btn0;
	TButton *btndiv;
	TButton *btnMul;
	TButton *btnC;
	TButton *btnEquals;
	TEdit *EditDisplay;
	void __fastcall NumberClick(TObject *Sender);
	void __fastcall OperatorClick(TObject *Sender);
	void __fastcall btnEqualsClick(TObject *Sender);
	void __fastcall btnCClick(TObject *Sender);
private:
      double FLastValue;
    UnicodeString FLastOperation;
	// User declarations
public:


	// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
