//
// Created by kate on 2020/4/13.
//

#ifndef SIMPLE_SOMECLASS_H
#define SIMPLE_SOMECLASS_H

#include "ProtoInterface.h"

class SomeClass : public ProtoInterface {
public:
    SomeClass(A * m): ProtoInterface(m) {}
    ProtoInterface * Clone() {
        return new SomeClass(*this);
    }
    ~SomeClass() {
        std::cout << "SomeClass is called" << std::endl;
    }

private:
    SomeClass(SomeClass const& ob) : ProtoInterface(ob) {
       a = new A(ob.a->info);
     //a->info = ob.a->info;
    }
};


#endif //SIMPLE_SOMECLASS_H
