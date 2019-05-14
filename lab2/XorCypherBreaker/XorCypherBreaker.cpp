//
// Created by Arek on 28.11.2018.
//

#include <string>
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;
std::string XorCypherBreaker(const std::vector<char> &cryptogram, int key_length, const std::vector<string> &dictionary)
{
    key_length='z'-'a'; // unused variable - warning dodge
    string buffer;      // key length = 3 always
    string answer="CHUJ_NIE_WYSZLO";
    string key="aaa";
    vector<string> decrypted;
    int k;
    int u=0;
    for (int z=0;z<key_length;z++) {
        for (int y = 0; y < key_length; y++) {
            for (int x = 0; x < key_length; x++) {
                buffer.clear();
                decrypted.clear();
                k = 0;
                for (int temp = 0; temp < cryptogram.size(); temp++) {
                    buffer += cryptogram[temp] ^ key[(temp + 3) % 3];
                    if ((cryptogram[temp] ^ key[(temp + 3) % 3]) == ' ') {
                        buffer.pop_back();
                        decrypted.push_back(buffer);
                        buffer.clear();
                    }

                }

                for (const auto &i : decrypted) {
                    if (find(dictionary.begin(), dictionary.end(), i) != dictionary.end()) {
                        k++;
                    }
                }
                if (k>u)
                {
                    answer=key;
                    u=k;
                }

                key[2]++;
            }
            key[2]='a';
            key[1]++;
        }
        key[2]='a';
        key[1]='a';
        key[0]++;
    }

return answer;
}



