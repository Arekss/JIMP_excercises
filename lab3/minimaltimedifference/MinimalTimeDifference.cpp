//
// Created by Arek on 13.04.2019.
//

#include "MinimalTimeDifference.h"
#include <algorithm>
#include <iostream>
#include <regex>

using namespace std;
namespace minimaltimedifference {
    unsigned int ToMinutes(std::string time_HH_MM) {
        vector<string> vec;
        smatch wynik;
        regex wzorzec("\\d\\d|\\d");
        auto searchStart(time_HH_MM.cbegin());
        while (regex_search(searchStart, time_HH_MM.cend(), wynik, wzorzec)) {
            cout << wynik[0] << endl;
            vec.emplace_back(wynik[0]);
            searchStart = wynik.suffix().first;
        }
        auto a = static_cast<unsigned int>(stoi(vec[0])) * 60;
        auto b = static_cast<unsigned int>(stoi(vec[1]));

        return a + b;
    }

    unsigned int MinimalTimeDifference(std::vector<std::string> times) {

        unsigned int result = 1440;
        vector<unsigned int> vec(0, 9);
//vec.push_back(ToMinutes(times[p]));
         for_each(times.begin(), times.end(), [&](const string& name){
             vec.push_back(ToMinutes(name));
         });

     /*   for (auto &it:times) {
            vec.push_back(ToMinutes(it));
        } */

        for (auto i = 0; i < vec.size(); ++i) {
            for (int j = i + 1; j < vec.size(); j++) {

                int a = vec[i] - vec[j];
                int b = (vec[i] + vec[j]+2)%(60*24);
                a < 0 ? a = (-a) : a = a;
                if (a < result) result = a;
                if (b < result) result = b;


            }
        }
        cout<<endl;

        return result;
    }
}
