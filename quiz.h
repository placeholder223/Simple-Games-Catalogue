#ifndef QUIZ.H
#define QUIZ.H
#include <iostream>
#include <string.h>
using namespace std;
short t[14];
char s[256];
int docile=0,calm=0,hardy=0,brave=0,jolly=0,relaxed=0,impish=0,quirky=0,lonely=0,naive=0,timid=0,sassy=0,hasty=0,k;
int sortresultsquiz()
{
    int v[14];
    v[1]=docile;
    v[2]=calm;
    v[3]=hardy;
    v[4]=brave;
    v[5]=jolly;
    v[6]=relaxed;
    v[7]=impish;
    v[8]=quirky;
    v[9]=lonely;
    v[10]=naive;
    v[11]=timid;
    v[12]=sassy;
    v[13]=hasty;
    int i,j,aux;
    for(i=1;i<=13;i++)
        t[i]=i;
    for(i=1;i<13;i++)
        for(j=i+1;j<=13;j++)
            if(v[i]<v[j])
            {
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
                aux=t[i];
                t[i]=t[j];
                t[j]=aux;
            }
    return t[1];
}
void displayresults()
{
    cout<<"docile:"<<docile<<endl;
    cout<<"calm:"<<calm<<endl;
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
    cout<<"hasty:"<<hasty<<endl;
}
void results()
{
    int i;
    char original [14][12];
    strcpy(original[1],"docile");
    strcpy(original[2],"calm");
    strcpy(original[3],"hardy");
    strcpy(original[4],"brave");
    strcpy(original[5],"jolly");
    strcpy(original[6],"relaxed");
    strcpy(original[7],"impish");
    strcpy(original[8],"quirky");
    strcpy(original[9],"lonely");
    strcpy(original[10],"naive");
    strcpy(original[11],"timid");
    strcpy(original[12],"sassy");
    strcpy(original[13],"hasty");
    for(i=1;i<=13;i++)
        cout<<original[t[i]]<<endl;
}
void displayqna()
{
    int i,j;
    for(i=0;i<200000*strlen(s);i++)
        if(i%200000==0){
            //for(k=1;k<=4000;k++)
                //for(j=1;j<=4000;j++);
            if(i==0)
                cout<<s[0];
            else
                cout<<s[i/200000];
    }
}
void pornirequiz()
{
    int aux,k;
    strcpy(s,"Bun venit la Quiz!\nLa intrebarile ce urmeaza, jucatorul va selecta numarul corespunzator raspunsului.\nSucces!\n\n");
    displayqna();
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
    strcpy(s,"You are offered a choice of two gifts\nWhich one will you take?\n1.Big box\n2.Small box\n");
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
    strcpy(s,"A friend brought over something you'd forgotten.\nHow do you thank your friend?\n1.Say thank you normally\n2.Say thanks with a joke\n3.Say thanks, but be cool\n");
    displayqna();
    do{cin>>k;}while(k<1 or k>3);
    switch (k)
    {
        case 1:docile+=2;break;
        case 2:naive++;lonely++;break;
        case 3:sassy+=2;break;
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
    strcpy(s,"You're going bungee jumping for the first time.\nSince it's scary, you decide to test the jump with a doll...\nAnd the bungee cord snaps!\nWill you still try to make a jump anyway?\n1.Yes\n2.No\n");
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
    strcpy(s,"A delinquent is harassing a girl on a busy street!\nWhat will you do?\n1.Help without hesitation\n2.Help, even if scared\n3.Call the police\n4.Do nothing out of fear\n");
    displayqna();
    do{cin>>k;}while(k<1 or k>4);
    switch (k)
    {
        case 1:brave+=3;break;
        case 2:hardy+=2;brave+=2;break;
        case 3:docile++;timid++;relaxed++;break;
        case 4:timid+=2;break;
    }
    strcpy(s,"Are you a cheerful personality?\n1.Yes\n2.No\n");
    displayqna();
    do{cin>>k;}while(k<1 or k>2);
    switch (k)
    {
        case 1:jolly+=2;naive++;break;
        case 2:sassy++;quirky++;break;
    }
    strcpy(s,"Do you like to noisily enjoy yourself with others?\n1.Yes\n2.No\n");
    displayqna();
    do{cin>>k;}while(k<1 or k>2);
    switch (k)
    {
        case 1:jolly+=2;lonely++;break;
        case 2:timid++;break;
    }
    strcpy(s,"It's the summer holidays!\nWhere would you like to go?\n1.The beach\n2.Spa\n3.Anywhere\n");
    displayqna();
    do{cin>>k;}while(k<1 or k>3);
    switch (k)
    {
        case 1:jolly+=2;break;
        case 2:calm+=2;break;
        case 3:quirky+=2;break;
    }
    strcpy(s,"A foreign person has started up a conversation with you.\n...\nTo be honest, you don't have a clue what this fellow is saying.\nHow do you reply?\n1.Haha! Yes. Very funny!\n2.Um... Could you say that again?\n3.Right... Well, I gotta go.\n");
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
        case 2:timid+=2;break;
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
        case 1:naive+=2;jolly++;break;
        case 2:calm+=2;break;
    }
    strcpy(s,"Do you like to imagine things for your amusement?\n1.Yes\n2.No\n");
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
    strcpy(s,"Grab any finger on your left hand with your right hand.\nWhich finger did you grab?\n1.Thumb\n2.Index finger\n3.Middle finger\n4.Ring finger\n5.Little finger\n");
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
    strcpy(s,"You are suddenly locked inside a pitch-black room!\nWhat do you do?\n1.Kick the door\n2.Cry\n3.Clean it\n");
    displayqna();
    do{cin>>k;}while(k<1 or k>3);
    switch (k)
    {
        case 1:hasty+=2,brave++;break;
        case 2:lonely+=2,timid++;break;
        case 3:quirky+=3;break;
    }
    strcpy(s,"Can you go into a haunted house?\n1.No problem!\n2.Uh...N-no...\n3.With someone I like\n");
    displayqna();
    do{cin>>k;}while(k<1 or k>3);
    switch (k)
    {
        case 1:brave+=3;break;
        case 2:timid+=2;break;
        case 3:sassy+=2;break;
    }
    strcpy(s,"You receive a gift!\nBut you don't know what's in it.\nYou're curious, so what do you do?\n1.Open it now\n2.Open it later\n3.Get someone to open it\n");
    displayqna();
    do{cin>>k;}while(k<1 or k>3);
    switch (k)
    {
        case 1:hasty+=2;break;
        case 2:calm+=2;break;
        case 3:timid+=2;break;
    }
    strcpy(s,"You win a lottery!\nWhat do you do with the money?\n1.Spend it now\n2.Save it\n3.Give it away\n");
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
    strcpy(s,"Your friend fails to show up for a meeting at the promised time.\nWhat do you do?\n1.Become irritated\n2.Wait patiently\n3.Get angry and bail\n");
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
        case 1:docile+=2;calm++;break;
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
        case 1:timid+=2;impish++;break;
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
    strcpy(s,"Do you get the feeling that you've slowed down lately?\n1.Yes\n2.No\n");
    displayqna();
    do{cin>>k;}while(k<1 or k>2);
    switch (k)
    {
        case 1:relaxed+=2;break;
        case 2:impish++;hasty+=2;break;
    }
    strcpy(s,"It is a pleasant day at the beach.How do you feel?\n1.This feels great!\n2.Snore...\n3.I want to go home soon!\n4.There are too many people here...\n");
    displayqna();
    do{cin>>k;}while(k<1 or k>4);
    switch (k)
    {
        case 1:jolly+=2;break;
        case 2:relaxed+=2;break;
        case 3:hasty+=2;break;
        case 4:lonely+=2;break;
    }
    strcpy(s,"Do you fall asleep without noticing?\n1.Yes\n2.No\n");
    displayqna();
    do{cin>>k;}while(k<1 or k>2);
    switch (k)
    {
        case 1:relaxed+=2;break;
        case 2:hardy+=2;break;
    }
    strcpy(s,"Do you feel lonesome when you are alone?\n1.Yes\n2.No\n");
    displayqna();
    do{cin>>k;}while(k<1 or k>2);
    switch (k)
    {
        case 1:lonely+=2;break;
        case 2:relaxed++;break;
    }
    strcpy(s,"Do you hate to be the last person to leave class at the end of a school day?\n1.Yes\n2.No\n");
    displayqna();
    do{cin>>k;}while(k<1 or k>2);
    switch (k)
    {
        case 1:lonely+=2;timid++;break;
        case 2:relaxed++;break;
    }
    strcpy(s,"What do you do with your room's light when you're going to bed at night?\n1.Leave it on\n2.Turn it off\n");
    displayqna();
    do{cin>>k;}while(k<1 or k>2);
    switch (k)
    {
        case 1:lonely+=2;break;
        case 2:calm++;break;
    }
    strcpy(s,"It's a weekend, but no one will play with you...\nWhat do you do?\n1.Go on a trip\n2.Hang around vacantly\n3.Huddle in a corner\n");
    displayqna();
    do{cin>>k;}while(k<1 or k>3);
    switch (k)
    {
        case 1:relaxed+=2;calm++;break;
        case 2:lonely++;jolly++;break;
        case 3:lonely+=3;timid++;break;
    }
    strcpy(s,"Do you sometimes run out of things to do all of a sudden?\n1.Yes\n2.No\n");
    displayqna();
    do{cin>>k;}while(k<1 or k>2);
    switch (k)
    {
        case 1:quirky+=2;break;
        case 2:docile++;hardy++;break;
    }
    strcpy(s,"How quickly do you respond to an e-mail?\n1.Reply right away\n2.May reply, may not\n3.Too much trouble\n");
    displayqna();
    do{cin>>k;}while(k<1 or k>3);
    switch (k)
    {
        case 1:hasty+=2;break;
        case 2:sassy++;quirky+=2;break;
        case 3:sassy+=2;break;
    }
    strcpy(s,"There is a person you like...\nBut there's no opportunity to get close.\nWhat do you do?\n1.Bravely declare my love\n2.Might say hello...\n3.Pull a prank to get attention\n4.Look from afar\n");
    displayqna();
    do{cin>>k;}while(k<1 or k>4);
    switch (k)
    {
        case 1:brave+=3;hardy++;break;
        case 2:timid+=2;break;
        case 3:quirky+=2;impish+=2;break;
        case 4:lonely+=2;timid+=2;break;
    }
    strcpy(s,"The road forks to the right and left.\nYou are told there is a treasure on the right side.\nWhat do you do?\n1.Instantly go right\n2.It's a trap! Go left\n3.Choose randomly\n");
    displayqna();
    do{cin>>k;}while(k<1 or k>3);
    switch (k)
    {
        case 1:docile+=2,hasty++;break;
        case 2:calm++;sassy++;break;
        case 3:quirky+=2;break;
    }
    strcpy(s,"On vacation outings, you want to...\n1.Go alone\n2.Go with others\n");
    displayqna();
    do{cin>>k;}while(k<1 or k>2);
    switch (k)
    {
        case 1:timid++;quirky++;break;
        case 2:lonely+=2;break;
    }
    strcpy(s,"It's the summer festival!\nDo you like carnivals?\n1.Love them\n2.Meh\n3.I don't\n");
    displayqna();
    do{cin>>k;}while(k<1 or k>3);
    switch (k)
    {
        case 1:jolly+=2;break;
        case 2:sassy++;break;
        case 3:quirky++;break;
    }
    strcpy(s,"Somebody calls you \"weird but funny.\"How does that make you feel?\n1.Happy!\n2.Not happy...\n");
    displayqna();
    do{cin>>k;}while(k<1 or k>2);
    switch (k)
    {
        case 1:naive++;jolly+=2;break;
        case 2:sassy++;lonely++;break;
    }
    int kquiz;
    kquiz=sortresultsquiz();
    strcpy(s,"...\n...\n...\n");
    displayqna();
    switch(kquiz)
    {
        case 1:strcpy(s,"You're very kindhearted. Very helpful.\nYou can make friends with anyone. You're a very wonderful person...\nIs that going overboard? I don't think so.\nYou yourself should be the best judge of that. ");displayqna();break;
        case 2:strcpy(s,"You're capable of giving advice to friends with worries. You don't like to fight.\nYou're a warm kindhearted person who cares.\nYou must have many friends who look up to you.\nHowever... you may also be somewhat gullible as well as a little careless and even a little meddlesome.\nYou might want to keep those points in mind.");displayqna();break;
        case 3:strcpy(s,"You do your homework diligently, and you know how to eat properly.\nYou have strong willpower that lets you complete tasks, however tough.\nBut you can also be stubborn to the point of even feuding with friends.\nNothing will go right for you when you're irritated, so learn to laugh it off.");displayqna();break;
        case 4:strcpy(s,"You have a strong sense of justice. You hate evil. You will take on any opponent.\nYou are truly a hero! Go forth!\nFor justice...\nFor peace on earth...\nFight the forces of evil!\nIf I'm wrong, work at becoming a true hero! ");displayqna();break;
        case 5:strcpy(s,"Always laughing and smiling, you uplift everyone around you.\nYou love jokes! You have lots of friends, and you're popular wherever you go.\nBut sometimes you get carried away and say things that get you in trouble.\nYou should learn to think before saying or doing anything.");displayqna();break;
        case 6:strcpy(s,"Do you occasionally zone out and miss a bus?\nOr do you find yourself dozing off?\nOr is your reaction time a little slower than others?\nBut that's not necessarily a bad thing. You can do things at your own tempo without feeling pressured.\nYou can live in a relaxed and unhurried manner without worries.\nI think that's a happy lifestyle to be envied, even. You're also surprisingly popular.\nThe way you vacantly stare off into the distance... It should make that some special's pulse race.");displayqna();break;
        case 7:strcpy(s,"You're playful and cheerful. You're also kindhearted. That's why the people around you find you so irresistible.\nYou must be the most popular person around! Oh? You're not that popular?\nYou're either being modest...\nor you just don't notice it.\nI bet people are just too shy to let their feelings be known.\nThere's someone out there who's afraid to declare their love for you! ");displayqna();break;
        case 8:strcpy(s,"People consider you an eccentric, doing things at your own pace. You never break tempo.\nYour carefree nature makes you attractive. But you also happen to be somewhat childish.\nYou are fickle and cause problems for the people who have to go along with you.\nMaybe people are even upset with you for being so fickle?\nIf you realize how selfishly you're behaving, try to think before you don anything rash.");displayqna();break;
        case 9:strcpy(s,"You always act cheerful and jocular around other people. But that's only because you are with other people.\nHowever, when you're alone... Do you find yourself feeling oddly depressed?\nThat's why you always want to be with others. It’s not good to go around feeling depressed too much.\nWhy don’t you call up a friend instead? Just remember, it’s not a bad thing to be lonely.\nYou know what it’s like when you aren’t alone, so that’s why you feel lonesome.\nAnd that’s why you aren’t really alone.");displayqna();break;
        case 10:strcpy(s,"You are highly curious and you love rare things.\nYou have a cheerful and carefree attitude which should make thins fun for the people around you.\nBut you have one flaw. You can be childish. You can never sit still. You’re always on the move.\nYou can also be selfish, so you should watch yourself.");displayqna();break;
        case 11:strcpy(s,"You may find it hard to go to the washroom at night.\nYou may also find it too frightening to go back to school to get something you left behind in class.\nIf you’re ever walking on a dark street at night you probably turn around often to check behind you.\nBut your timid nature is also your good point! Because those who know fear are those who know true courage.");displayqna();break;
        case 12:strcpy(s,"You tend to be somewhat cynical. Despite that, there is something appealing and lovable about you.\nBut do you occasionally say something arrogant that angers others?\nDo you make that mistake or have people called you conceited, vain, or selfish?\nHave people said that about you? Huh?\nFrom that look, I take is as a \"Get lost!\" Why, you... Come here and say that!\n*gasp* I’m sorry. I let my feelings fun away. I truly regret this, really.\nAnyway, your cool and aloof attitude is what defines you.\nIt makes you exasperating and appealing at the same time.");displayqna();break;
        case 13:strcpy(s,"You like to take charge and get things done. You’re a real go-getter.\nBut are you also stressed out? You get irritated when your friends don’t show up on time.\nYou get frustrated when things don’t turn out the way you expect.\nMaybe you jab the elevator button if the elevator is slow to arrive.\nMaybe you’re already fidgeting around waiting for the result to end.\nBeware!\nGetting too easily irritated may waste your energy.");displayqna();break;
    }
    strcpy(s,"Would you like to see how you scored?\n1.Yes\n2.No\n");
    displayqna();
    do{cin>>k;}while(k<1 or k>2);
    if(k==1){
        strcpy(s,"The next traits will be displayed from the highest you scored in to the lowest\n");
        displayqna();
        results();
    }
    strcpy(s,"Apasati tasta Enter pentru a va intoarce la meniul principal.");
            displayqna();
    cin.get();
    cin.get();
}
#endif
