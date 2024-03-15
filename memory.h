#ifndef MEMORY.H
#define MEMORY.H
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
short nmemory,difficultymemory;
bool okmemory,okmemory1;
char memory[10][10],revealed[10][10];
void afisarememory()
{
    int i,j;
    for(i=1;i<=nmemory;i++){
        for(j=1;j<=nmemory;j++)
            cout<<memory[i][j]<<" ";
        cout<<endl;
    }
}
void afisare1(int t,int y)
{
    int i,j;
    for(i=1;i<=nmemory;i++){
        for(j=1;j<=nmemory;j++)
            if(i==t and j==y)
                cout<<memory[i][j]<<" ";
            else
                cout<<revealed[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;
}
void afisare2(int i1,int j1,int i2,int j2)
{
    int i,j;
    for(i=1;i<=nmemory;i++){
        for(j=1;j<=nmemory;j++)
            if((i==i1 and j==j1) or (i==i2 and j==j2))
                cout<<memory[i][j]<<" ";
            else
                cout<<revealed[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;
}
void afisareq()
{
    int i,j;
    for(i=1;i<=nmemory;i++){
        for(j=1;j<=nmemory;j++)
            cout<<revealed[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;
}
void creare()
{
    srand((unsigned)time(0));
    int t,y,k=0,i,j;
    nmemory=2*difficultymemory+2;
    for(i=1;i<=nmemory;i++)
        for(j=1;j<=nmemory;j++)
            revealed[i][j]='?';
    for(i=1;i<=nmemory*nmemory/2;i++){
        if(nmemory%2==0){
            do{
                okmemory=1;
                y=rand()%nmemory+1;
                t=rand()%nmemory+1;
                if(memory[t][y]!=0)
                    okmemory=0;
            }while(okmemory==0);
            memory[t][y]=(char)(65+k);
            do{
                okmemory=1;
                y=rand()%nmemory+1;
                t=rand()%nmemory+1;
                if(memory[t][y]!=0)
                    okmemory=0;
            }while(okmemory==0);
            memory[t][y]=(char)(65+k);
        }
        else{
            do{
                okmemory=1;
                y=rand()%nmemory+1;
                t=rand()%nmemory+1;
                if(memory[t][y]!=0 or (t==nmemory/2+1 and t==y))
                    okmemory=0;
            }while(okmemory==0);
            memory[t][y]=(char)(65+k);
            do{
                okmemory=1;
                y=rand()%nmemory+1;
                t=rand()%nmemory+1;
                if(memory[t][y]!=0 or (t==nmemory/2+1 and t==y))
                    okmemory=0;
            }while(okmemory==0);
            memory[t][y]=(char)(65+k);
        }
            k++;
    }
    if(nmemory%2!=0){
        memory[nmemory/2+1][nmemory/2+1]='0';
        revealed[nmemory/2+1][nmemory/2+1]='0';
    }
}
void matchcard(int i1,int j1, int i2, int j2)
{
    if(memory[i1][j1]==memory[i2][j2]){
        revealed[i1][j1]='0';
        revealed[i2][j2]='0';
    }

}
bool verificarememory()
{
    int i,j;
    for(i=1;i<=nmemory;i++)
        for(j=1;j<=nmemory;j++)
            if(revealed[i][j]=='?')
                return 0;
    return 1;
}
void inputmovememory()
{
    int i1,j1,i2,j2;
    do{
        cin>>i1;
    }while(i1<1 or i1>nmemory);
    do{
        cin>>j1;
    }while(j1<1 or j1>nmemory);
    cout<<endl;
    afisare1(i1,j1);
    do{
        cin>>i2;
    }while(i2<1 or i2>nmemory);
    do{
        cin>>j2;
    }while(j2<1 or j2>nmemory);
    cout<<endl;
    afisare2(i1,j1,i2,j2);
    cin.get();
    //cin.get();
    matchcard(i1,j1,i2,j2);
    afisareq();
    cout<<endl;
}
void nope()
{
    int i;
    for(i=1;i<=300;i++)
        cout<<endl;
}
void displayintromemory(char intro[9999])
{
    int i,j;
    for(i=0;i<200000*strlen(intro);i++)
        if(i%200000==0){
            for(k=1;k<=2800;k++)
                for(j=1;j<=4000;j++);
            if(i==0)
                cout<<intro[0];
            else
                cout<<intro[i/200000];
    }
}
void pornirememory()
{
    char intro[9999];
    strcpy(intro,"Bun venit la Memory Game!\nAcest joc va testa memoria jucatorului.\nJucatorul va fi prezentat cu mai multe perechi de numere, pe care va trebui sa le memoreze deoarece se vor ascunde.\nApoi jucatorul va trebui sa precizeze unde sunt acele perechi scriind linia si coloana fiecarui element in parte.\nDaca perechea este corespunzatoare, elementele vor fi eliminate.\nIn caz contrar, elementele vor fi din nou ascunse.\nAlegeti dificultatea:\n1.Usor\n2.Mediu\n3.Greu\n");
    displayintromemory(intro);
    do{cin>>difficultymemory;}while(difficultymemory<1 or difficultymemory>3);
    strcpy(intro,"Succes!\n \n");
    creare();
    afisarememory();
    cout<<"Apasati tasta Enter cand sunteti pregatit.";
    cin.get();
    cin.get();
    nope();
    afisareq();
    do{
        inputmovememory();
        okmemory=verificarememory();
    }while(okmemory==0);
    cout<<"Congratulations!\n";
    strcpy(intro,"Apasati tasta Enter pentru a va intoarce la meniul principal.");
    displayintromemory(intro);
    cin.get();
}
#endif
