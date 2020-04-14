#include <iostream>
#include "Woman.h"
#include "BuyClothesDecorator.h"
#include "BuyFoodDecorator.h"

int main() {
    Person *p = new Woman();
    Decorator * d1 = new BuyFoodDecorator(p);
    Decorator * d2 = new BuyClothesDecorator(d1);
    d2->SpendMoney();
    std::cout << p->cost << std::endl;
    return 0;
}
