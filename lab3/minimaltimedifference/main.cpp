//
// Created by Arek on 13.04.2019.
//
#include "MinimalTimeDifference.h"
#include <iostream>
using namespace std;
int main()
{
    cout<<endl;
    vector<string> vec{"01:00", "23:59", "17:56", "14:13", "15:40"};
    cout<<endl;

    cout<<endl;

    cout<< minimaltimedifference::MinimalTimeDifference(vec);

        return 0;
}