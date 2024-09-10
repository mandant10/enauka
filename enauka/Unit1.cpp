//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include <fstream>
#include<cstdlib>
#include<ctime>
#include <iostream>
#include <string>
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
int pop=0;
bool sprawdz=0;
int sek=0;
int min=0;
int h=0;
int maxx=0;
int zakres=100;
int jed, dwa,wyn;
void __fastcall TForm1::wczytaj() //wczytuje plik txt
{
         Memo2->Lines->LoadFromFile(OpenDialog1->FileName);
}
void __fastcall TForm1::BitBtn2Click(TObject *Sender)
{
        int jakie=rand()%3; //0-dodawanie 1-odejmowanie, 2-mno¿enie;
        sprawdz=1;
        Memo1->Lines->Text="";
        Label1->Caption="";
        if(jakie==0)
        {
                jed=rand()%(zakres/2);
                dwa=rand()%(zakres/2);
                wyn=jed+dwa;


                String nap=(IntToStr(jed))+ " + " + (IntToStr(dwa))+ " =  ?";
                Label1->Caption=nap.c_str();

        }
        else if(jakie==1)
        {
                jed=rand()%(zakres/2);
                dwa=rand()%(zakres/2);
                if(jed>dwa)
                {
                        wyn=jed-dwa;
                        String nap=(IntToStr(jed))+ " - " + (IntToStr(dwa))+ " =  ?";
                        Label1->Caption=nap.c_str();
                }
                else
                {
                        wyn=dwa-jed;
                        String nap=(IntToStr(dwa))+ " + " + (IntToStr(jed))+ " =  ?";
                        Label1->Caption=nap.c_str();
                }
        }
        else if(jakie==2)
        {
                jed=rand()%(zakres/10);
                dwa=rand()%(zakres/10);
                wyn=jed*dwa;
                String nap=(IntToStr(jed))+ " * " + (IntToStr(dwa))+ " =  ?";
                Label1->Caption=nap.c_str();
        }
}
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
        
        srand(time(NULL));
        wczytaj();
        BitBtn2Click(BitBtn1);
        sprawdz=1;
        pop=StrToInt(Memo2->Lines->Strings[0]);
        maxx=StrToInt(Memo2->Lines->Strings[1]);

        String jedynka="Iloœæ poprawnych odp.: " + Memo2->Lines->Strings[0];
        AnsiString lj= jedynka.c_str();
        Label3->Caption=lj;


        String dwojka="Iloœæ wszytskich pytañ: " + Memo2->Lines->Strings[1];
        AnsiString ld= dwojka.c_str();
        Label4->Caption=ld;
         String sekundy="";
        if(sek<10) sekundy+='0';
        sekundy+=IntToStr(sek);

        String minuty="";
        if(min<10) minuty+='0';
        minuty+=IntToStr(min);

        String godziny="";
        if(h<10) godziny+='0';
        godziny+=IntToStr(h);

        String czas=godziny+':'+minuty+':'+sekundy;
        Label2->Caption=czas;
}

//---------------------------------------------------------------------------

//---------------------------------------------------------------------------


void __fastcall TForm1::BitBtn1Click(TObject *Sender)
{
    if(sprawdz==1)
    {
        sprawdz=0;
        String podane=Memo1->Lines->Text;
        int l=podane.Length();
            if(l==0) Application->MessageBox("Podaj poprawne dane wejœciowe!", "B³¹d", MB_OK | MB_ICONWARNING);
            else
            {
                 if(IntToStr(wyn)==podane)
                 {
                        Label1->Caption="Dobrze!";
                        pop++;
                        String cos=IntToStr(pop);
                        Memo2->Lines->Strings[0]= cos.c_str();
                 }

                 else  Label1->Caption="le!";

                 maxx++;

                 String ma=IntToStr(maxx);
                 Memo2->Lines->Strings[1]= ma.c_str();

                String jedynka="Iloœæ poprawnych odp.: " + Memo2->Lines->Strings[0];
                AnsiString lj= jedynka.c_str();
                Label3->Caption=lj;


                String dwojka="Iloœæ wszytskich pytañ: " + Memo2->Lines->Strings[1];
                AnsiString ld= dwojka.c_str();
                Label4->Caption=ld;

                 Memo2->Lines->SaveToFile(SaveDialog1->FileName);
            }
        }


}
//---------------------------------------------------------------------------
void __fastcall TForm1::czasTimer(TObject *Sender)
{
        sek++;
        if(sek==60)
        {
                sek=0;
                min++;
        }
        if(min==60)
        {
                min=0;
                h++;
        }
        String sekundy="";
        if(sek<10) sekundy+='0';
        sekundy+=IntToStr(sek);

        String minuty="";
        if(min<10) minuty+='0';
        minuty+=IntToStr(min);

        String godziny="";
        if(h<10) godziny+='0';
        godziny+=IntToStr(h);

        String czas=godziny+':'+minuty+':'+sekundy;
        Label2->Caption=czas;
}
//---------------------------------------------------------------------------

