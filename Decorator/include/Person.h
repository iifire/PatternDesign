//
// Created by kate on 2020/4/14.
//

#ifndef SIMPLE_PERSON_H
#define SIMPLE_PERSON_H

#include <string>
#include <iostream>

class Person {
public:
    virtual int SpendMoney() = 0;
    int cost = 0;
    std::string tag;
    virtual std::string GetTag()  = 0;
    virtual void SetCost(int c)  = 0;

};


#endif //SIMPLE_PERSON_H
