#ifndef RPG.H
#define RPG.H
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
short hp,mana,boss,yrpg;
bool oktryagainrpg=0;
void dmgmultiplier(short &dmg)
{
    int i;
    i=rand()%1200+1;
    i=i/199;
    switch(i)
    {
        case 1:dmg*=1.11 ;break;
        case 2:dmg*=1.13 ;break;
        case 3:dmg*=1.15 ;break;
        case 4:dmg*=1.17 ;break;
        case 5:dmg*=1.2 ;break;
        case 6:dmg*=2 ;break;
    }
}
void bossmove(bool dodgeok)
{
    short k,dmg,i;
    k=rand()%3+1;
    yrpg++;
    cout<<endl<<"Turn "<<yrpg<<endl<<endl;
    switch(k)
    {
        case 1:
            if(dodgeok==1){
                cout<<"You moved out of your enemy's way before it could touch you"<<endl;
                dmg=0;
            }
            else{
                cout<<"The enemy tackles you"<<endl;
                dmg=rand()%21+436;
                dmgmultiplier(dmg);
            }
            if(dmg>=872)
                cout<<"CRITICAL HIT!  ";
            cout<<" -"<<dmg<<" HP"<<endl;
            hp-=dmg;
            break;
        case 2:
            if(dodgeok==1){
                cout<<"You moved out of your enemy's way before it could touch you"<<endl;
                dmg=0;
                cout<<" -"<<dmg<<" HP"<<endl;
            }
            else{
                cout<<"The enemy slashes you multiple times"<<endl;
                short n=rand()%3+2;
                for(i=1;i<=n;i++){
                    dmg=rand()%11+106;
                    dmgmultiplier(dmg);
                    if(dmg>212)
                        cout<<"CRITICAL HIT!  ";
                    cout<<" -"<<dmg<<" HP"<<endl;
                    hp-=dmg;
                }
            }
            break;
        case 3:
            cout<<"Enemy Boss is observing you"<<endl;
            break;
    }
}
bool manaok(short k)
{
    if(k==1 or k==4)
        return 1;
     switch(k){
        case 2:
            if(mana<35)
                return 0;
            else
                return 1;
            break;
        case 3:
            if(mana<55)
                return 0;
            else
                return 1;
            break;
        case 5:
            if(mana<10)
                return 0;
            else
                return 1;
            break;
     }
}
void moveinputrpg()
{
    short k,dmg; yrpg++;bool ok,dodgeok=0;
    cout<<endl<<"Turn "<<yrpg<<endl<<"Your Turn"<<endl;
    cout<<"HP Boss: "<<boss<<endl;
    cout<<"HP: "<<hp<<endl;
    cout<<"Mana: "<<mana<<endl<<endl;
    cout<<"1. Normal Attack"<<endl;
    cout<<"2. Special Attack (Costs 35 mana)"<<endl;
    cout<<"3. Recover Health (Cost 55 mana)"<<endl;
    cout<<"4. Meditate"<<endl;
    cout<<"5. Dodge (Costs 10 mana)"<<endl;
    do{
        cout<<endl<<"Select move "; cin>>k;
        cout<<endl;
        ok=manaok(k);
        if(ok==0)
            cout<<"You're too low on mana to use that, choose something else!"<<endl;
    }while(ok==0 or k>5 or k<1);
    while(hp==2000 and k==3)
    {
        cout<<"Your HP is full!"<<endl;
        cout<<endl<<"Select move "; cin>>k;
        cout<<endl;
    }
    switch(k)
    {
        case 1:
            dmg=rand()%21+500;
            dmgmultiplier(dmg);
            if(dmg>1000)
                cout<<"CRITICAL HIT!  ";
            cout<<" -"<<dmg<<" Boss HP"<<endl;
            boss-=dmg;
            break;
        case 2:
            dmg=rand()%41+1152;
            dmgmultiplier(dmg);
            if(dmg>1700)
                cout<<"CRITICAL HIT!  ";
            cout<<" -"<<dmg<<" Boss HP"<<endl;
            boss-=dmg;
            mana-=35;
            break;
        case 3:
            dmg=rand()%21+610;
            dmgmultiplier(dmg);
            if(dmg>1000)
                dmg=768;
            cout<<" +"<<dmg<<" HP"<<endl;
            hp+=dmg;
            if(hp>2000)
                hp=2000;
            mana-=55;
            break;
        case 4:
            dmg=rand()%21+80;
            dmgmultiplier(dmg);
                if(dmg>160)
                    dmg=116;
            mana+=dmg;
            cout<<" +"<<dmg<<" MANA"<<endl;
            if(mana>200)
                mana=200;
            break;
        case 5:
            dodgeok=1;
            mana-=10;
            break;
    }
    if(boss>0)
        bossmove(dodgeok);
}
void displayintrorpg(char intro[9999])
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
void pornirerpg()
{
    char intro[9999];
    if(oktryagainrpg==0){
    strcpy(intro,"Bun venit in lumea RPG, care este o abrievere pentru Role-Playing Game, sau Joc pe Roluri in traducere.\nAi fost ales pentru a invinge Boss-ul.\nSucces!\n\n");
    displayintrorpg(intro);}
    hp=2000;
    mana=200;
    boss=10000;
    srand((unsigned)time(0));
    do{
        moveinputrpg();
    }while(hp>0 and boss>0);
    cout<<endl<<endl;
    if(boss<=0)
        cout<<"HP: "<<hp<<endl<<"HP Boss: 0"<<endl<<"You Win!\n";
    else{
        cout<<"HP: "<<0<<endl<<"HP Boss: "<<boss<<endl<<"You Lose!";
        cin.get();
        cin.get();
        cout<<"Try again?1.Yes 0.No\n";
        cin>>oktryagainrpg;
    }
        if(oktryagainrpg==1)
            pornirerpg();
        else{strcpy(intro,"Apasati tasta Enter pentru a va intoarce la meniul principal.");
            displayintrorpg(intro);
            cin.get();
            cin.get();
        }
}
#endif
