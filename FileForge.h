#ifndef FileForgeH
#define FileForgeH

//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ComCtrls.hpp>
//---------------------------------------------------------------------------
class TForm3 : public TForm
{
__published:    // IDE-managed Components
    TPanel *Panel2;
    TButton *Button11;
    TButton *Button12;
    TButton *Button1;
    TButton *Button2;
    TButton *Button3;
    TButton *Button4;
    TLabel *Label3;
    TMemo *Memo1;
    TLabel *Label4;
    TLabel *Label1;
    TCheckBox *CheckBox1;
    TMemo *Memo2;
	TTreeView *TreeView1;
    void __fastcall Button12Click(TObject *Sender);
    void __fastcall Button11Click(TObject *Sender);
    void __fastcall Memo2Change(TObject *Sender);
    void __fastcall Button2Click(TObject *Sender);
    void __fastcall Button1Click(TObject *Sender);
    void __fastcall Button4Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);

private:    // User declarations
    String filename; // Variable to store the filename
public:        // User declarations
    __fastcall TForm3(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm3 *Form3;
//---------------------------------------------------------------------------
#endif

