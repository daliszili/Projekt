#include <stdio.h>
#include <stdlib.h>
#include "jatek.c"
#include<time.h>
#include <conio.h>
#include <stdbool.h>
#include <Windows.h>

int main()
{
    Jatekleiras();
    //palya magassaganak es szelessegenek ertekei
    int m=15,sz=30;

    //olyan ertek, amelynek beolvasasaval indithatjuk a jatekot
    int kezd;
    printf("\n\n        Szeretnel segiteni Janinak ?    (ha igen akkor nyomj 1-est, ha nem akkor meg 0-ast)\n");
    scanf("%i",&kezd);
    //ha a beolvasott ertek 0, akkor mar is vege jateknak
    if(kezd==0){
    system("CLS");
    printf("\n\n\n           Jani finom almait elloptak penzes baratai :(\n\n\n");
    return 0;
    }

// jatek tobbszoros meghivasanak lehetosege, annak aki ujra szeretne jatszani
            while(kezd!=0){
    switch (kezd) {
case 1:    srand ( time(NULL) );
    bool GameOver=false;
    pont=0;

    //kulonbozo elemek inicializalasa es koordinatak megadasa
    Elem* Jani;
    Elem* akadaly;
    Elem* akadaly1;
    Elem* akadaly2;
    Elem* Alma;
    Jani=Create(5,5);
    akadaly=Create((rand()%28)+1,(rand()%14)+1);
    akadaly1=Create((rand()%28)+1,(rand()%14)+1);
    akadaly2=Create((rand()%28)+1,(rand()%14)+1);
    Alma=Create((rand()%28)+1,(rand()%14)+1);
    system("cls");

    // jatek inditasa, egyre nehebb szinteken
    Szint( m, sz, Jani, akadaly, Alma, akadaly1, akadaly2, GameOver);
    kezd=0;
    break;
//mas billentyuzet leuteset jelezni fogja
default:
printf("\nHibas parancs!");
kezd=0;
break;
}

printf("\nSzeretnel meg jatszani?:\n\t0 Nem \n\t1 Igen\n");
scanf("%i", &kezd);
system("CLS");
                        }
    return 0;
}
