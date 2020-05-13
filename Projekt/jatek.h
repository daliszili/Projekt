#ifndef JATEK_H_INCLUDED
#define JATEK_H_INCLUDED
#include <stdio.h>
#include <stdbool.h>



typedef struct Elem{
    int x;
    int y;

}Elem;
typedef struct Tarsoly{
    Elem** test;
    int hossz;
}Tarsoly;

Elem* Create(int x,int y);
Tarsoly* Createtarsoly(int hossz);
void DrawFrame(int m,int sz,Elem* snake,Elem* akadaly,Elem* kaja,Tarsoly* tarsoly);
void Iranyitas(int m,int sz,Elem* snake,Elem* akadaly,Elem* kaja,Tarsoly* tarsoly);
Tarsoly* Tarsolybeill(Elem* snake,Tarsoly* tarsoly,Elem* kaja);
bool Szabaly(int m,int sz,Elem* snake,Elem* akadaly,Elem* kaja,Tarsoly* tarsoly);
#endif // JATEK_H_INCLUDED
