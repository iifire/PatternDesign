//
// Created by kate on 2020/4/14.
//

#ifndef SIMPLE_DECORATOR_H
#define SIMPLE_DECORATOR_H

#include "Person.h"

class Decorator : public Person {
protected:
    Person * p;
public:
    Decorator(Person * ps) : p{ps}{}
    virtual int SpendMoney() = 0;
    virtual std::string GetTag() = 0;
    virtual void SetCost(int c) = 0;

};


#endif //SIMPLE_DECORATOR_H
