//
// Created by kate on 2020/4/12.
//

#ifndef SIMPLE_FATHER_H
#define SIMPLE_FATHER_H

#include "SonParam.h"
#include <iostream>

class Father {
public:
    virtual void Speak(FatherParam * f) {
        std::cout << f->name << "--" << "[father]" << std::endl;
    }
};


#endif //SIMPLE_FATHER_H
