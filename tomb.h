#ifndef TOMB.H
#define TOMB.H
#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("teraria.gold");
bool ok,q,auxcoin[20][20],morning;
struct walling{
    short tombs[20][20];
}wall[4];
struct coining{
    bool gold[20][20];
}coin[4];
short xi,xj,coins,n[4],m[4],nrcoins[4],auxi[4],auxj[4],difficultytomb;
bool oktryagain=0;
void redoing()
{
    xi=auxi[difficultytomb];
    xj=auxj[difficultytomb];
    ok=0;
    q=0;
    coins=0;
    short i,j;
    for(i=1;i<=n[difficultytomb];i++)
        for(j=1;j<=m[difficultytomb];j++)
            auxcoin[i][j]=coin[difficultytomb].gold[i][j];
}
void citiretomb()
{
    short i,j,y;
    for(y=1;y<=3;y++){
        fin>>n[y]>>m[y];
        for(i=1;i<=n[y];i++)
            for(j=1;j<=m[y];j++)
                fin>>wall[y].tombs[i][j];
        fin>>auxi[y]>>auxj[y];
        for(i=1;i<=n[y];i++)
            for(j=1;j<=m[y];j++){
                fin>>coin[y].gold[i][j];
            }
        fin>>nrcoins[y];
    }
}
void moveinputtomb()
{
    int k;
    do{
        cin>>k;
    }while(k>4 or k<1);
    cout<<endl;
    switch(k)
    {
        case 0: ok=1;
            break;
        case 1:
            while(wall[difficultytomb].tombs[xi-1][xj]!=1){
                xi--;
                if(wall[difficultytomb].tombs[xi][xj]==7){
                    q=1;
                    ok=1;
                    break;
                }
                if(auxcoin[xi][xj]==1){
                    auxcoin[xi][xj]=0;
                    coins++;
                }
            }
            break;
        case 2:
            while(wall[difficultytomb].tombs[xi][xj-1]!=1){
                xj--;
                if(wall[difficultytomb].tombs[xi][xj]==7){
                    q=1;
                    ok=1;
                    break;
                }
                if(auxcoin[xi][xj]==1){
                    auxcoin[xi][xj]=0;
                    coins++;
                }
            }
            break;
        case 3:
            while(wall[difficultytomb].tombs[xi+1][xj]!=1){
                xi++;
                if(wall[difficultytomb].tombs[xi][xj]==7){
                    q=1;
                    ok=1;
                    break;
                }
                if(auxcoin[xi][xj]==1){
                    auxcoin[xi][xj]=0;
                    coins++;
                }
            }
            break;
        case 4:
            while(wall[difficultytomb].tombs[xi][xj+1]!=1){
                xj++;
                if(wall[difficultytomb].tombs[xi][xj]==7){
                    q=1;
                    ok=1;
                    break;
                }
                if(auxcoin[xi][xj]==1){
                    auxcoin[xi][xj]=0;
                    coins++;
                }
            }
            break;
    }
    if(coins==nrcoins[difficultytomb])
        ok=1;
}
void afisaretomb()
{
    int i,j;
    cout<<"            1"<<endl;
    cout<<"Coins: "<<coins;
    if(coins<10)
        cout<<"  2   4"<<endl;
    else
        if(coins<100)
            cout<<" 2   4"<<endl;
        else
            cout<<"2   4"<<endl;
    cout<<"            3"<<endl<<endl;
    for(i=1;i<=n[difficultytomb];i++){
        for(j=1;j<=m[difficultytomb];j++)
            if(i==xi and j==xj)
                if(q==0)
                    cout<<"X ";
                else
                    cout<<"Y ";
            else
                if(auxcoin[i][j]==0)
                     cout<<wall[difficultytomb].tombs[i][j]<<" ";
                else
                    cout<<"* ";
        cout<<endl;
    }
    cout<<endl;
}
void displayintrotomb(char intro[9999])
{
    int i,j;
    for(i=0;i<200000*strlen(intro);i++)
        if(i%200000==0){
            for(k=1;k<=4000;k++)
                for(j=1;j<=4700;j++);
            if(i==0)
                cout<<intro[0];
            else
                cout<<intro[i/200000];
    }
}
bool citireoktomb()
{
    short kok;
    do{cin>>kok;}while(kok!=1 and kok!=0);
    if(kok==0)
        return 0;
    else return 1;
}
int porniretomb()
{
    char intro[9999];
    if(oktryagain==0){
        strcpy(intro,"Bun venit la Tomb of the Gold!\nScopul jocului este de a colecta toti banutii, ce apar sub forma de \"*\".\nDar ai grija! Exista tepi, sub forma de \"7\" care, daca atinsi, te vor face sa pierzi!\n\"1\" reprezinta ziduri, locuri unde jucatorul nu poate merge.\n\"0\" reprezinta drum accesibil jucatorului.\n\"X\" reprezinta jucatorul.\nJucatorul se va utiliza de tastele 1 2 3 4 pentru a naviga harta.\nJucatorul se va deplasa in linie dreapta in directia aleasa pana cand intalneste un spatiu care nu este ocupat de \"0\"\nsau \"*\"\n");
        displayintrotomb(intro);
    }
    strcpy(intro,"Selectati dificultatea\n1.Usor\n2.Mediu\n3.Greu\n");
    displayintrotomb(intro);
    do{
        cin>>difficultytomb;
    }while(difficultytomb<1 or difficultytomb>3);
    strcpy(intro,"Succes!\n \n");
    displayintrotomb(intro);
    if(morning==0){
        citiretomb();
        morning=1;
    }
    redoing();
    oktryagain=0;
    afisaretomb();
    do{
        moveinputtomb();
        afisaretomb();
    }while(ok==0);
    if(q==0)
        cout<<"You Win!\n";
    else{
        cout<<"You Died...\n";
        cout<<"Try again?\n1.Yes 0.No\n";
        oktryagain=citireoktomb();}
        if(oktryagain==1){
            redoing();
            porniretomb();
        }
        else{
            strcpy(intro,"Apasati tasta Enter pentru a va intoarce la meniul principal.");
                displayintrotomb(intro);
        }
    cin.get();
    cin.get();
}
#endif
