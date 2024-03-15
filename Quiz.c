//#include <iostream>
#include <string.h>
//#include "quiz.h"
char s[256];
//int docile=0,calm=0,hardy=0,brave=0,jolly=0,relaxed=0,impish=0,quirky=0,lonely=0,naive=0,timid=0,sassy=0,hasty=0,k;
void displayresults()
{
   /* putchar("docile:");
    putchar(docile);
    putchar('\n');*/
    /*cout<<"calm:"<<calm<<endl;
    cout<<"hardy:"<<hardy<<endl;
    cout<<"brave:"<<brave<<endl;
    cout<<"jolly:"<<jolly<<endl;
    cout<<"relaxed:"<<relaxed<<endl;
    cout<<"impish:"<<impish<<endl;
    cout<<"quirky:"<<quirky<<endl;
    cout<<"lonely:"<<lonely<<endl;
    cout<<"naive:"<<naive<<endl;
    cout<<"timid:"<<timid<<endl;
    cout<<"sassy:"<<sassy<<endl;
    cout<<"hasty:"<<hasty<<endl;*/
}
void displayqna()
{
    /*int i,j;
    for(i=0;i<200000*strlen(s);i++)
        if(i%200000==0){
            for(k=1;k<=5000;k++)
                for(j=1;j<=5050;j++);
            if(i==0)
                cout<<s[0];
            else
                cout<<s[i/200000];*
    }*/
}
void pornire()
{
    /*int aux;
    strcpy(s,"A test is coming up.\nHow do you study for it?\n1.Study Hard\n2.At the last second\n3.Ignore it and play\n");
    displayqna();
    do{cin>>k;}while(k<1 or k>3);
    switch (k)
    {
        case 1:hardy+=2;break;
        case 2:relaxed+=2;break;
        case 3:impish+=2;break;
    }
    strcpy(s,"Can you focus on something you like?\n1.Yes\n2.No\n");
    displayqna();
    do{cin>>k;}while(k<1 or k>2);
    switch (k)
    {
        case 1:hardy+=2;docile++;break;
        case 2:quirky+=2;break;
    }
    strcpy(s,"When the going gets tough, do you get going?\n1.Yes\n2.No\n");
    displayqna();
    do{cin>>k;}while(k<1 or k>2);
    switch (k)
    {
        case 1:hardy+=2;brave+=2;break;
        case 2:sassy+=2;quirky+=2;break;
    }
    strcpy(s,"There is a bucket. If you put water in it, how high will you fill it?\n1.Full\n2.Half\n3.A little\n");
    displayqna();
    do{cin>>k;}while(k<1 or k>3);
    switch (k)
    {
        case 1:hardy+=2;break;
        case 2:calm+2;break;
        case 3:quirky+=2;break;
    }
    strcpy(s,"You are offered a choice of two gifts\n Which one will you take?\n1.Big box\n2.Small box\n");
    displayqna();
    do{cin>>k;}while(k<1 or k>2);
    switch (k)
    {
        case 1:docile+=2;naive++;break;
        case 2:calm++;timid+=2;break;
    }
    strcpy(s,"You broke a rotten egg in your room\nWhat will you do?\n1.Open a window right away\n2.Take a sniff first\n");
    displayqna();
    do{cin>>k;}while(k<1 or k>2);
    switch (k)
    {
        case 1:docile+=2;hasty++;break;
        case 2:naive+=2;relaxed++;break;
    }
    strcpy(s,"A friend brought over something you'd forgotten.\nHow do you thank your friend?\n1.Say thank you regularly\n2.Say thanks with a joke.\n3.Say thanks, but be cool.\n");
    displayqna();
    do{cin>>k;}while(k<1 or k>3);
    switch (k)
    {
        case 1:docile+=2;break;
        case 2:naive++;lonely++;break;
        case 3:sassy+=2;breakl
    }
    strcpy(s,"There is a wallet at the side of a road.\n1.Turn it in to the police!\n2.Yay! Yay!\n3.Is anyone watching...?\n");
    displayqna();
    do{cin>>k;}while(k<1 or k>3);
    switch (k)
    {
        case 1:docile+=2;break;
        case 2:naive+=2;break;
        case 3:impish+=2;break;
    }
    strcpy(s,"You're going bungee jumping for the first time.\nSince it's scary, you decide to test the jump with a doll...\nAnd the bungee cord snaps!\nWill you still try to make a jump anyway?\n1.Yes\n2No\n");
    displayqna();
    do{cin>>k;}while(k<1 or k>2);
    switch (k)
    {
        case 1:brave+=3;impish++;break;
        case 2:docile+=2;timid++;break;
    }
    strcpy(s,"There is an alien invasion!\nWhat will you do?\n1.Fight\n2.Run\n3.Ignore it\n");
    displayqna();
    do{cin>>k;}while(k<1 or k>3);
    switch (k)
    {
        case 1:{
            strcpy(s,"You valiantly fight the aliens...\nBut, you are defeated...\n\nAn alien says to you...\n\n\"YOU HAVE IMPRESSED US.\nIT WAS A PLEASURE TO SEE.\n\nJOIN US, AND TOGETHER WE SHALL\nRULE THE WORLD.\"\nWhat will you do?\n1.Rule with the aliens\n2.Refuse\n");
            displayqna();
            do{cin>>aux;}while(aux<1 or aux>2);
            switch (aux)
            {
                case 1:sassy++;relaxed++;break;
                case 2:brave+=4;break;
            }
            }break;
        case 2:timid+=2;break;
        case 3:relaxed+=2;break;
    }
    strcpy(s,"There is a scream from behind a door!\nHow will you react?\n1.Yank open the door\n2.Scream in union\n");
    displayqna();
    do{cin>>k;}while(k<1 or k>2);
    switch (k)
    {
        case 1:brave+=2;hardy++;break;
        case 2:naive+=2;;break;
    }
    strcpy(s,"A delinquent is hassling a girl on a busy street!\nWhat will you do?\n1.Help without hesitation\n2.Help, even if scared\n3.Call the police\n4.Do nothing out of fear\n");
    displayqna();
    do{cin>>k;}while(k<1 or k>4);
    switch (k)
    {
        case 1:brave+=3;break;
        case 2:hardy+=2;brave+=2;break;
        case 3:docile++;timid++;relaxed++;break;
        case 4:timid+=2;break;
    }
    strcpy(s,"Are you a cheerful personality?\n1.Yes\n2.No");
    displayqna();
    do{cin>>k;}while(k<1 or k>2);
    switch (k)
    {
        case 1:jolly+=2;naive++;break;
        case 2:sassy++;quirky++;break;
    }
    strcpy(s,"Do you like to noisily enjoy yourself with others?\n1.Yes\n2.No");
    displayqna();
    do{cin>>k;}while(k<1 or k>2);
    switch (k)
    {
        case 1:jolly+=2;lonely++;break;
        case 2:timid++;break;
    }
    strcpy(s,"It's the summer holidays!\nWhere would you like to go?\n1.The beach\n2.Spa\n3.Anywhere");
    displayqna();
    do{cin>>k;}while(k<1 or k>3);
    switch (k)
    {
        case 1:jolly+=2;break;
        case 2:calm+=2;break;
        case 3:quirky+=2;break;
    }
    strcpy(s,"A foreign person has started up a conversation with you.\n\nTo be honest, you don't have a clue what this fellow is saying.\nHow do you reply?\n1.Haha! Yes. Very funny!\n2.Um... Could you say that again?\n3.Right... Well, I gotta go.\n");
    displayqna();
    do{cin>>k;}while(k<1 or k>3);
    switch (k)
    {
        case 1:jolly+=3;break;
        case 2:hardy+=2;break;
        case 3:timid+=2;break;
    }
    strcpy(s,"Have you ever made a pitfall trap?\n1.Yes\n2.No\n");
    displayqna();
    do{cin>>k;}while(k<1 or k>2);
    switch (k)
    {
        case 1:impish+=2;lonely++;break;
        case 2:calm+=1;break;
    }
    strcpy(s,"Do you like pranks?\n1.Yes\n2.No\n");
    displayqna();
    do{cin>>k;}while(k<1 or k>2);
    switch (k)
    {
        case 1:impish+=2;break;
        case 2:docile++;relaxed++;break;
    }
    strcpy(s,"Are there many things that you would like to do?\n1.Yes\n2.No\n");
    displayqna();
    do{cin>>k;}while(k<1 or k>2);
    switch (k)
    {
        case 1:impish+=2;hardy++;break;
        case 2:quirky+=2;sassy++;break;
    }
    strcpy(s,"Your friend is being bullied!\nWhat do you do?\n1.Face up to the bully\n2.Caution the bully from afar\n3.Heckle the bully from behind\n");
    displayqna();
    do{cin>>k;}while(k<1 or k>3);
    switch (k)
    {
        case 1:brave+=3;break;
        case 2:timid+2;break;
        case 3:impish+=2;break;
    }
    strcpy(s,"Do you like groan-inducing puns?\n1.Love them!\n2.A little\n3.Spare me\n");
    displayqna();
    do{cin>>k;}while(k<1 or k>3);
    switch (k)
    {
        case 1:impish++;naive+=3;break;
        case 2:jolly+=2;break;
        case 3:sassy+=2;break;
    }
    strcpy(s,"Do you tend to laugh a lot?\n1.Yes\n2.No\n");
    displayqna();
    do{cin>>k;}while(k<1 or k>2);
    switch (k)
    {
        case 1:naive+=2;jolly++;break;
        case 2:quirky+=2;break;
    }
    strcpy(s,"Do others often call you childish?\n1.Yes\n2.No\n");
    displayqna();
    do{cin>>k;}while(k<1 or k>2);
    switch (k)
    {
        case 1:naive+=2;jolly++break;
        case 2:calm+=2;break;
    }
    strcpy(s,"Do you like to imagine things for your amusement?\1.Yes\n2.No\n");
    displayqna();
    do{cin>>k;}while(k<1 or k>2);
    switch (k)
    {
        case 1:naive+=2;break;
        case 2:hasty+=2;break;
    }
    strcpy(s,"A human hand extends out of a toilet!\nWhat would you do?\n1.Scream and run\n2.Close the lid without a word\n3.Shake hands with it\n");
    displayqna();
    do{cin>>k;}while(k<1 or k>3);
    switch (k)
    {
        case 1:timid+=2;break;
        case 2:calm+=2;hardy++;break;
        case 3:brave+=2;impish++;naive++;break;
    }
    strcpy(s,"Grab any finger on your left hand with your right hand.\nWhich finger did you grab?\1.Thumb\n2.Index finger\n3.Middle finger\n4.Ring finger\n5.Little finger");
    displayqna();
    do{cin>>k;}while(k<1 or k>5);
    switch (k)
    {
        case 1:timid+=2;break;
        case 2:hasty+=2;break;
        case 3:jolly+=2;break;
        case 4:sassy+=2;break;
        case 5:lonely+=2;break;
    }
    strcpy(s,"You are suddenly locked inside a pitch-black room!\n What do you do?\n1.Kick the door\n2.Cry\n3.Clean it.");
    displayqna();
    do{cin>>k;}while(k<1 or k>3);
    switch (k)
    {
        case 1:hasty+=2,brave++;
        case 2:lonely+=2,timid++;
        case 3:impish+=2,quirky++;break;
    }
    strcpy(s,"Do you like pranks?\1.Yes\n2.");
    displayqna();
    do{cin>>k;}while(k<1 or k>2);
    switch (k)
    {
        case 1:impish+=2;break;
        case 2:docile++;relaxed++;break;
    }
    strcpy(s,"Can you go into a haunted house?\n1.No problem!\n2.Uh...N-no...\n3.With someone I like\n");
    displayqna();
    do{cin>>k;}while(k<1 or k>3);
    switch (k)
    {
        case 1:brave+=3;break;
        case 2:timid+=2;break;
        case 3:sassy+=2;
    }
    strcpy(s,"You receive a gift!\nBut you don't know what's in it.\nYo u're curious, so what do you do?\n1.Open it now\n2.Open it later\n3.Get someone to open it\n");
    displayqna();
    do{cin>>k;}while(k<1 or k>3);
    switch (k)
    {
        case 1:hasty+=2;break;
        case 2:calm+=2;break;
        case 2:timid+=2;break;
    }
    strcpy(s," You win a lottery!\nWhat do you do with the money?\n1.Spend it now\n2.Save it\n3.Give it away'n");
    displayqna();
    do{cin>>k;}while(k<1 or k>3);
    switch (k)
    {
        case 1:jolly+=2;hasty++;break;
        case 2:hardy++;calm++;break;
        case 3:brave+=2;quirky+=2;break;
    }
    strcpy(s,"You come across a treasure chest!\nWhat do you do?\n1.Open it right away!\n2.No... Could be a trap...\n3.It's going to be empty...\n");
    displayqna();
    do{cin>>k;}while(k<1 or k>3);
    switch (k)
    {
        case 1:hasty+=2;break;
        case 2:timid+=2;break;
        case 3:sassy+=2;break;
    }
    strcpy(s,"Your friend fails to show up for a meeting at the promised time.\nWhat do you do?\n1.Become irritated.\n2.Wait patiently.\n3.Get angry and bail.\n");
    displayqna();
    do{cin>>k;}while(k<1 or k>3);
    switch (k)
    {
        case 1:hasty+=2;docile++;break;
        case 2:relaxed+=2;break;
        case 3:hasty+=3;break;
    }
    strcpy(s,"Your country's leader is in front of you.\nHow do you speak to him or her?\n1.Speak calmly\n2.Speak nervously\n3.WHATEVER!!\n");
    displayqna();
    do{cin>>k;}while(k<1 or k>3);
    switch (k)
    {
        case 1:hardy+=2;break;
        case 2:docile+=2;break;
        case 3:sassy+=3;break;
    }
    strcpy(s,"Do others tell you to watch what you say?\n1.Yes\n2.No\n");
    displayqna();
    do{cin>>k;}while(k<1 or k>2);
    switch (k)
    {
        case 1:sassy+=2;impish++;break;
        case 2:calm+=2;break;
    }
    strcpy(s,"Do you think you are cool?\nBe honest.\n1.Yes\n2.No\n");
    displayqna();
    do{cin>>k;}while(k<1 or k>2);
    switch (k)
    {
        case 1:sassy+=2;break;
        case 2:relaxed+=2;break;
    }
    strcpy(s,"Can you sincerely thank someone when you feel grateful?\n1.Yes\n2.No\n");
    displayqna();
    do{cin>>k;}while(k<1 or k>2);
    switch (k)
    {
        case 1:docile+=2;calm++break;
        case 2:sassy+=2;quirky++;break;
    }
    strcpy(s,"Do you occasionally consider yourself dull and overly cautious?\n1.Yes\n2.No\n");
    displayqna();
    do{cin>>k;}while(k<1 or k>2);
    switch (k)
    {
        case 1:calm+=2;lonely++;break;
        case 2:hardy+=2;break;
    }
    strcpy(s,"Do you dream of lounging around idly without much excitement?\n1.Yes\n2.No\n");
    displayqna();
    do{cin>>k;}while(k<1 or k>2);
    switch (k)
    {
        case 1:calm+=2;break;
        case 2:impish+=2;break;
    }
    strcpy(s,"Do you like to fight?\n1.Yes\n2.No\n");
    displayqna();
    do{cin>>k;}while(k<1 or k>2);
    switch (k)
    {
        case 1:timid+=2;impish++break;
        case 2:calm+=2;break;
    }
    strcpy(s,"Do you often yawn?\n1.Yes\n2.No\n");
    displayqna();
    do{cin>>k;}while(k<1 or k>2);
    switch (k)
    {
        case 1:calm+=2;relaxed++;break;
        case 2:hardy++;hasty+=2;break;
    }
    strcpy(s,"Are you often late for school or meetings?\n1.Yes\n2.No\n");
    displayqna();
    do{cin>>k;}while(k<1 or k>2);
    switch (k)
    {
        case 1:impish+=2;break;
        case 2:docile++;relaxed++;break;
    }
    strcpy(s,"Do you like pranks?\1.Yes\n2.");
    displayqna();
    do{cin>>k;}while(k<1 or k>2);
    switch (k)
    {
        case 1:impish+=2;break;
        case 2:docile++;relaxed++;break;
    }
    strcpy(s,"Do you like pranks?\1.Yes\n2.");
    displayqna();
    do{cin>>k;}while(k<1 or k>2);
    switch (k)
    {
        case 1:impish+=2;break;
        case 2:docile++;relaxed++;break;
    }
    strcpy(s,"Do you like pranks?\1.Yes\n2.");
    displayqna();
    do{cin>>k;}while(k<1 or k>2);
    switch (k)
    {
        case 1:impish+=2;break;
        case 2:docile++;relaxed++;break;
    }
    strcpy(s,"Do you like pranks?\1.Yes\n2.");
    displayqna();
    do{cin>>k;}while(k<1 or k>2);
    switch (k)
    {
        case 1:impish+=2;break;
        case 2:docile++;relaxed++;break;
    }
    strcpy(s,"Do you like pranks?\1.Yes\n2.");
    displayqna();
    do{cin>>k;}while(k<1 or k>2);
    switch (k)
    {
        case 1:impish+=2;break;
        case 2:docile++;relaxed++;break;
    }
    strcpy(s,"Do you like pranks?\1.Yes\n2.");
    displayqna();
    do{cin>>k;}while(k<1 or k>2);
    switch (k)
    {
        case 1:impish+=2;break;
        case 2:docile++;relaxed++;break;
    }
    strcpy(s,"Do you like pranks?\1.Yes\n2.");
    displayqna();
    do{cin>>k;}while(k<1 or k>2);
    switch (k)
    {
        case 1:impish+=2;break;
        case 2:docile++;relaxed++;break;
    }
    strcpy(s,"Do you like pranks?\1.Yes\n2.");
    displayqna();
    do{cin>>k;}while(k<1 or k>2);
    switch (k)
    {
        case 1:impish+=2;break;
        case 2:docile++;relaxed++;break;
    }
    strcpy(s,"Do you like pranks?\1.Yes\n2.");
    displayqna();
    do{cin>>k;}while(k<1 or k>2);
    switch (k)
    {
        case 1:impish+=2;break;
        case 2:docile++;relaxed++;break;
    }
    strcpy(s,"Do you like pranks?\1.Yes\n2.");
    displayqna();
    do{cin>>k;}while(k<1 or k>2);
    switch (k)
    {
        case 1:impish+=2;break;
        case 2:docile++;relaxed++;break;
    }
    strcpy(s,"Do you like pranks?\1.Yes\n2.");
    displayqna();
    do{cin>>k;}while(k<1 or k>2);
    switch (k)
    {
        case 1:impish+=2;break;
        case 2:docile++;relaxed++;break;
    }
    strcpy(s,"Do you like pranks?\1.Yes\n2.");
    displayqna();
    do{cin>>k;}while(k<1 or k>2);
    switch (k)
    {
        case 1:impish+=2;break;
        case 2:docile++;relaxed++;break;
    }
    strcpy(s,"Do you like pranks?\1.Yes\n2.");
    displayqna();
    do{cin>>k;}while(k<1 or k>2);
    switch (k)
    {
        case 1:impish+=2;break;
        case 2:docile++;relaxed++;break;
    }
    strcpy(s,"Do you like pranks?\1.Yes\n2.");
    displayqna();
    do{cin>>k;}while(k<1 or k>2);
    switch (k)
    {
        case 1:impish+=2;break;
        case 2:docile++;relaxed++;break;
    }
    strcpy(s,"Do you like pranks?\1.Yes\n2.");
    displayqna();
    do{cin>>k;}while(k<1 or k>2);
    switch (k)
    {
        case 1:impish+=2;break;
        case 2:docile++;relaxed++;break;
    }
    strcpy(s,"Do you like pranks?\1.Yes\n2.");
    displayqna();
    do{cin>>k;}while(k<1 or k>2);
    switch (k)
    {
        case 1:impish+=2;break;
        case 2:docile++;relaxed++;break;
    }*/

    displayresults();
}

