//
// Created by Arek on 23/11/2018.
//
#include "palindrome.h"
#include <iostream>
#include "../reversestring/ReverseString.h"
using std::cout;
using std::endl;
using std::cin;
int main()
{
    int x,p=1;
    std::string word;
    while (p!=2) {
        menu();
        cin >> x;
        switch (x) {
            case 1:
                cout << "wprowadz potencjalny palindrom"<<endl;
                cin >> word;
                switch (is_palindrome(word)) {
                    case true: {
                        cout << "TAK TO PALINDROM" << endl;
                        break;
                    }
                    case false: {
                        cout << "TO NIE PALINDROM" << endl;
                        break;
                    }
                    default:
                        break;
                }
                break;
            case 2:
                cout << "do widzenia";
                p=2;
                break;
            default:
                cout << "WCISNIJ 1 LUB 2" << endl;
                break;
        }
    }
    return 0;
}
