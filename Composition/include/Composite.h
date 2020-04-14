//
// Created by kate on 2020/4/14.
//

#ifndef SIMPLE_COMPOSITE_H
#define SIMPLE_COMPOSITE_H

#include "Person.h"
#include <vector>

class Composite : public Person {
public:
    Composite(std::string n, std::string t) : Person(n,t) {}
    std::vector<Person *> children;
    void Add(Person *p) {children.push_back(p);}
    void Display() {
        Show();
        if (children.size() != 0) {
            std::cout << "my fellows : " << std::endl;
        }
        for (auto const& mem : children) {
            mem->Display();
        }
    }

};


#endif //SIMPLE_COMPOSITE_H
