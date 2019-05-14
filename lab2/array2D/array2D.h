//
// Created by Arek on 22.11.2018.
//

#ifndef JIMP_EXERCISES_ARRAY2D_H
#define JIMP_EXERCISES_ARRAY2D_H

#include <iostream>
int **NewArray2D(int n_rows, int n_columns);
int **Array2D(int n_rows, int n_columns);
class array2D
{

};
void FillArray2D(int **arr, int n_rows, int n_cols);

//template <class A>
void DeleteArray2D(int **array, int n_rows, int n_columns);

template <class TypeOfArrElement>
void PrintArr(TypeOfArrElement** arr,int x,int y)
{
    for (int j=0;j<x;j++) {
        for (int i = 0; i <y; i++) {
            std::cout<<arr[j][i]<<", ";
        }
        std::cout<<std::endl;
    }
}

char** Array2DD(int n_rows, int n_cols);
#endif //JIMP_EXERCISES_ARRAY2D_H
