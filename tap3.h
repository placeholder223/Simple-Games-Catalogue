#ifndef TAP3.H
#define TAP3.H
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
short ntap3,i1,j1,nrtap3,coada[30][3];
bool oktap3,oktap31,viz[10][10],okelement;
char tap3[10][10];
void afisaretap3()
{
    if(i1!=9){
    short i,j;
    for(i=1;i<=ntap3;i++){
        for(j=1;j<=ntap3;j++)
            cout<<tap3[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;
    }
}
void reset()
{
    short i,j;
    for(i=1;i<=ntap3;i++)
        for(j=1;j<=ntap3;j++)
            viz[i][j]=0;
}
void crearetap3()
{
    short i,j;
    ntap3=5;
    for(i=1;i<=ntap3;i++)
        for(j=1;j<=ntap3;j++){
            int t=rand()%5;
            tap3[i][j]=(char)(86+t);
        }
    for(i=1;i<=ntap3;i++)
            for(j=1;j<=ntap3;j++)
                viz[i][j]=0;
}
bool verify(int h1,int h2, int h3, int h4)
{
    if(h1==h3 and (h2==h4-1 or h2==h4+1))
        return 1;
    if(h2==h4 and (h1==h3-1 or h1==h3+1))
        return 1;
    return 0;
}
void explorefind(int x, int y, int k)
{
    short i,j;
    int p=1,u=1,pl1,pl2;
    coada[p][1]=x;
    coada[p][2]=y;
    viz[x][y]=1;
    nrtap3=1;
    while(p<=u)
    {
        pl1=coada[p][1];
        pl2=coada[p][2];
        for(i=1;i<=ntap3;i++)
            for(j=1;j<=ntap3;j++)
                if(tap3[i][j]==k)
                    if(verify(pl1,pl2,i,j)==1 and viz[i][j]==0){
                        u++;
                        coada[u][1]=i;
                        coada[u][2]=j;
                        viz[i][j]=1;
                        nrtap3++;
                    }
        p++;
    }
}
void explorereplace(int x, int y, int k)
{
    short i,j;
    int p=1,u=1,pl1,pl2;
    coada[p][1]=x;
    coada[p][2]=y;
    viz[x][y]=1;
    nrtap3=1;
    while(p<=u)
    {
        pl1=coada[p][1];
        pl2=coada[p][2];
        for(i=1;i<=ntap3;i++)
            for(j=1;j<=ntap3;j++)
                if(tap3[i][j]==k)
                    if(verify(pl1,pl2,i,j)==1 and viz[i][j]==0){
                        u++;
                        coada[u][1]=i;
                        coada[u][2]=j;
                        viz[i][j]=1;
                        nrtap3++;
                    }
        p++;
    }
        okelement=1;
        int t;
        for(i=1;i<=u;i++){
            t=rand()%5;
            tap3[coada[i][1]][coada[i][2]]=(char)(86+t);
        }
}
void tap()
{
    nrtap3=0;
    explorefind(i1,j1,tap3[i1][j1]);
    reset();
    if(nrtap3>=3){
        explorereplace(i1,j1,tap3[i1][j1]);
    }
    else
        {
        okelement=0;
        cout<<"The chosen element does not meet the requirements!\nSelect another one.\n";
    }
}
void inputmovetap3()
{
    do{
        cin>>i1;
    }while((i1<1 or i1>ntap3) and i1!=9);
    if(i1!=9){
    do{
        cin>>j1;
    }while(j1<1 or j1>ntap3);
    tap();
    }
    else {oktap31=1;okelement=1;}
}
bool okshuffleagain()
{
    short kok;
    do{
        cin>>kok;
    }while(kok!=1 and kok!=0 and kok!=9);
    if(kok!=9)
        return kok;
    else {  oktap3=1;
            return 0;}
}
void displayintrotap3(char intro[9999])
{
    int i,j;
    for(i=0;i<200000*strlen(intro);i++)
        if(i%200000==0){
            for(k=1;k<=3850;k++)
                for(j=1;j<=3850;j++);
            if(i==0)
                cout<<intro[0];
            else
                cout<<intro[i/200000];
    }
}
bool citireokshuffle()
{
    short kok;
    do{cin>>kok;}while(kok!=1 and kok!=0);
    if(kok==0)
        return 0;
    else return 1;
}
void porniretap3()
{
    bool okshuffle;
    oktap3=0;
    oktap31=0;
    okelement=0;
    i1=0;
    j1=0;
    char intro[9999];
    strcpy(intro,"Bun venit la Tap 3!\nScopul jocului este de a \"distruge\" grupuri de 3 sau mai multe litere de acelasi tip, situate una langa alta.\nJucatorul va introduce linia si coloana elementului selectat,iar daca elementul selectat face parte dintr-un grup \nvalabil, acel grup va fi \"distrus\".\nDoriti ca optiunea de Shuffle sa fie disponibila?\nAceasta amesteca matricea pentru a schimba elementele.\n1.Da 0.Nu\n");
    displayintrotap3(intro);
    okshuffle=citireokshuffle();
    strcpy(intro,"Puteti introduce oricand tasta 9 pentru a va intoarce la meniul principal.\nSucces!\n \n");
    displayintrotap3(intro);
    srand((unsigned)time(0));
    crearetap3();
    afisaretap3();
    do{
        do{
            inputmovetap3();
        }while(okelement==0);
        afisaretap3();
        if(okshuffle==1 and oktap31==0)
        {
            cout<<"Shuffle? 1.Yes 0.No"<<endl;
            oktap3=okshuffleagain();
            if(oktap31==0){
                if(oktap3==1){
                    crearetap3();
                    afisaretap3();
                }
            }
        }
        cout<<endl;
        reset();
    }while(oktap31==0);
    strcpy(intro,"Apasati tasta Enter pentru a va intoarce la meniul principal.");
            displayintrotap3(intro);
    cin.get();
    cin.get();
}
#endif
