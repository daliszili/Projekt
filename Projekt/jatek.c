#include <stdio.h>
#include "jatek.h"
#include <stdbool.h>
#include <stdlib.h>
#include <conio.h>
#include <Windows.h>
    int pont=0;

Elem* Create(int x,int y){
Elem* snake =(Elem*)calloc(1,sizeof(Elem));
if(!snake) exit(1);
snake->x=x;
snake->y=y;
return snake;
}
Tarsoly* Createtarsoly(int hossz){
Tarsoly* t;
int i;
t=(Tarsoly*)calloc(1,sizeof(Tarsoly));
if(!t) return 0;
t->test=(Elem**)calloc(1,sizeof(Elem*));
if(!t->test) return 0;
for(i=0;i<hossz;++i){
t->test[i]=Create(4,5);
}
t->hossz=hossz;
return t;
}

void DrawFrame(int m,int sz, Elem* snake, Elem* akadaly, Elem* kaja,Tarsoly* tarsoly){

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
        if(i==snake->y && j==snake->x)printf("J");
        else
            if(i==akadaly->y && j==akadaly->x)printf("$");
            else
                if(i==kaja->y && j==kaja->x) printf("A");
            else

               /* bool tarsolye=false;
                int k;
                for(k==0;k<tarsoly->hossz;k++){
                    if(tarsoly->test[k]->x==j && tarsoly->test[k]->y==i){tarsolye=true;break;}

                }
                if(!tarsolye)
                    printf(" ");
                else
                    printf("t");
            }
*/
            printf(" ");



        }

            printf("\n");

    }
for(i=0;i<sz;i++)
        printf("$");

        printf("\nAlmak szama%i",pont);

}





void Iranyitas(int m,int sz,Elem* snake,Elem* akadaly,Elem* kaja,Tarsoly* tarsoly){
typedef enum{stop=0,right,left,up,down}Direction;
Direction dir;
int i;
if(_kbhit()){
    switch(_getch()){
    case 'a':dir=left;break;
    case 'd':dir=right;break;
    case 'w':dir=up;break;
    case 's':dir=down;break;


    }
    switch(dir){
        case left:snake->x--;for(i=0;i<tarsoly->hossz;++i) tarsoly->test[i]->x--;
        break;
        case right:snake->x++;for(i=0;i<tarsoly->hossz;++i) tarsoly->test[i]->x++;
        break;
        case down:snake->y++;for(i=0;i<tarsoly->hossz;++i) tarsoly->test[i]->y++;
        break;
        case up: snake->y--;for(i=0;i<tarsoly->hossz;++i) tarsoly->test[i]->y--;
        break;
    }
}

}
bool Szabaly(int m,int sz,Elem* snake,Elem* akadaly,Elem* kaja,Tarsoly* tarsoly){


if(snake->x==kaja->x && snake->y==kaja->y){
pont++;
kaja->x=rand()%sz;
kaja->y=rand()%m;
}
if(snake->x==0) return true;
if(snake->x==sz-1) return true;
if(snake->y==-1) return true;
if(snake->y==m) return true;
if(snake->x==akadaly->x && snake->y==akadaly->y) return true;
}

Tarsoly* Tarsolybeill(Elem* snake,Tarsoly* tarsoly,Elem* kaja){
int xelozo;
xelozo=snake->x;
int yelozo;
yelozo=snake->y;
int i;
int ykov,xkov;
for(i=0;i<=tarsoly->hossz;++i ){
xkov=tarsoly->test[i]->x;
ykov=tarsoly->test[i]->y;
tarsoly->test[i]->x=xelozo;
tarsoly->test[i]->y=yelozo;
xelozo=xkov;
yelozo=ykov;
}
if(snake->x==kaja->x && snake->y==kaja->y){
tarsoly->hossz++;
}
return tarsoly;
}



