//
// Created by kate on 2020/4/14.
//

#ifndef SIMPLE_BUYCLOTHESDECORATOR_H
#define SIMPLE_BUYCLOTHESDECORATOR_H

#include "Decorator.h"

class BuyClothesDecorator : public Decorator{
    int money = 100;
public:
    BuyClothesDecorator(Person * ps) : Decorator(ps){}
    std::string GetTag() {
        return p->GetTag();
    }
    int SpendMoney() {
        cost = p->SpendMoney() + money;
        std::cout << p->GetTag()<< " BuyClothes, total cost " << cost << std::endl;
        SetCost(cost);
        return cost;
    }
    void SetCost(int c) {
        p->SetCost(c);
    }

};


#endif //SIMPLE_BUYCLOTHESDECORATOR_H
