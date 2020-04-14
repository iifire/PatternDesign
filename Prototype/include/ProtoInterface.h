//
// Created by kate on 2020/4/13.
//

#ifndef SIMPLE_PROTOINTERFACE_H
#define SIMPLE_PROTOINTERFACE_H

#include <iostream>
#include "A.h"

class ProtoInterface {
public:
    ProtoInterface(A * ptr) : a{ptr} {}
    virtual ProtoInterface * Clone() = 0;
    virtual ~ProtoInterface() {
        std::cout << "ProtoInterface is called" << std::endl;
        delete a;
    }
    A * a;
protected:
    ProtoInterface(ProtoInterface const& ob) = default;
};


#endif //SIMPLE_PROTOINTERFACE_H
