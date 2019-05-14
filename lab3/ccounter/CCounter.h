
#ifndef JIMP_EXERCISES_CCOUNTER_H
#define JIMP_EXERCISES_CCOUNTER_H

#include <string>
#include <memory>
#include <map>

using namespace std;

namespace ccounter {


    class Counter
    {
    public:
        map<string, int> M;
       //int count;
       // Counter(int k=0) : i(k){};

    };

    std::unique_ptr <Counter> Init(){
        unique_ptr<Counter> P = make_unique<Counter>();
        return P;
    };

    void Inc(std::string key, std::unique_ptr <Counter> *counter){
        auto b = (*counter)->M.emplace(key,1);
        if (!b.second) (*counter)->M[key]++;
    };

    int Counts(const std::unique_ptr <Counter> &counter, std::string key){

       auto it =  counter->M.find(key);
        if (it != counter->M.end())
        {
            return it->second;
        }
        else return 0;

    };

    void SetCountsTo(std::string key, int value, std::unique_ptr <Counter> *counter){
        auto iter =  (*counter)->M.find(key);
        if (iter != (*counter)->M.end())
        {
            iter->second=value;
        } else
        {
            (*counter)->M.emplace(key,value);
        }

    };

#endif //JIMP_EXERCISES_CCOUNTER_H
}