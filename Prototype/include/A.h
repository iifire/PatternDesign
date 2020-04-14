//
// Created by kate on 2020/4/13.
//

#ifndef SIMPLE_A_H
#define SIMPLE_A_H

#include <string>

class A {
public:
    A(std::string str) : info{str} {}
    std::string info = "default";
};


#endif //SIMPLE_A_H
