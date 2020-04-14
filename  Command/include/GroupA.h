//
// Created by kate on 2020/4/14.
//

#ifndef SIMPLE_GROUPA_H
#define SIMPLE_GROUPA_H

#include "Receiver.h"

class GroupA : public Receiver {
public:
    void ShowCost() {
        std::cout << "GroupA " << cost << std::endl;
    }
};


#endif //SIMPLE_GROUPA_H
