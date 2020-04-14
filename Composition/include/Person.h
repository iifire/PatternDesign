//
// Created by kate on 2020/4/14.
//

#ifndef SIMPLE_PERSON_H
#define SIMPLE_PERSON_H

#include <string>

class Person {
public:
    std::string name;
    std::string tag;
    Person(std::string n, std::string t): name{n}, tag{t} {}
    void Show() {
        std::cout << "I am " << name << ", my tag: " << tag << std::endl;
    }
    virtual void Add(Person *p) = 0;
    virtual void Display() = 0;
};


#endif //SIMPLE_PERSON_H
