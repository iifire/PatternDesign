//
// Created by kate on 2020/4/12.
//

#ifndef SIMPLE_SON_H
#define SIMPLE_SON_H

#include "Father.h"
#include "SonParam.h"

class Son : public Father {
public:

    void Speak(FatherParam *fa) {
        std::cout << fa->name << "--" << "[Son]" << std::endl;
    }
};


#endif //SIMPLE_SON_H
