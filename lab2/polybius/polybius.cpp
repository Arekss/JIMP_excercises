//
// Created by Arek on 26.11.2018.
//

#include "polybius.h"
#include <fstream>
#include <string>
#include <map>
#include <iostream>
using std::map;
using std::cout;
using std::cin;
using std::string;
using std::endl;

void print_text()
{
    cout << "hahaha" << endl;
}

string PolybiusDecrypt(string crypted)
{
   // static bool e=false;
     map<int, char> P_ARR;
   // if (!e) {
        int k=0;
        for (int i = 0; i < 5; i++){
            for (int j = 0; j < 5; j++) {
                if ('a'+k=='j')
                {
                    k++;
                }
                P_ARR.emplace((i+1)*10+j+1,'a'+k++);
            }
        }
        //    e=true;
      //  }

    string str("");
    string temp;
    std::map<int,char>::iterator it;
    int b;
    for ( std::string::iterator kkk=crypted.begin(); kkk!=crypted.end();)
    {
        temp+=(*(kkk++));
        temp+=*(kkk++);
        b = std::stoi(temp);
       // cout << b<<std::endl;
        str += P_ARR.find(b)->second;
        temp="";
    }

   std::cout <<str<< '\n';


    //PrintMap(P_ARR);
    return str;
}



void PrintMap(const map<char,int> &v) {
    bool sssst = true;
    for(const auto &n : v) {
        if (!sssst) {
            cout<< ", ";
        } else {
            sssst = false;
        }
        cout << n.first << " -> " << n.second;

    }
    cout<<std::endl;
}