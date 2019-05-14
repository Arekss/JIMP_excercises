//
// Created by Arek on 22.11.2018.
//
#include <iostream>
#include "array2D.h"
#include"../polybius/polybius.h"
using namespace std;

int main()
{
    print_text();
    cout << "Podaj wymiary tablicy[][]"<<endl;
    int x,y;
    cin >> x >> y;
    int**W=Array2D(x,y);
   // fill(W,x,y);
    PrintArr(W,x,y);
    DeleteArray2D(W,x,y);
    return 0;
}
/* Następnie napisz program który będzie pobierał od użytkownika wymiary
 * tablicy i dynamicznie alokował pamięć dla niej. Napisz
 * funkcję która będzie uzupełniała tablicę kolejnymi liczbami całkowitymi (tak jak na rysunku)
 * i osobną funkcję do wyświetlania tablicy. Czy można do tego wykorzystać funkcje napisane
 * na poprzednich laboratoriach nie modyfikując ich? Pamiętaj o poprawnym zwolnieniu*/