#include <stdio.h>
#include "jatek.h"
#include <stdbool.h>
#include <stdlib.h>
#include <conio.h>
#include <Windows.h>
    int pont=0;
typedef enum{stop=0,right,left,up,down}Direction;
Direction dir;
Direction var;
void Jatekleiras(){
printf("\n                                    ######################");
printf("\n                                    #  Jani es az almak  #");
printf("\n                                    ######################\n\n");
printf(" - Jani egy farmer gyerek akinek rengeteg teendoje van, hiszen megertek a finom es zamatos almai\n");
printf(" - Jatekosunk almaira azonban penzes baratai is igenyt tartanak hiszen tudjak, hogy ezek egeszsegesebbek, mint amit ok megvesznek \n");
printf(" - Jani nem tudja, de baratai penzzel el szeretnek csalogatni otthonrol, hogy ellophassak az almait\n");
printf(" - A jatek lenyege tehat, hogy Jani(J) osszegyujthesse az osszes almat(A) anelkul, hogy baratai penzet elfogadna($)\n");

}

//-----------------------------------------------------------------------------------------------
Elem* Create(int x,int y){
Elem* e =(Elem*)calloc(1,sizeof(Elem));
if(!e) exit(1);
e->x=x;
e->y=y;
return e;
}
//-----------------------------------------------------------------------------------------------
void Palya1(int m,int sz, Elem* Jani, Elem* akadaly, Elem* Alma){

system("cls");

int i,j;
for(i=0;i<sz;i++)
    printf("$");

    printf("\n");
for(i=0;i<m;i++){
    for(j=0;j<sz;j++)
        {if(j==0 || j==sz-1)
        printf("$");
    else
    //Jani megralyzolasa
        if(i==Jani->y && j==Jani->x)printf("J");
        else
        //egy akadaly megrajzolasa
            if(i==akadaly->y && j==akadaly->x)printf("$");
            else
            //az alma megrajzolasa
                if(i==Alma->y && j==Alma->x) printf("A");
                else
                    printf(" ");

            }

            printf("\n");
    }







for(i=0;i<sz;i++)
        printf("$");

        printf("\nAlmak szama%i",pont);
        dir=stop;

}
//-----------------------------------------------------------------------------------------------
bool Szabaly1(int m,int sz,Elem* Jani,Elem* akadaly,Elem* Alma){

//uj alma letrehozasa ha leszedte az elozot
if(Jani->x==Alma->x && Jani->y==Alma->y){
pont++;
Alma->x=rand()%(sz-2)+1;
Alma->y=rand()%(m-1)+1;
if(Alma->x==akadaly->x && Alma->y==akadaly->y)
{Alma->x=rand()%(sz-2)+1;
Alma->y=rand()%(m-1)+1;
}
}
Sleep(40);
//jatek vege
if(Jani->x==0) return true;
if(Jani->x==sz-1) return true;
if(Jani->y==-1) return true;
if(Jani->y==m) return true;
if((Jani->x==akadaly->x && Jani->y==akadaly->y) ) return true;
}
//-----------------------------------------------------------------------------------------------
void Iranyitas1(int m,int sz,Elem* Jani,Elem* akadaly,Elem* Alma){
bool GAme=false;
int i;
 while(!GAme){
if(_kbhit()){
    switch(_getch()){
    case 'a':dir=left;break;
    case 'd':dir=right;break;
    case 'w':dir=up;break;
    case 's':dir=down;break;


    }}


if(dir==right || dir==left || dir==up || dir==down) var=dir;
    if(var==right)
    {
        Jani->x++;
    }
     if(var==left)
    {
        Jani->x--;
    }
     if(var==up)
    {
        Jani->y--;
    }
     if(var==down)
    {
        Jani->y++;
    }



    GAme= Szabaly1(m,sz,Jani,akadaly,Alma);
   if(GAme==true)
    break;}

}
//-----------------------------------------------------------------------------------------------
void Palya2(int m,int sz, Elem* Jani, Elem* akadaly, Elem* Alma,Elem* akadaly1){

system("cls");

int i,j;
for(i=0;i<sz;i++)
    printf("$");

    printf("\n");
for(i=0;i<m;i++){
    for(j=0;j<sz;j++)
        {if(j==0 || j==sz-1)
        printf("$");
    else
        if(i==Jani->y && j==Jani->x)printf("J");
        else
            if(i==akadaly->y && j==akadaly->x)printf("$");
            else
                if(i==akadaly1->y && j==akadaly1->x)printf("$");
                else
                    if(i==Alma->y && j==Alma->x) printf("A");
                    else
                        printf(" ");

            }

            printf("\n");
    }



for(i=0;i<sz;i++)
        printf("$");

        printf("\nAlmak szama%i",pont);
        dir=stop;

}
//-----------------------------------------------------------------------------------------------
bool Szabaly2(int m,int sz,Elem* Jani,Elem* akadaly,Elem* Alma,Elem* akadaly1){

if(akadaly1->x==akadaly->x && akadaly1->y==akadaly->y)
{

 akadaly1->x=rand()%(sz-2)+1;
akadaly1->y=rand()%(m-1)+1;}

if(Jani->x==Alma->x && Jani->y==Alma->y){
pont++;
Alma->x=rand()%(sz-2)+1;
Alma->y=rand()%(m-1)+1;
if((Alma->x==akadaly->x && Alma->y==akadaly->y) || (Alma->x==akadaly1->x && Alma->y==akadaly1->y))
{Alma->x=rand()%(sz-2)+1;
Alma->y=rand()%(m-1)+1;
}
Sleep(40);

if(Jani->x==0) return true;
if(Jani->x==sz-1) return true;
if(Jani->y==-1) return true;
if(Jani->y==m) return true;
if((Jani->x==akadaly->x && Jani->y==akadaly->y)||(Jani->x==akadaly1->x && Jani->y==akadaly1->y) ) return true;
}}
//-----------------------------------------------------------------------------------------------
void Iranyitas2(int m,int sz,Elem* Jani,Elem* akadaly,Elem* Alma,Elem* akadaly1){
bool GAme=false;
int i;
 while(!GAme){
if(_kbhit()){
    switch(_getch()){
    case 'a':dir=left;break;
    case 'd':dir=right;break;
    case 'w':dir=up;break;
    case 's':dir=down;break;


    }}


if(dir==right || dir==left || dir==up || dir==down) var=dir;
    if(var==right)
    {
        Jani->x++;
    }
     if(var==left)
    {
        Jani->x--;
    }
     if(var==up)
    {
        Jani->y--;
    }
     if(var==down)
    {
        Jani->y++;
    }



    GAme= Szabaly2(m,sz,Jani,akadaly,Alma,akadaly1);
   if(GAme==true)
    break;}

}
//-----------------------------------------------------------------------------------------------
void Palya3(int m,int sz, Elem* Jani, Elem* akadaly, Elem* Alma,Elem* akadaly1,Elem* akadaly2){

system("cls");

int i,j;
for(i=0;i<sz;i++)
    printf("$");

    printf("\n");
for(i=0;i<m;i++){
    for(j=0;j<sz;j++)
        {if(j==0 || j==sz-1)
        printf("$");
    else
        if(i==Jani->y && j==Jani->x)printf("J");
        else
            if(i==akadaly->y && j==akadaly->x)printf("$");
            else
                if(i==akadaly1->y && j==akadaly1->x)printf("$");
                else
                    if(i==akadaly2->y && j==akadaly2->x)printf("$");
                    else
                        if(i==Alma->y && j==Alma->x) printf("A");
                        else
                        printf(" ");

            }

            printf("\n");
    }



for(i=0;i<sz;i++)
        printf("$");

        printf("\nAlmak szama%i",pont);
        dir=stop;

}
//-----------------------------------------------------------------------------------------------
bool Szabaly3(int m,int sz,Elem* Jani,Elem* akadaly,Elem* Alma,Elem* akadaly1,Elem* akadaly2){
if((akadaly2->x==akadaly->x && akadaly2->y==akadaly->y) || (akadaly2->x==akadaly1->x && akadaly2->y==akadaly1->y))
{

 akadaly2->x=rand()%(sz-2)+1;
akadaly2->y=rand()%(m-1)+1;}

if(Jani->x==Alma->x && Jani->y==Alma->y){
pont++;
Alma->x=rand()%(sz-2)+1;
Alma->y=rand()%(m-1)+1;
if((Alma->x==akadaly->x && Alma->y==akadaly->y) || (Alma->x==akadaly1->x && Alma->y==akadaly1->y) || (Alma->x==akadaly2->x && Alma->y==akadaly2->y))
{Alma->x=rand()%(sz-2)+1;
Alma->y=rand()%(m-1)+1;
}
}
Sleep(40);

if(Jani->x==0) return true;
if(Jani->x==sz-1) return true;
if(Jani->y==-1) return true;
if(Jani->y==m) return true;
if((Jani->x==akadaly->x && Jani->y==akadaly->y)||(Jani->x==akadaly1->x && Jani->y==akadaly1->y) || (Jani->x==akadaly2->x && Jani->y==akadaly2->y) ) return true;
}
//-----------------------------------------------------------------------------------------------
void Iranyitas3(int m,int sz,Elem* Jani,Elem* akadaly,Elem* Alma,Elem* akadaly1,Elem* akadaly2){
bool GAme=false;
int i;
 while(!GAme){
if(_kbhit()){
    switch(_getch()){
    case 'a':dir=left;break;
    case 'd':dir=right;break;
    case 'w':dir=up;break;
    case 's':dir=down;break;


    }}


if(dir==right || dir==left || dir==up || dir==down) var=dir;
    if(var==right)
    {
        Jani->x++;
    }
     if(var==left)
    {
        Jani->x--;
    }
     if(var==up)
    {
        Jani->y--;
    }
     if(var==down)
    {
        Jani->y++;
    }



    GAme= Szabaly3(m,sz,Jani,akadaly,Alma,akadaly1,akadaly2);
   if(GAme==true)
    break;}

}
//-----------------------------------------------------------------------------------------------
void  Szint(int m,int sz,Elem* Jani,Elem* akadaly,Elem* Alma,Elem* akadaly1,Elem* akadaly2,bool GameOver){
while(!GameOver){
if(pont>=0 && pont < 6){
        Palya1( m, sz,Jani,akadaly,Alma);
        GameOver=Szabaly1(m, sz, Jani, akadaly, Alma);
        Iranyitas1( m, sz, Jani, akadaly, Alma);
                            if(pont>=3)
                                Sleep(80);
                            else
                                Sleep(100);
                                }

if(pont>=6 && pont <12){
        Palya2( m, sz,Jani,akadaly,Alma,akadaly1);
        GameOver=Szabaly2(m, sz, Jani, akadaly, Alma,akadaly1);
        Iranyitas2( m, sz, Jani, akadaly, Alma,akadaly1);
                                if(pont>=9)
                                    Sleep(40);
                                else
                                    Sleep(60);
                                }

if(pont>=12 && pont < 20){
        Palya3( m, sz,Jani,akadaly,Alma,akadaly1,akadaly2);
        GameOver=Szabaly3(m, sz, Jani, akadaly, Alma,akadaly1,akadaly2);
        Iranyitas3( m, sz, Jani, akadaly, Alma,akadaly1,akadaly2);
                                if(pont>=12)
                                    Sleep(0);
                                else
                                    Sleep(20);

                                }
                if(pont==20){
                    system("cls");
                    GameOver=true;
              printf("\n\n\n           -----------------------------------------------------------------\n");
                    printf("          |                                                                |\n");
                    printf("          |                                                                |\n");
                    printf("          |                                                                |\n");
                    printf("          |                                                                |\n");
                    printf("          |  Gratulalunk, Janinak sikerult az osszes almat begyujtenie! :) |\n");
                    printf("          |                                                                |\n");
                    printf("          |                                                                |\n");
                    printf("          |                                                                |\n");
                    printf("          |                                                                |\n");
                    printf("          |                                                                |\n");
                    printf("          |                                                                |\n");
                    printf("          -----------------------------------------------------------------\n");
                }

                }
                if(GameOver && pont <20)
                {
                     system("cls");
              printf("\n\n\n            -----------------------------------------------------------------\n");
                    printf("           |                                                                |\n");
                    printf("           |                                                                |\n");
                    printf("           |                                                                |\n");
                    printf("           |                                                                |\n");
                    printf("           |                                                                |\n");
                    printf("           |                          Game Over!                            |\n");
                    printf("           |                                                                |\n");
                    printf("           |                                                                |\n");
                    printf("           |                                                                |\n");
                    printf("           |                                                                |\n");
                    printf("           |                                                                |\n");
                    printf("            -----------------------------------------------------------------\n");


                }

}
