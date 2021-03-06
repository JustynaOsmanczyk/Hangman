//---------------------------------------------------------------------------

#ifndef Unit6H
#define Unit6H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
#include <Buttons.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TButton *start_button;
        TImage *line2;
        TImage *line3;
        TImage *line4;
        TImage *line5;
        TImage *line6;
        TImage *line7;
        TImage *line8;
        TImage *line9;
        TImage *line10;
        TImage *line1;
        TImage *line11;
        TImage *line12;
        TImage *line13;
        TImage *line14;
        TImage *line15;
        TBitBtn *A;
        TBitBtn *B;
        TBitBtn *C;
        TBitBtn *D;
        TBitBtn *E;
        TBitBtn *F;
        TBitBtn *G;
        TBitBtn *H;
        TBitBtn *I;
        TBitBtn *J;
        TBitBtn *K;
        TBitBtn *L;
        TBitBtn *M;
        TBitBtn *N;
        TBitBtn *O;
        TBitBtn *P;
        TBitBtn *R;
        TBitBtn *S;
        TBitBtn *T;
        TBitBtn *U;
        TBitBtn *W;
        TBitBtn *X;
        TBitBtn *Y;
        TBitBtn *Z;
        TBitBtn *Q;
        TBitBtn *V;
        TLabel *letter1;
        TLabel *letter2;
        TLabel *letter3;
        TLabel *letter4;
        TLabel *letter5;
        TLabel *letter6;
        TLabel *letter7;
        TLabel *letter8;
        TLabel *letter9;
        TLabel *letter10;
        TLabel *letter11;
        TLabel *letter12;
        TLabel *letter13;
        TLabel *letter14;
        TLabel *letter15;
        TTimer *timer;
        TImage *head_picture;
        TImage *vertical_line_picture;
        TImage *tier_line_picture;
        TImage *incline_line_picture;
        TImage *basis_line_picture;
        TImage *rope_picture;
        TImage *torso_picture;
        TImage *left_leg_picture;
        TImage *right_leg_picture;
        TImage *right_arm_picture;
        TImage *left_arm_picture;
        TButton *defeat_button;
        TButton *win_button;
        TButton *school_category;
        TButton *geography_category;
        TButton *sport_category;
        TButton *animal_category;
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall start_buttonClick(TObject *Sender);
        void __fastcall AClick(TObject *Sender);
        void __fastcall BClick(TObject *Sender);
        void __fastcall CClick(TObject *Sender);
        void __fastcall DClick(TObject *Sender);
        void __fastcall EClick(TObject *Sender);
        void __fastcall FClick(TObject *Sender);
        void __fastcall GClick(TObject *Sender);
        void __fastcall HClick(TObject *Sender);
        void __fastcall IClick(TObject *Sender);
        void __fastcall JClick(TObject *Sender);
        void __fastcall KClick(TObject *Sender);
        void __fastcall LClick(TObject *Sender);
        void __fastcall MClick(TObject *Sender);
        void __fastcall NClick(TObject *Sender);
        void __fastcall OClick(TObject *Sender);
        void __fastcall PClick(TObject *Sender);
        void __fastcall QClick(TObject *Sender);
        void __fastcall RClick(TObject *Sender);
        void __fastcall SClick(TObject *Sender);
        void __fastcall TClick(TObject *Sender);
        void __fastcall UClick(TObject *Sender);
        void __fastcall VClick(TObject *Sender);
        void __fastcall WClick(TObject *Sender);
        void __fastcall XClick(TObject *Sender);
        void __fastcall YClick(TObject *Sender);
        void __fastcall ZClick(TObject *Sender);
        void __fastcall timerTimer(TObject *Sender);
        void __fastcall win_buttonClick(TObject *Sender);
        void __fastcall defeat_buttonClick(TObject *Sender);
        void __fastcall school_categoryClick(TObject *Sender);
        void __fastcall geography_categoryClick(TObject *Sender);
        void __fastcall sport_categoryClick(TObject *Sender);
        void __fastcall animal_categoryClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
