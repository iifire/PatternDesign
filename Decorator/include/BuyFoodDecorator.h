//
// Created by kate on 2020/4/14.
//

#ifndef SIMPLE_BUYFOODDECORATOR_H
#define SIMPLE_BUYFOODDECORATOR_H

#include "Decorator.h"

class BuyFoodDecorator : public Decorator{
    int money = 10;
public:
    BuyFoodDecorator(Person * ps): Decorator(ps){}
    std::string GetTag() {
        return p->GetTag();
    }
    int SpendMoney() {
        cost = p->SpendMoney() + money;
        std::cout << p->GetTag() << " BuyFood , total cost " << cost << std::endl;
        SetCost(cost);
        return cost;
    }
    void SetCost(int c) {
        p->SetCost(c);
    }
};


#endif //SIMPLE_BUYFOODDECORATOR_H
