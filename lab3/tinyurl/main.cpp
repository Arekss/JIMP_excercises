//
// Created by Arek on 14.01.2019.
//

#include <iostream>
#include <array>
#include <vector>
#include <iterator>
#include <algorithm>
#include <memory>
#include "TinyUrl.h"
#include <string>

using std::cout;
using std::endl;

int main() {
    auto p = tinyurl::Init();

    std::vector<std::string> URLS =
            {"https://google.com", "https://wikipedia.org", "https://regex101.com/",
             "http://www.regular-expressions.info/recurse.html#balanced", "https://xkcd.com/1755/",
             "https://xkcd.com/1758/",
             "https://xkcd.com/1775/", "http://stackoverflow.com/questions/29397066/c-regexp-to-parsing-nested-struct",
             "http://www.regular-expressions.info/boost.html",
             "https://phys.org/news/2016-09-discovery-quasars-ancient-universe.html",
             "https://phys.org/news/2017-03-discovery-bevy-quasars-boost-efforts.html",
             "https://www.youtube.com/watch?v=FkCT_LV9Syk",
             "http://ai.ia.agh.edu.pl/wiki/pl:dydaktyka:jimp2:2017:labs:pamiec2",
             "https://leetcode.com/problemset/algorithms/#", "https://en.wikipedia.org/wiki/List_of_Unicode_characters",
             "http://unicode.org/reports/tr15/", "https://reviewable.io/", "https://github.com/integrations",
             "https://github.com/integrations/travis-ci", "https://github.com/integrations/sonarqube",
             "http://www.talkenglish.com/vocabulary/top-2000-vocabulary.aspx", "https://www.topcoder.com",
             "https://pl.wikipedia.org/wiki/Filtr_Kalmana", "https://www.youtube.com/watch?v=2pzxEmh0gYw",
             "http://geofl.ge/#!/page_saxelmdzvanelo", "https://www.youtube.com/watch?v=K83YZYcpExc",
             "https://www.memrise.com/", "https://www.duolingo.com/"
            };
    for (auto &iterator : URLS) {
        tinyurl::Encode(iterator, &p);
    }

    for (auto& iterator : p->code2url) {
        cout << iterator.first << " maps to " << iterator.second << endl;
    }

    cout << sizeof(*p);
}