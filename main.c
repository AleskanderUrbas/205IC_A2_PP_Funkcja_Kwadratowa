#include <stdio.h>
#include <stdlib.h>

struct punkt{
    int x, y;
};

struct FunkcjaKwadratowa{
    int a, b, c; /* wspolczyniki postaci ogolnej funkcji kwadratowej*/
    int delta; /* delta funkcji kwadratowej */
    float x1, x2; /* miejsca zerowe */
    struct punkt wierzcholek; /* wierzcholek funkcji kwadratowej - punkt*/
};

struct FunkcjaKwadratowa* WczytajParametry(void);

/*
* f(x) = ax^2 + bx + c
* delta = xxx
* Miejsca zerowe = x1; x2 / Miejsce zerowe = x0 / Brak miejsc zerowych
* Wierzcholek = (p; q)
*/

int main() {

   /* struct FunkcjaKwadratowa BadanaFunkcja;*/

    struct FunkcjaKwadratowa* BadanaFunkcja = WczytajParametry();
  /*
    
    ObliczDelte()
    ObliczMiejscaZerowe()
    ObliczWierzcholek()
    WypiszWyniki()
    */

    return 0;
}

struct FunkcjaKwadratowa* WczytajParametry(void){
    struct FunkcjaKwadratowa* BadanaFunkcja = (struct FunkcjaKwadratowa*) malloc(sizeof(struct FunkcjaKwadratowa));
    scanf ("%i %i %i", &(BadanaFunkcja -> a), &(BadanaFunkcja -> b), &(BadanaFunkcja -> c) );
    return BadanaFunkcja;
}


