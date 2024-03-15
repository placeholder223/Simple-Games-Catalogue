#include <iostream>
#include <string.h>
#include "quiz.h"
#include "tomb.h"
#include "tap3.h"
#include "memory.h"
#include "rpg.h"
#include "g2048.h"
using namespace std;
short decizie;
bool okagain;
void displayintro(char intro[9999])
{
    int i,j;
    for(i=0;i<200000*strlen(intro);i++)
        if(i%200000==0){
            for(k=1;k<=3700;k++)
                for(j=1;j<=3750;j++);
            if(i==0)
                cout<<intro[0];
            else
                cout<<intro[i/200000];
    }
}
bool oktryagainmain()
{
    short kok;
    do{cin>>kok;}while(kok!=1 and kok!=2);
    if(kok==2)
        return 0;
    else return 1;
}
int main()
{
    char intro[999];
    strcpy(intro,"Bun venit la Ultimate Game Combo Pack 2021!\nDin cauza bugetului de la Resurse Umane, doar instructiunile jocurilor vor in limba romana,pe cand jocurile vor fi\nin limba engleza.\nComenzile trebuiesc urmate de apasarea tastei Enter, pentru ca programul sa inregistreze comanda.\n");
    displayintro(intro);
    strcpy(intro,"Daca introduceti o comanda diferita de comenzile disponibile, va trebui sa o reintroduceti.\n");
    displayintro(intro);
    strcpy(intro,"Selectati unul din jocurile urmatoare:\n1.Quiz\n2.Tap 3\n3.Tomb of the Gold\n4.RPG\n5.Memory Game\n6.2048\n");
    displayintro(intro);
    do{
        cin>>decizie;
        switch(decizie){
            case 1:pornirequiz();break;
            case 2:porniretap3();break;
            case 3:porniretomb();break;
            case 4:pornirerpg();break;
            case 5:pornirememory();break;
            case 6:pornire2048();break;

        }
    }while(decizie<1 or decizie>6);
    strcpy(intro,"\nDoriti sa selectati alt joc?\n1.Da\n2.No\n");
    displayintro(intro);
    okagain=oktryagainmain();
    while(okagain==1){
        strcpy(intro,"Selectati unul din jocurile urmatoare:\n1.Quiz\n2.Tap 3\n3.Tomb of the Gold\n4.RPG\n5.Memory Game\n6.2048\n");
        displayintro(intro);
        if(okagain==1){
            do{
                cin>>decizie;
                switch(decizie){
                    case 1:pornirequiz();break;
                    case 2:porniretap3();break;
                    case 3:porniretomb();break;
                    case 4:pornirerpg();break;
                    case 5:pornirememory();break;
                    case 6:pornire2048();break;
                }
            }while(decizie<1 or decizie>6);
        }
        strcpy(intro,"\nDoriti sa selectati alt joc?\n1.Da\n2.No\n");
        displayintro(intro);
        okagain=oktryagainmain();
    }
    strcpy(intro,"Va multumesc pentru ca ati ales Cosmin Ionita Industries\nCredits:\nProgramator:Ionita Cosmin\nTesteri:\nCalinescu Daniel-Ionut\nBarbu Danut Marian\nC.A.M\nBoca Radu Mihai\nPetcu Alina Luiza\n");
    displayintro(intro);
}
