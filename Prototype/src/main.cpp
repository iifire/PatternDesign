#include "SomeClass.h"
#include <iostream>


int main() {
    SomeClass ob1(new A("haha"));
    std::cout << ob1.a->info << std::endl;
    auto ob2{ob1.Clone()};
    std::cout << ob2->a->info << std::endl;
    ob1.a->info = "heihei";
    std::cout << ob2->a->info << std::endl;
    delete ob2;
    return 0;
}
