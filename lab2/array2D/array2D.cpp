//
// Created by Arek on 22.11.2018.
//

#include "array2D.h"
#include <iostream>

char** Array2DD(int n_rows, int n_cols) {

    if (n_rows<=0||n_cols<=0) return nullptr;

        char **arr = new char*[n_rows];
        for (int i=0; i < n_rows; i++) {
            arr[i] = new char[n_cols];
        }
        //FillArray2D(arr, n_rows, n_columns);
        return arr;
}
int **NewArray2D(int n_rows, int n_columns) {
    if (n_rows<=0||n_columns<=0) return nullptr;
    int **arr = new int *[n_rows];
    for (int i=0; i < n_rows; i++) {
        arr[i] = new int[n_columns];
    }
    FillArray2D(arr, n_rows, n_columns);
    return arr;
}

int **Array2D(int n_rows, int n_columns) {
    if (n_rows<=0||n_columns<=0) return nullptr;

    int **arr = NewArray2D(n_rows, n_columns);

    return arr;
}

//template <class A>
    void DeleteArray2D(int **array, int n_rows, int n_columns){
    for (int i=0;i<n_rows;i++) {
        delete[] array[i];
    }
    delete[] array;
}

void FillArray2D(int **arr, int n_rows, int n_cols)
{
    int k=0;
    for (int i=0;i<n_rows;i++) {
        for (int j = 0; j < n_cols; j++) {
            arr[i][j] = ++k;
        }
    }
}
//template <class TypeOfArrElement>
/*void PrintArr(TypeOfArrElement** arr,int x,int y)
{
    for (int j=0;j<x;j++) {
        for (int i = 0; i <y; i++) {
            std::cout<<arr[j][i]<<", ";
        }
        std::cout<<std::endl;
    }
}*/
