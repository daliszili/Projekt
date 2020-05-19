#ifndef JATEK_H_INCLUDED
#define JATEK_H_INCLUDED
#include <stdio.h>
#include <stdbool.h>

//Olyan  tipusok deklaralasa amelyek 2 koordinataval rendelkeznek
typedef struct Elem{
    int x;
    int y;

}Elem;
//elem letrehozasa
Elem* Create(int x,int y);

//Jatek szabalyai es menete mielott elkezdenenk azt
void Jatekleiras();

//kolunbozo szintek felepitese es jatekmenet magalkotasa
void Szint(int m,int sz,Elem* Jani,Elem* akadaly,Elem* Alma,Elem* akadaly1,Elem* akadaly2,bool GameOver);

//palya megrajzolasa  kulonbozo szinteken, egyre tobb akadallyal
void Palya1(int m,int sz,Elem* Jani,Elem* akadaly,Elem* Alma);
void Palya2(int m,int sz,Elem* Jani,Elem* akadaly,Elem* Alma,Elem* akadaly1);
void Palya3(int m,int sz,Elem* Jani,Elem* akadaly,Elem* Alma,Elem* akadaly1,Elem* akadaly2);

//jatekos iranyitasa a kulonbozo helyzetekben
void Iranyitas1(int m,int sz,Elem* Jani,Elem* akadaly,Elem* Alma);
void Iranyitas2(int m,int sz,Elem* Jani,Elem* akadaly,Elem* Alma,Elem* akadaly1);
void Iranyitas3(int m,int sz,Elem* Jani,Elem* akadaly,Elem* Alma,Elem* akadaly1,Elem* akadaly2);

//Jatek szabalya, vagyis mikor er veget a jatek a kulonbozo szinteken
bool Szabaly1(int m,int sz,Elem* Jani,Elem* akadaly,Elem* Alma);
bool Szabaly2(int m,int sz,Elem* Jani,Elem* akadaly,Elem* Alma,Elem* akadaly1);
bool Szabaly3(int m,int sz,Elem* Jani,Elem* akadaly,Elem* Alma,Elem* akadaly1,Elem* akadaly2);
#endif // JATEK_H_INCLUDED
