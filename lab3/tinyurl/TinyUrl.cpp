//
// Created by Arek on 14.01.2019.
//
#include <utility>
#include <string>
#include <array>
#include <memory>
#include <iostream>
#include <iterator>
#include "TinyUrl.h"

namespace tinyurl {
    std::unique_ptr<TinyUrlCodec> Init() {
        std::unique_ptr<TinyUrlCodec> p(std::make_unique<TinyUrlCodec>());
       return p;
    };

    void NextHash(std::array<char, 6> *state) {
        int k = 0;
        for (auto i = 5; i >= 0; i--) {
            if ((*state)[i] != 'z') break;
            k++;
        }
        int l = 5;
        while (k != 0) {
            (*state)[l--] = '0';
            k--;
        }
        if ((*state)[l] == 'Z') (*state)[l] = 'a';
        else if ((*state)[l] == '9') (*state)[l] = 'A';
        else (*state)[l]++;
    }


    std::string Encode(const std::string &url, std::unique_ptr<TinyUrlCodec> *codec) {
       // NextHash(&(*codec)->state);
       auto p = (*codec)->state;
        std::string str(std::begin(p), std::end(p));
        (*codec)->code2url[str]=url;
        NextHash(&(*codec)->state);
        return str;
    };

    std::string Decode(const std::unique_ptr<TinyUrlCodec> &codec, const std::string &hash) {
        return codec->code2url[hash];
    };


    TinyUrlCodec::TinyUrlCodec() {
        state.fill('0');
    }
};
