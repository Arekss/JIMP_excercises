//
// Created by mwypych on 02.02.17.
//
#include <climits>
#include <math.h>
#include "Factorial.h"

int factorial(int value) {
unsigned long long tab[20];
int i;
for (i = 0; i < 19; i++) {
    tab[i] = factoriall(i);
    if (tab[i] > INT_MAX/2)
    {
        tab[i] = 0;
        break;
    }
}
for (; i < 19; i++) {
    tab[i] = 0;
}
tab[0]=1;

if (value > 19 || value < -19) return (int) 0;
else if (value<0) return(pow(-1,-value)*tab[-value]);
else return (int)tab[value];
}





int factoriall(int value) {

if (value==0) return 1;
else return value*factoriall(value-1);
}
