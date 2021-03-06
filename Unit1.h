//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TShape *tlo;
        TImage *b;
        TImage *p1;
        TImage *p2;
        TTimer *TimerB;
        TTimer *TimerP1G;
        TTimer *TimerP2G;
        TTimer *TimerP1D;
        TTimer *TimerP2D;
        void __fastcall TimerBTimer(TObject *Sender);
        void __fastcall TimerP1GTimer(TObject *Sender);
        void __fastcall TimerP1DTimer(TObject *Sender);
        void __fastcall TimerP2GTimer(TObject *Sender);
        void __fastcall TimerP2DTimer(TObject *Sender);
        void __fastcall FormKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall FormKeyUp(TObject *Sender, WORD &Key,
          TShiftState Shift);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
 