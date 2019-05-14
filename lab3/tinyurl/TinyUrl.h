//
// Created by Arek on 14.01.2019.
//

#ifndef JIMP_EXERCISES_TINYURL_H
#define JIMP_EXERCISES_TINYURL_H

#include <utility>
#include <string>
#include <array>
#include <memory>
#include <iostream>
#include <map>

using std::cout;
using std::endl;
using std::string;



namespace tinyurl {

    struct TinyUrlCodec
    {
        TinyUrlCodec();
        std::array<char, 6> state;
        std::map<string, string> code2url;



    };

    void NextHash(std::array<char, 6> *state);

    std::unique_ptr<TinyUrlCodec> Init();


    std::string Encode(const std::string &url, std::unique_ptr<TinyUrlCodec> *codec);

    std::string Decode(const std::unique_ptr<TinyUrlCodec> &codec, const std::string &hash);
}












#endif //JIMP_EXERCISES_TINYURL_H
