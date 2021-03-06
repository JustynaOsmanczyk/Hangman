//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
using namespace std;

#include "Unit6.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

        string words[10];
        string school[10] = {"BIOLOGY", "LITERATURE", "MATHEMATICS", "UNIVERSITY", "BALLPEN", "HEADMASTER", "TIMETABLE", "LIBRARY", "KINDERGARTEN", "HUMANITIES"};
        string geography[10] = {"ANTARCTICA", "GREENLAND", "SARDINIA", "SIBERIA", "CARIBBEAN", "MOUNTAIN", "VALLEY", "LOWLAND", "TROPIC", "SANDSTONE"};
        string sport[10] = {"BOXING", "CHEERLEADING", "ARCHERY", "AEROBICS", "CYCLING", "FISHING", "JOGGING", "RUGBY", "LIFTING", "ROWING"};
        string animal[10] = {"HAMSTER", "PARROT", "GOLDFISH", "MOUSE", "KITTEN", "WOODPECKER", "GIRAFFE", "ELEPHANT", "KANGAROO", "HEDGEHOG"};

        string word;
        char selected_letter;
        int word_length;
        int words_counter = 10;
        int win_counter = 0;
        int counter = 0;
        int click = 0;

        bool comparison(){
                int counter = 0;
                for(int i=0; i<word_length; i++){
                        if(word[i] == selected_letter) counter++;
                }
                if(counter > 0) return 1;
                return 0;
        }

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
        start_button->Show();
        animal_category->Hide();
        sport_category->Hide();
        geography_category->Hide();
        school_category->Hide();

        timer->Enabled = true;

        line1->Hide();
        line2->Hide();
        line3->Hide();
        line4->Hide();
        line5->Hide();
        line6->Hide();
        line7->Show();
        line8->Hide();
        line9->Hide();
        line10->Hide();
        line11->Hide();
        line12->Hide();
        line13->Hide();
        line14->Hide();
        line15->Hide();

        letter1->Show();
        letter1->Caption = "H";
        letter2->Show();
        letter2->Caption = "A";
        letter3->Show();
        letter3->Caption = "N";
        letter4->Show();
        letter4->Caption = "G";
        letter5->Show();
        letter5->Caption = "-";
        letter6->Show();
        letter6->Caption = "M";
        letter7->Hide();
        letter8->Show();
        letter8->Caption = "N";
        letter9->Hide();
        letter10->Hide();
        letter11->Hide();
        letter12->Hide();
        letter13->Hide();
        letter14->Hide();
        letter15->Hide();

        A->Enabled = true;
        B->Enabled = true;
        C->Enabled = true;
        D->Enabled = true;
        E->Enabled = true;
        F->Enabled = true;
        G->Enabled = true;
        H->Enabled = true;
        I->Enabled = true;
        J->Enabled = true;
        K->Enabled = true;
        L->Enabled = true;
        M->Enabled = true;
        N->Enabled = true;
        O->Enabled = true;
        P->Enabled = true;
        Q->Enabled = true;
        R->Enabled = true;
        S->Enabled = true;
        T->Enabled = true;
        U->Enabled = true;
        V->Enabled = true;
        W->Enabled = true;
        X->Enabled = true;
        Y->Enabled = true;
        Z->Enabled = true;

        A->Hide();
        B->Hide();
        C->Hide();
        D->Hide();
        E->Hide();
        F->Hide();
        G->Hide();
        H->Hide();
        I->Hide();
        J->Hide();
        K->Hide();
        L->Hide();
        M->Hide();
        N->Hide();
        O->Hide();
        P->Hide();
        Q->Hide();
        R->Hide();
        S->Hide();
        T->Hide();
        U->Hide();
        V->Hide();
        W->Hide();
        X->Hide();
        Y->Hide();
        Z->Hide();

        basis_line_picture->Show();
        vertical_line_picture->Show();
        tier_line_picture->Show();
        incline_line_picture->Show();
        rope_picture->Show();
        head_picture->Show();
        torso_picture->Show();
        left_arm_picture->Show();
        right_arm_picture->Hide();
        left_leg_picture->Show();
        right_leg_picture->Hide();

        defeat_button->Hide();
        win_button->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::start_buttonClick(TObject *Sender)
{
        start_button->Hide();
        animal_category->Show();
        sport_category->Show();
        geography_category->Show();
        school_category->Show();

        line1->Hide();
        line2->Hide();
        line3->Hide();
        line4->Hide();
        line5->Hide();
        line6->Hide();
        line7->Show();
        line8->Hide();
        line9->Hide();
        line10->Hide();
        line11->Hide();
        line12->Hide();
        line13->Hide();
        line14->Hide();
        line15->Hide();

        letter1->Show();
        letter1->Caption = "H";
        letter2->Show();
        letter2->Caption = "A";
        letter3->Show();
        letter3->Caption = "N";
        letter4->Show();
        letter4->Caption = "G";
        letter5->Show();
        letter5->Caption = "-";
        letter6->Show();
        letter6->Caption = "M";
        letter7->Hide();
        letter8->Show();
        letter8->Caption = "N";
        letter9->Hide();
        letter10->Hide();
        letter11->Hide();
        letter12->Hide();
        letter13->Hide();
        letter14->Hide();
        letter15->Hide();

        A->Enabled = true;
        B->Enabled = true;
        C->Enabled = true;
        D->Enabled = true;
        E->Enabled = true;
        F->Enabled = true;
        G->Enabled = true;
        H->Enabled = true;
        I->Enabled = true;
        J->Enabled = true;
        K->Enabled = true;
        L->Enabled = true;
        M->Enabled = true;
        N->Enabled = true;
        O->Enabled = true;
        P->Enabled = true;
        Q->Enabled = true;
        R->Enabled = true;
        S->Enabled = true;
        T->Enabled = true;
        U->Enabled = true;
        V->Enabled = true;
        W->Enabled = true;
        X->Enabled = true;
        Y->Enabled = true;
        Z->Enabled = true;

        A->Hide();
        B->Hide();
        C->Hide();
        D->Hide();
        E->Hide();
        F->Hide();
        G->Hide();
        H->Hide();
        I->Hide();
        J->Hide();
        K->Hide();
        L->Hide();
        M->Hide();
        N->Hide();
        O->Hide();
        P->Hide();
        Q->Hide();
        R->Hide();
        S->Hide();
        T->Hide();
        U->Hide();
        V->Hide();
        W->Hide();
        X->Hide();
        Y->Hide();
        Z->Hide();

        basis_line_picture->Show();
        vertical_line_picture->Show();
        tier_line_picture->Show();
        incline_line_picture->Show();
        rope_picture->Show();
        head_picture->Show();
        torso_picture->Show();
        left_arm_picture->Show();
        right_arm_picture->Hide();
        left_leg_picture->Show();
        right_leg_picture->Hide();

        defeat_button->Hide();
        win_button->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::AClick(TObject *Sender)
{
        selected_letter = 'A';
        A->Enabled = false;
        click = 1;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::BClick(TObject *Sender)
{
        selected_letter = 'B';
        B->Enabled = false;
        click = 1;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CClick(TObject *Sender)
{
        selected_letter = 'C';
        C->Enabled = false;
        click = 1;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::DClick(TObject *Sender)
{
        selected_letter = 'D';
        D->Enabled = false;
        click = 1;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::EClick(TObject *Sender)
{
        selected_letter = 'E';
        E->Enabled = false;
        click = 1;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::FClick(TObject *Sender)
{
        selected_letter = 'F';
        F->Enabled = false;
        click = 1;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::GClick(TObject *Sender)
{
        selected_letter = 'G';
        G->Enabled = false;
        click = 1;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::HClick(TObject *Sender)
{
        selected_letter = 'H';
        H->Enabled = false;
        click = 1;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::IClick(TObject *Sender)
{
        selected_letter = 'I';
        I->Enabled = false;
        click = 1;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::JClick(TObject *Sender)
{
        selected_letter = 'J';
        J->Enabled = false;
        click = 1;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::KClick(TObject *Sender)
{
        selected_letter = 'K';
        K->Enabled = false;
        click = 1;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::LClick(TObject *Sender)
{
        selected_letter = 'L';
        L->Enabled = false;
        click = 1;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::MClick(TObject *Sender)
{
        selected_letter = 'M';
        M->Enabled = false;
        click = 1;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::NClick(TObject *Sender)
{
        selected_letter = 'N';
        N->Enabled = false;
        click = 1;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::OClick(TObject *Sender)
{
        selected_letter = 'O';
        O->Enabled = false;
        click = 1;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::PClick(TObject *Sender)
{
        selected_letter = 'P';
        P->Enabled = false;
        click = 1;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::QClick(TObject *Sender)
{
        selected_letter = 'Q';
        Q->Enabled = false;
        click = 1;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RClick(TObject *Sender)
{
        selected_letter = 'R';
        R->Enabled = false;
        click = 1;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SClick(TObject *Sender)
{
        selected_letter = 'S';
        S->Enabled = false;
        click = 1;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::TClick(TObject *Sender)
{
        selected_letter = 'T';
        T->Enabled = false;
        click = 1;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::UClick(TObject *Sender)
{
        selected_letter = 'U';
        U->Enabled = false;
        click = 1;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::VClick(TObject *Sender)
{
        selected_letter = 'V';
        V->Enabled = false;
        click = 1;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::WClick(TObject *Sender)
{
        selected_letter = 'W';
        W->Enabled = false;
        click = 1;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::XClick(TObject *Sender)
{
        selected_letter = 'X';
        X->Enabled = false;
        click = 1;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::YClick(TObject *Sender)
{
        selected_letter = 'Y';
        Y->Enabled = false;
        click = 1;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ZClick(TObject *Sender)
{
        selected_letter = 'Z';
        Z->Enabled = false;
        click = 1;
}
//---------------------------------------------------------------------------



void __fastcall TForm1::timerTimer(TObject *Sender)
{
        if(click == 1){
                click = 0;
                if(comparison()==1){
                        for(int i=0; i<word_length; i++){
                                if(word[i] == selected_letter){
                                        switch(i+1)
                                        {
                                                case 1:
                                                        line1->Hide();
                                                        letter1->Show();
                                                        letter1->Caption = selected_letter;
                                                        win_counter++;
                                                        if(win_counter == word_length) win_button->Show();
                                                break;
                                                case 2:
                                                        line2->Hide();
                                                        letter2->Show();
                                                        letter2->Caption = selected_letter;
                                                        win_counter++;
                                                        if(win_counter == word_length) win_button->Show();
                                                break;
                                                case 3:
                                                        line3->Hide();
                                                        letter3->Show();
                                                        letter3->Caption = selected_letter;
                                                        win_counter++;
                                                        if(win_counter == word_length) win_button->Show();
                                                break;
                                                case 4:
                                                        line4->Hide();
                                                        letter4->Show();
                                                        letter4->Caption = selected_letter;
                                                        win_counter++;
                                                        if(win_counter == word_length) win_button->Show();
                                                break;
                                                case 5:
                                                        line5->Hide();
                                                        letter5->Show();
                                                        letter5->Caption = selected_letter;
                                                        win_counter++;
                                                        if(win_counter == word_length) win_button->Show();
                                                break;
                                                case 6:
                                                        line6->Hide();
                                                        letter6->Show();
                                                        letter6->Caption = selected_letter;
                                                        win_counter++;
                                                        if(win_counter == word_length) win_button->Show();
                                                break;
                                                case 7:
                                                        line7->Hide();
                                                        letter7->Show();
                                                        letter7->Caption = selected_letter;
                                                        win_counter++;
                                                        if(win_counter == word_length) win_button->Show();
                                                break;
                                                case 8:
                                                        line8->Hide();
                                                        letter8->Show();
                                                        letter8->Caption = selected_letter;
                                                        win_counter++;
                                                        if(win_counter == word_length) win_button->Show();
                                                break;
                                                case 9:
                                                        line9->Hide();
                                                        letter9->Show();
                                                        letter9->Caption = selected_letter;
                                                        win_counter++;
                                                        if(win_counter == word_length) win_button->Show();
                                                break;
                                                case 10:
                                                        line10->Hide();
                                                        letter10->Show();
                                                        letter10->Caption = selected_letter;
                                                        win_counter++;
                                                        if(win_counter == word_length) win_button->Show();
                                                break;
                                                case 11:
                                                        line11->Hide();
                                                        letter11->Show();
                                                        letter11->Caption = selected_letter;
                                                        win_counter++;
                                                        if(win_counter == word_length) win_button->Show();
                                                break;
                                                case 12:
                                                        line12->Hide();
                                                        letter12->Show();
                                                        letter12->Caption = selected_letter;
                                                        win_counter++;
                                                        if(win_counter == word_length) win_button->Show();
                                                break;
                                                case 13:
                                                        line13->Hide();
                                                        letter13->Show();
                                                        letter13->Caption = selected_letter;
                                                        win_counter++;
                                                        if(win_counter == word_length) win_button->Show();
                                                break;
                                                case 14:
                                                        line14->Hide();
                                                        letter14->Show();
                                                        letter14->Caption = selected_letter;
                                                        win_counter++;
                                                        if(win_counter == word_length) win_button->Show();
                                                break;
                                                case 15:
                                                        line15->Hide();
                                                        letter15->Show();
                                                        letter15->Caption = selected_letter;
                                                        win_counter++;
                                                        if(win_counter == word_length) win_button->Show();
                                                break;
                                        }
                                }
                        }
                }
                else{
                        counter++;
                        switch(counter)
                        {
                                case 1:
                                        basis_line_picture->Show();
                                break;
                                case 2:
                                        vertical_line_picture->Show();
                                break;
                                case 3:
                                        tier_line_picture->Show();
                                break;
                                case 4:
                                        incline_line_picture->Show();
                                break;
                                case 5:
                                        rope_picture->Show();
                                break;
                                case 6:
                                        head_picture->Show();
                                break;
                                case 7:
                                        torso_picture->Show();
                                break;
                                case 8:
                                        left_arm_picture->Show();
                                break;
                                case 9:
                                        right_arm_picture->Show();
                                break;
                                case 10:
                                        left_leg_picture->Show();
                                break;
                                case 11:
                                        right_leg_picture->Show();
                                        defeat_button->Show();
                                break;
                        }
                }
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::win_buttonClick(TObject *Sender)
{
        animal_category->Hide();
        sport_category->Hide();
        geography_category->Hide();
        school_category->Hide();

        words_counter = 10;
        win_counter = 0;
        counter = 0;
        click = 0;

        start_button->Show();
        win_button->Hide();

        timer->Enabled = true;

        line1->Hide();
        line2->Hide();
        line3->Hide();
        line4->Hide();
        line5->Hide();
        line6->Hide();
        line7->Show();
        line8->Hide();
        line9->Hide();
        line10->Hide();
        line11->Hide();
        line12->Hide();
        line13->Hide();
        line14->Hide();
        line15->Hide();

        letter1->Show();
        letter1->Caption = "H";
        letter2->Show();
        letter2->Caption = "A";
        letter3->Show();
        letter3->Caption = "N";
        letter4->Show();
        letter4->Caption = "G";
        letter5->Show();
        letter5->Caption = "-";
        letter6->Show();
        letter6->Caption = "M";
        letter7->Hide();
        letter8->Show();
        letter8->Caption = "N";
        letter9->Hide();
        letter10->Hide();
        letter11->Hide();
        letter12->Hide();
        letter13->Hide();
        letter14->Hide();
        letter15->Hide();

        A->Enabled = true;
        B->Enabled = true;
        C->Enabled = true;
        D->Enabled = true;
        E->Enabled = true;
        F->Enabled = true;
        G->Enabled = true;
        H->Enabled = true;
        I->Enabled = true;
        J->Enabled = true;
        K->Enabled = true;
        L->Enabled = true;
        M->Enabled = true;
        N->Enabled = true;
        O->Enabled = true;
        P->Enabled = true;
        Q->Enabled = true;
        R->Enabled = true;
        S->Enabled = true;
        T->Enabled = true;
        U->Enabled = true;
        V->Enabled = true;
        W->Enabled = true;
        X->Enabled = true;
        Y->Enabled = true;
        Z->Enabled = true;

        A->Hide();
        B->Hide();
        C->Hide();
        D->Hide();
        E->Hide();
        F->Hide();
        G->Hide();
        H->Hide();
        I->Hide();
        J->Hide();
        K->Hide();
        L->Hide();
        M->Hide();
        N->Hide();
        O->Hide();
        P->Hide();
        Q->Hide();
        R->Hide();
        S->Hide();
        T->Hide();
        U->Hide();
        V->Hide();
        W->Hide();
        X->Hide();
        Y->Hide();
        Z->Hide();

        basis_line_picture->Show();
        vertical_line_picture->Show();
        tier_line_picture->Show();
        incline_line_picture->Show();
        rope_picture->Show();
        head_picture->Show();
        torso_picture->Show();
        left_arm_picture->Show();
        right_arm_picture->Hide();
        left_leg_picture->Show();
        right_leg_picture->Hide();

        defeat_button->Hide();
        win_button->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::defeat_buttonClick(TObject *Sender)
{
        animal_category->Hide();
        sport_category->Hide();
        geography_category->Hide();
        school_category->Hide();

        words_counter = 10;
        win_counter = 0;
        counter = 0;
        click = 0;

        start_button->Show();
        defeat_button->Hide();

        timer->Enabled = true;

        line1->Hide();
        line2->Hide();
        line3->Hide();
        line4->Hide();
        line5->Hide();
        line6->Hide();
        line7->Show();
        line8->Hide();
        line9->Hide();
        line10->Hide();
        line11->Hide();
        line12->Hide();
        line13->Hide();
        line14->Hide();
        line15->Hide();

        letter1->Show();
        letter1->Caption = "H";
        letter2->Show();
        letter2->Caption = "A";
        letter3->Show();
        letter3->Caption = "N";
        letter4->Show();
        letter4->Caption = "G";
        letter5->Show();
        letter5->Caption = "-";
        letter6->Show();
        letter6->Caption = "M";
        letter7->Hide();
        letter8->Show();
        letter8->Caption = "N";
        letter9->Hide();
        letter10->Hide();
        letter11->Hide();
        letter12->Hide();
        letter13->Hide();
        letter14->Hide();
        letter15->Hide();

        A->Enabled = true;
        B->Enabled = true;
        C->Enabled = true;
        D->Enabled = true;
        E->Enabled = true;
        F->Enabled = true;
        G->Enabled = true;
        H->Enabled = true;
        I->Enabled = true;
        J->Enabled = true;
        K->Enabled = true;
        L->Enabled = true;
        M->Enabled = true;
        N->Enabled = true;
        O->Enabled = true;
        P->Enabled = true;
        Q->Enabled = true;
        R->Enabled = true;
        S->Enabled = true;
        T->Enabled = true;
        U->Enabled = true;
        V->Enabled = true;
        W->Enabled = true;
        X->Enabled = true;
        Y->Enabled = true;
        Z->Enabled = true;

        A->Hide();
        B->Hide();
        C->Hide();
        D->Hide();
        E->Hide();
        F->Hide();
        G->Hide();
        H->Hide();
        I->Hide();
        J->Hide();
        K->Hide();
        L->Hide();
        M->Hide();
        N->Hide();
        O->Hide();
        P->Hide();
        Q->Hide();
        R->Hide();
        S->Hide();
        T->Hide();
        U->Hide();
        V->Hide();
        W->Hide();
        X->Hide();
        Y->Hide();
        Z->Hide();

        basis_line_picture->Show();
        vertical_line_picture->Show();
        tier_line_picture->Show();
        incline_line_picture->Show();
        rope_picture->Show();
        head_picture->Show();
        torso_picture->Show();
        left_arm_picture->Show();
        right_arm_picture->Hide();
        left_leg_picture->Show();
        right_leg_picture->Hide();

        defeat_button->Hide();
        win_button->Hide();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::school_categoryClick(TObject *Sender)
{
        for(int i=0; i<10; i++){
                words[i] = school[i];
        }

        animal_category->Hide();
        sport_category->Hide();
        geography_category->Hide();
        school_category->Hide();

        letter1->Hide();
        letter2->Hide();
        letter3->Hide();
        letter4->Hide();
        letter5->Hide();
        letter6->Hide();
        letter7->Hide();
        letter8->Hide();
        letter9->Hide();
        letter10->Hide();
        letter11->Hide();
        letter12->Hide();
        letter13->Hide();
        letter14->Hide();
        letter15->Hide();

        basis_line_picture->Hide();
        vertical_line_picture->Hide();
        tier_line_picture->Hide();
        incline_line_picture->Hide();
        rope_picture->Hide();
        head_picture->Hide();
        torso_picture->Hide();
        left_arm_picture->Hide();
        right_arm_picture->Hide();
        left_leg_picture->Hide();
        right_leg_picture->Hide();

        srand(time(NULL));
        int number =( std::rand() %words_counter ) + 1;
        for(int i=0; i<number; i++){
                word = words[i];
                word_length = word.length();
        }

        switch(word_length)
        {
                case 4:
                        line1->Show();
                        line2->Show();
                        line3->Show();
                        line4->Show();
                break;

                case 5:
                        line1->Show();
                        line2->Show();
                        line3->Show();
                        line4->Show();
                        line5->Show();
                break;

                case 6:
                        line1->Show();
                        line2->Show();
                        line3->Show();
                        line4->Show();
                        line5->Show();
                        line6->Show();
                break;

                case 7:
                        line1->Show();
                        line2->Show();
                        line3->Show();
                        line4->Show();
                        line5->Show();
                        line6->Show();
                        line7->Show();
                break;

                case 8:
                        line1->Show();
                        line2->Show();
                        line3->Show();
                        line4->Show();
                        line5->Show();
                        line6->Show();
                        line7->Show();
                        line8->Show();
                break;

                case 9:
                        line1->Show();
                        line2->Show();
                        line3->Show();
                        line4->Show();
                        line5->Show();
                        line6->Show();
                        line7->Show();
                        line8->Show();
                        line9->Show();
                break;

                case 10:
                        line1->Show();
                        line2->Show();
                        line3->Show();
                        line4->Show();
                        line5->Show();
                        line6->Show();
                        line7->Show();
                        line8->Show();
                        line9->Show();
                        line10->Show();
                break;

                case 11:
                        line1->Show();
                        line2->Show();
                        line3->Show();
                        line4->Show();
                        line5->Show();
                        line6->Show();
                        line7->Show();
                        line8->Show();
                        line9->Show();
                        line10->Show();
                        line11->Show();
                break;

                case 12:
                        line1->Show();
                        line2->Show();
                        line3->Show();
                        line4->Show();
                        line5->Show();
                        line6->Show();
                        line7->Show();
                        line8->Show();
                        line9->Show();
                        line10->Show();
                        line11->Show();
                        line12->Show();
                break;

                case 13:
                        line1->Show();
                        line2->Show();
                        line3->Show();
                        line4->Show();
                        line5->Show();
                        line6->Show();
                        line7->Show();
                        line8->Show();
                        line9->Show();
                        line10->Show();
                        line11->Show();
                        line12->Show();
                        line13->Show();
                break;

                case 14:
                        line1->Show();
                        line2->Show();
                        line3->Show();
                        line4->Show();
                        line5->Show();
                        line6->Show();
                        line7->Show();
                        line8->Show();
                        line9->Show();
                        line10->Show();
                        line11->Show();
                        line12->Show();
                        line13->Show();
                        line14->Show();
                break;

                case 15:
                        line1->Show();
                        line2->Show();
                        line3->Show();
                        line4->Show();
                        line5->Show();
                        line6->Show();
                        line7->Show();
                        line8->Show();
                        line9->Show();
                        line10->Show();
                        line11->Show();
                        line12->Show();
                        line13->Show();
                        line14->Show();
                        line15->Show();
                break;
        }

        A->Show();
        B->Show();
        C->Show();
        D->Show();
        E->Show();
        F->Show();
        G->Show();
        H->Show();
        I->Show();
        J->Show();
        K->Show();
        L->Show();
        M->Show();
        N->Show();
        O->Show();
        P->Show();
        Q->Show();
        R->Show();
        S->Show();
        T->Show();
        U->Show();
        V->Show();
        W->Show();
        X->Show();
        Y->Show();
        Z->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::geography_categoryClick(TObject *Sender)
{
        for(int i=0; i<10; i++){
                words[i] = geography[i];
        }

        animal_category->Hide();
        sport_category->Hide();
        geography_category->Hide();
        school_category->Hide();

        letter1->Hide();
        letter2->Hide();
        letter3->Hide();
        letter4->Hide();
        letter5->Hide();
        letter6->Hide();
        letter7->Hide();
        letter8->Hide();
        letter9->Hide();
        letter10->Hide();
        letter11->Hide();
        letter12->Hide();
        letter13->Hide();
        letter14->Hide();
        letter15->Hide();

        basis_line_picture->Hide();
        vertical_line_picture->Hide();
        tier_line_picture->Hide();
        incline_line_picture->Hide();
        rope_picture->Hide();
        head_picture->Hide();
        torso_picture->Hide();
        left_arm_picture->Hide();
        right_arm_picture->Hide();
        left_leg_picture->Hide();
        right_leg_picture->Hide();

        srand(time(NULL));
        int number =( std::rand() %words_counter ) + 1;
        for(int i=0; i<number; i++){
                word = words[i];
                word_length = word.length();
        }

        switch(word_length)
        {
                case 4:
                        line1->Show();
                        line2->Show();
                        line3->Show();
                        line4->Show();
                break;

                case 5:
                        line1->Show();
                        line2->Show();
                        line3->Show();
                        line4->Show();
                        line5->Show();
                break;

                case 6:
                        line1->Show();
                        line2->Show();
                        line3->Show();
                        line4->Show();
                        line5->Show();
                        line6->Show();
                break;

                case 7:
                        line1->Show();
                        line2->Show();
                        line3->Show();
                        line4->Show();
                        line5->Show();
                        line6->Show();
                        line7->Show();
                break;

                case 8:
                        line1->Show();
                        line2->Show();
                        line3->Show();
                        line4->Show();
                        line5->Show();
                        line6->Show();
                        line7->Show();
                        line8->Show();
                break;

                case 9:
                        line1->Show();
                        line2->Show();
                        line3->Show();
                        line4->Show();
                        line5->Show();
                        line6->Show();
                        line7->Show();
                        line8->Show();
                        line9->Show();
                break;

                case 10:
                        line1->Show();
                        line2->Show();
                        line3->Show();
                        line4->Show();
                        line5->Show();
                        line6->Show();
                        line7->Show();
                        line8->Show();
                        line9->Show();
                        line10->Show();
                break;

                case 11:
                        line1->Show();
                        line2->Show();
                        line3->Show();
                        line4->Show();
                        line5->Show();
                        line6->Show();
                        line7->Show();
                        line8->Show();
                        line9->Show();
                        line10->Show();
                        line11->Show();
                break;

                case 12:
                        line1->Show();
                        line2->Show();
                        line3->Show();
                        line4->Show();
                        line5->Show();
                        line6->Show();
                        line7->Show();
                        line8->Show();
                        line9->Show();
                        line10->Show();
                        line11->Show();
                        line12->Show();
                break;

                case 13:
                        line1->Show();
                        line2->Show();
                        line3->Show();
                        line4->Show();
                        line5->Show();
                        line6->Show();
                        line7->Show();
                        line8->Show();
                        line9->Show();
                        line10->Show();
                        line11->Show();
                        line12->Show();
                        line13->Show();
                break;

                case 14:
                        line1->Show();
                        line2->Show();
                        line3->Show();
                        line4->Show();
                        line5->Show();
                        line6->Show();
                        line7->Show();
                        line8->Show();
                        line9->Show();
                        line10->Show();
                        line11->Show();
                        line12->Show();
                        line13->Show();
                        line14->Show();
                break;

                case 15:
                        line1->Show();
                        line2->Show();
                        line3->Show();
                        line4->Show();
                        line5->Show();
                        line6->Show();
                        line7->Show();
                        line8->Show();
                        line9->Show();
                        line10->Show();
                        line11->Show();
                        line12->Show();
                        line13->Show();
                        line14->Show();
                        line15->Show();
                break;
        }

        A->Show();
        B->Show();
        C->Show();
        D->Show();
        E->Show();
        F->Show();
        G->Show();
        H->Show();
        I->Show();
        J->Show();
        K->Show();
        L->Show();
        M->Show();
        N->Show();
        O->Show();
        P->Show();
        Q->Show();
        R->Show();
        S->Show();
        T->Show();
        U->Show();
        V->Show();
        W->Show();
        X->Show();
        Y->Show();
        Z->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::sport_categoryClick(TObject *Sender)
{
        for(int i=0; i<10; i++){
                words[i] = sport[i];
        }

        animal_category->Hide();
        sport_category->Hide();
        geography_category->Hide();
        school_category->Hide();

        letter1->Hide();
        letter2->Hide();
        letter3->Hide();
        letter4->Hide();
        letter5->Hide();
        letter6->Hide();
        letter7->Hide();
        letter8->Hide();
        letter9->Hide();
        letter10->Hide();
        letter11->Hide();
        letter12->Hide();
        letter13->Hide();
        letter14->Hide();
        letter15->Hide();

        basis_line_picture->Hide();
        vertical_line_picture->Hide();
        tier_line_picture->Hide();
        incline_line_picture->Hide();
        rope_picture->Hide();
        head_picture->Hide();
        torso_picture->Hide();
        left_arm_picture->Hide();
        right_arm_picture->Hide();
        left_leg_picture->Hide();
        right_leg_picture->Hide();

        srand(time(NULL));
        int number =( std::rand() %words_counter ) + 1;
        for(int i=0; i<number; i++){
                word = words[i];
                word_length = word.length();
        }

        switch(word_length)
        {
                case 4:
                        line1->Show();
                        line2->Show();
                        line3->Show();
                        line4->Show();
                break;

                case 5:
                        line1->Show();
                        line2->Show();
                        line3->Show();
                        line4->Show();
                        line5->Show();
                break;

                case 6:
                        line1->Show();
                        line2->Show();
                        line3->Show();
                        line4->Show();
                        line5->Show();
                        line6->Show();
                break;

                case 7:
                        line1->Show();
                        line2->Show();
                        line3->Show();
                        line4->Show();
                        line5->Show();
                        line6->Show();
                        line7->Show();
                break;

                case 8:
                        line1->Show();
                        line2->Show();
                        line3->Show();
                        line4->Show();
                        line5->Show();
                        line6->Show();
                        line7->Show();
                        line8->Show();
                break;

                case 9:
                        line1->Show();
                        line2->Show();
                        line3->Show();
                        line4->Show();
                        line5->Show();
                        line6->Show();
                        line7->Show();
                        line8->Show();
                        line9->Show();
                break;

                case 10:
                        line1->Show();
                        line2->Show();
                        line3->Show();
                        line4->Show();
                        line5->Show();
                        line6->Show();
                        line7->Show();
                        line8->Show();
                        line9->Show();
                        line10->Show();
                break;

                case 11:
                        line1->Show();
                        line2->Show();
                        line3->Show();
                        line4->Show();
                        line5->Show();
                        line6->Show();
                        line7->Show();
                        line8->Show();
                        line9->Show();
                        line10->Show();
                        line11->Show();
                break;

                case 12:
                        line1->Show();
                        line2->Show();
                        line3->Show();
                        line4->Show();
                        line5->Show();
                        line6->Show();
                        line7->Show();
                        line8->Show();
                        line9->Show();
                        line10->Show();
                        line11->Show();
                        line12->Show();
                break;

                case 13:
                        line1->Show();
                        line2->Show();
                        line3->Show();
                        line4->Show();
                        line5->Show();
                        line6->Show();
                        line7->Show();
                        line8->Show();
                        line9->Show();
                        line10->Show();
                        line11->Show();
                        line12->Show();
                        line13->Show();
                break;

                case 14:
                        line1->Show();
                        line2->Show();
                        line3->Show();
                        line4->Show();
                        line5->Show();
                        line6->Show();
                        line7->Show();
                        line8->Show();
                        line9->Show();
                        line10->Show();
                        line11->Show();
                        line12->Show();
                        line13->Show();
                        line14->Show();
                break;

                case 15:
                        line1->Show();
                        line2->Show();
                        line3->Show();
                        line4->Show();
                        line5->Show();
                        line6->Show();
                        line7->Show();
                        line8->Show();
                        line9->Show();
                        line10->Show();
                        line11->Show();
                        line12->Show();
                        line13->Show();
                        line14->Show();
                        line15->Show();
                break;
        }

        A->Show();
        B->Show();
        C->Show();
        D->Show();
        E->Show();
        F->Show();
        G->Show();
        H->Show();
        I->Show();
        J->Show();
        K->Show();
        L->Show();
        M->Show();
        N->Show();
        O->Show();
        P->Show();
        Q->Show();
        R->Show();
        S->Show();
        T->Show();
        U->Show();
        V->Show();
        W->Show();
        X->Show();
        Y->Show();
        Z->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::animal_categoryClick(TObject *Sender)
{
        for(int i=0; i<10; i++){
                words[i] = animal[i];
        }

        animal_category->Hide();
        sport_category->Hide();
        geography_category->Hide();
        school_category->Hide();

        letter1->Hide();
        letter2->Hide();
        letter3->Hide();
        letter4->Hide();
        letter5->Hide();
        letter6->Hide();
        letter7->Hide();
        letter8->Hide();
        letter9->Hide();
        letter10->Hide();
        letter11->Hide();
        letter12->Hide();
        letter13->Hide();
        letter14->Hide();
        letter15->Hide();

        basis_line_picture->Hide();
        vertical_line_picture->Hide();
        tier_line_picture->Hide();
        incline_line_picture->Hide();
        rope_picture->Hide();
        head_picture->Hide();
        torso_picture->Hide();
        left_arm_picture->Hide();
        right_arm_picture->Hide();
        left_leg_picture->Hide();
        right_leg_picture->Hide();

        srand(time(NULL));
        int number =( std::rand() %words_counter ) + 1;
        for(int i=0; i<number; i++){
                word = words[i];
                word_length = word.length();
        }

        switch(word_length)
        {
                case 4:
                        line1->Show();
                        line2->Show();
                        line3->Show();
                        line4->Show();
                break;

                case 5:
                        line1->Show();
                        line2->Show();
                        line3->Show();
                        line4->Show();
                        line5->Show();
                break;

                case 6:
                        line1->Show();
                        line2->Show();
                        line3->Show();
                        line4->Show();
                        line5->Show();
                        line6->Show();
                break;

                case 7:
                        line1->Show();
                        line2->Show();
                        line3->Show();
                        line4->Show();
                        line5->Show();
                        line6->Show();
                        line7->Show();
                break;

                case 8:
                        line1->Show();
                        line2->Show();
                        line3->Show();
                        line4->Show();
                        line5->Show();
                        line6->Show();
                        line7->Show();
                        line8->Show();
                break;

                case 9:
                        line1->Show();
                        line2->Show();
                        line3->Show();
                        line4->Show();
                        line5->Show();
                        line6->Show();
                        line7->Show();
                        line8->Show();
                        line9->Show();
                break;

                case 10:
                        line1->Show();
                        line2->Show();
                        line3->Show();
                        line4->Show();
                        line5->Show();
                        line6->Show();
                        line7->Show();
                        line8->Show();
                        line9->Show();
                        line10->Show();
                break;

                case 11:
                        line1->Show();
                        line2->Show();
                        line3->Show();
                        line4->Show();
                        line5->Show();
                        line6->Show();
                        line7->Show();
                        line8->Show();
                        line9->Show();
                        line10->Show();
                        line11->Show();
                break;

                case 12:
                        line1->Show();
                        line2->Show();
                        line3->Show();
                        line4->Show();
                        line5->Show();
                        line6->Show();
                        line7->Show();
                        line8->Show();
                        line9->Show();
                        line10->Show();
                        line11->Show();
                        line12->Show();
                break;

                case 13:
                        line1->Show();
                        line2->Show();
                        line3->Show();
                        line4->Show();
                        line5->Show();
                        line6->Show();
                        line7->Show();
                        line8->Show();
                        line9->Show();
                        line10->Show();
                        line11->Show();
                        line12->Show();
                        line13->Show();
                break;

                case 14:
                        line1->Show();
                        line2->Show();
                        line3->Show();
                        line4->Show();
                        line5->Show();
                        line6->Show();
                        line7->Show();
                        line8->Show();
                        line9->Show();
                        line10->Show();
                        line11->Show();
                        line12->Show();
                        line13->Show();
                        line14->Show();
                break;

                case 15:
                        line1->Show();
                        line2->Show();
                        line3->Show();
                        line4->Show();
                        line5->Show();
                        line6->Show();
                        line7->Show();
                        line8->Show();
                        line9->Show();
                        line10->Show();
                        line11->Show();
                        line12->Show();
                        line13->Show();
                        line14->Show();
                        line15->Show();
                break;
        }

        A->Show();
        B->Show();
        C->Show();
        D->Show();
        E->Show();
        F->Show();
        G->Show();
        H->Show();
        I->Show();
        J->Show();
        K->Show();
        L->Show();
        M->Show();
        N->Show();
        O->Show();
        P->Show();
        Q->Show();
        R->Show();
        S->Show();
        T->Show();
        U->Show();
        V->Show();
        W->Show();
        X->Show();
        Y->Show();
        Z->Show();
}
//---------------------------------------------------------------------------

