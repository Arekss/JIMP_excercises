//
// Created by Arek on 23.11.2018.
//

#include "DoubleBasePalindromes.h"
#include <string>

using namespace std;
uint64_t DoubleBasePalindromes(int max_vaule_exculsive)
{
    if (max_vaule_exculsive<0) return 0;
    uint64_t x = 0;
    string decimal,binary;
    for (uint64_t i=0;i<max_vaule_exculsive;i++) {
        decimal = to_string(i);
        binary = toBinary(i);
        if (is_palindrome(decimal)&&is_palindrome(binary)) x+=i;
    }
    return x;
}

/*string reverse(string str)
{
    const char *characters = str.c_str();
    size_t size = str.size();
    //  const char* p= characters+size;
    string reversed_characters;
    for (int i=size-1;i>=0;i--)
    {
        reversed_characters+=*(characters+i);
    }
    return string(reversed_characters);

}
*/
/*bool is_palindrome(std::string str)
{
    std::string x=reverse(str);
    if (str==x) return true;
    else return false;
}*/

string toBinary(uint64_t n)
{
    string r;
    while(n!=0) {r+=(n%2==0 ?"0":"1"); n/=2;}
    return r;
}

