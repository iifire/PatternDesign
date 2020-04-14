//
// Created by kate on 2020/4/14.
//

#ifndef SIMPLE_WOMAN_H
#define SIMPLE_WOMAN_H

#include "Person.h"

class Woman : public Person{
public:
    Woman() {
        tag = "Woman";
    }
    int SpendMoney() {
        return cost;
    }

    std::string GetTag()  {
        return "hello, i m a " + tag + "->";
    }

    void SetCost(int c) {
        cost = c;
    }
};


#endif //SIMPLE_WOMAN_H
