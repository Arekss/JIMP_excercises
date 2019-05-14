//
// Created by Arek on 22.11.2018.
//

#include <string>
#include "ReverseString.h"

std::string reverse(std::string str)
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

}