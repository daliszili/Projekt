#include <stdio.h>
#include <stdlib.h>
#include "jatek.c"
#include<time.h>
#include <conio.h>
#include <stdbool.h>
#include <Windows.h>

int main()
{

    srand ( time(NULL) );
    bool GameOver=false;
    Elem* snake;
    Elem* akadaly;
    Elem* kaja;
    Tarsoly* tarsoly;
    snake=Create(5,5);
    tarsoly=Createtarsoly(1);
    int m=15,sz=45;
    akadaly=Create(rand()%sz,rand()%m);
    kaja=Create(rand()%sz,rand()%m);

    if(kaja->x==0 || kaja->x==sz-1 || kaja->y==0 ||kaja->y==m || kaja->x==kaja->x || kaja->x==snake->x || kaja->x==snake->x || akadaly->y==kaja->y || akadaly->y==snake->y || kaja->y==snake->y){
        while(!(kaja->x==0 || kaja->x==sz-1 || kaja->y==0 || kaja->y==m || kaja->x==kaja->x || akadaly->x==kaja->x || akadaly->x==snake->x || kaja->x==snake->x || akadaly->y==kaja->y || akadaly->y==snake->y || kaja->y==snake->y))
   {akadaly=Create(rand()%sz,rand()%m);
    kaja=Create(rand()%sz,rand()%m);
    }}
    while(!GameOver){
               Iranyitas( m, sz, snake, akadaly, kaja,tarsoly);
        DrawFrame( m, sz,snake,akadaly,kaja,tarsoly);
      GameOver=Szabaly(m, sz, snake, akadaly, kaja,tarsoly);
// tarsoly=Tarsolybeill( snake, tarsoly, kaja);

  // Sleep(50);

}
    return 0;
}
