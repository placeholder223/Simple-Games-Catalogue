#ifndef G2048.H
#define G2048.H
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
bool ok2048,ok2048end;
short n2048,a2048[20][20];
void afisare2048()
{
    short i,j;
    cout<<endl;
    for(i=0;i<=n2048+1;i++){
        for(j=0;j<=n2048+1;j++){
            if(i==0 or i==n2048+1 or j==0 or j==n2048+1)
                cout<<"0 ";
            else
                if(a2048[i][j]==0)
                    cout<<"  ";
                else
                    cout<<a2048[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"  1"<<endl;
    cout<<"2   4"<<endl;
    cout<<"  3"<<endl;
}
void generare2048()
{
    int x,y;
    if(ok2048==0){
        do{
            x=rand()%n2048+1;
            y=rand()%n2048+1;
        }while(a2048[x][y]!=0);
        a2048[x][y]=1;
        afisare2048();
    }
}
void procesare2048(int k)
{
    short i,j;
    int y;bool q=0;
    switch(k)
    {
        case 1:
            for(j=1;j<=n2048;j++)
                for(i=1;i<n2048;i++)
                    if(a2048[i][j]==0){
                        q=0;
                        for(y=i+1;y<=n2048;y++)
                            if(a2048[y][j]!=0)
                                q=1;
                        if(q==1)
                            while(a2048[i][j]==0)
                                for(y=i;y<=n2048;y++)
                                    a2048[y][j]=a2048[y+1][j];
                        }
            for(j=1;j<=n2048;j++)
                for(i=1;i<n2048;i++)
                    if(a2048[i][j]==a2048[i+1][j] and a2048[i][j]!=0){
                        a2048[i][j]++;
                        for(y=i+1;y<=n2048;y++)
                            a2048[y][j]=a2048[y+1][j];
                    }
            break;
        case 2:
            for(i=1;i<=n2048;i++)
                for(j=1;j<n2048;j++)
                    if(a2048[i][j]==0){
                        q=0;
                        for(y=j+1;y<=n2048;y++)
                            if(a2048[i][y]!=0)
                                q=1;
                        if(q==1)
                            while(a2048[i][j]==0)
                                for(y=j;y<=n2048;y++)
                                    a2048[i][y]=a2048[i][y+1];
                        }
            for(i=1;i<=n2048;i++)
                for(j=1;j<n2048;j++)
                    if(a2048[i][j]==a2048[i][j+1] and a2048[i][j]!=0){
                        a2048[i][j]++;
                        for(y=j+1;y<=n2048;y++)
                            a2048[i][y]=a2048[i][y+1];
                    }
            break;
        case 3:
            for(j=1;j<=n2048;j++)
                for(i=n2048;i>1;i--)
                    if(a2048[i][j]==0){
                        q=0;
                        for(y=i-1;y>=1;y--)
                            if(a2048[y][j]!=0)
                                q=1;
                        if(q==1)
                            while(a2048[i][j]==0)
                                for(y=i;y>=1;y--)
                                    a2048[y][j]=a2048[y-1][j];
                        }
            for(j=1;j<=n2048;j++)
                for(i=n2048;i>1;i--)
                    if(a2048[i][j]==a2048[i-1][j] and a2048[i][j]!=0){
                        a2048[i][j]++;
                        for(y=i-1;y>=1;y--)
                            a2048[y][j]=a2048[y-1][j];
                    }
            break;
        case 4:
            for(i=1;i<=n2048;i++)
                for(j=n2048;j>1;j--)
                    if(a2048[i][j]==0){
                        q=0;
                        for(y=j-1;y>=1;y--)
                            if(a2048[i][y]!=0)
                                q=1;
                        if(q==1)
                            while(a2048[i][j]==0)
                                for(y=j;y>=1;y--)
                                    a2048[i][y]=a2048[i][y-1];
                        }
            for(i=1;i<=n2048;i++)
                for(j=n2048;j>1;j--)
                    if(a2048[i][j]==a2048[i][j-1] and a2048[i][j]!=0){
                        a2048[i][j]++;
                        for(y=j-1;y>=1;y--)
                            a2048[i][y]=a2048[i][y-1];
                    }
            break;
    }
}
void moveinput2048()
{
    short i,j;
    int k;
    do{cin>>k;}while((k<1 or k>4) and k!=9);
    if(k!=9){
        procesare2048(k);
        ok2048=1;
        for(i=1;i<=n2048;i++)
            for(j=1;j<=n2048;j++)
                if(a2048[i][j]==0)
                    ok2048=0;
        generare2048();
    }
    else
        ok2048end=1;
}
void displayintro2048(char intro[9999])
{
    int i,j;
    for(i=0;i<200000*strlen(intro);i++)
        if(i%200000==0){
            for(k=1;k<=4000;k++)
                for(j=1;j<=4800;j++);
            if(i==0)
                cout<<intro[0];
            else
                cout<<intro[i/200000];
    }
}
void pornire2048()
{
    n2048=4;
    char intro[9999];
    strcpy(intro,"Bun venit la 2048!\nScopul jocului este de a combina numere de acelasi fel pentru a obtine un numar mai mare cu o unitate.\nFiecare actiune afecteaza toate numerele existente.\nJucatorul se va folosi de tastele 1 2 3 4 pentru a muta numerele.\nPuteti introduce oricand tasta 9 pentru a va intoarce la meniul principal.\nSucces!\n\n");
    displayintro2048(intro);
    srand((unsigned)time(0));
    ok2048=0;
    generare2048();
    do{
        moveinput2048();
    }while(ok2048==0 and ok2048end==0);
    if(ok2048==1 and ok2048end==0)
        cout<<"You ran out of empty tiles and of moves";
    strcpy(intro,"Apasati tasta Enter pentru a va intoarce la meniul principal.");
    displayintro2048(intro);
    cin.get();
    cin.get();
}
#endif
