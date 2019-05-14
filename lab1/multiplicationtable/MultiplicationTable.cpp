//
// Created by Arek on 23.11.2018.
//

#include <iostream>
#include "MultiplicationTable.h"

void MultiplicationTable(int tab[][10])
{
    for(int i=0;i<10;i++)
    {
        for (int j = 0; j < 10; j++)
        {
            tab[i][j] = (i + 1) * (j + 1);
        }
    }
    print_2d_arr(tab);
}
void print_2d_arr(int tab[][10]) {
    for (int i = 0; i < 10; i++) {
        std::cout << "{";
        for (int j = 0; j < 10; j++) std::cout << tab[i][j] << ",";
        std::cout << "}" << std::endl;
    }
}
