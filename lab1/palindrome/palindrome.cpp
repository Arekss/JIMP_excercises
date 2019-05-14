//
// Created by Arek on 23.11.2018.
//
#include <string>
#include <iostream>
#include "palindrome.h"
#include "../reversestring/ReverseString.h"

using std::cout;
using std::endl;
/*std::string reverse(std::string str)
{
    const char *characters = str.c_str();
    size_t size = str.size();
    //  const char* p= characters+size;
    std::string reversed_characters;
    for (int i=size-1;i>=0;i--)
    {
        reversed_characters+=*(characters+i);
    }
    return std::string(reversed_characters);

}*/

bool is_palindrome(std::string str)
{
    std::string x=reverse(str);
            if (str==x) return true;
            else return false;
}

void menu()
{
    cout<<"WCISNIJ 1 ABY SPRAWDZIC PALINDROM"<<endl;
    cout<<"WCISNIJ 2 ABY ZAKONCZYC"<<endl;
}
