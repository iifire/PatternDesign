//
// Created by kate on 2020/4/14.
//

#ifndef SIMPLE_GROUPB_H
#define SIMPLE_GROUPB_H

#include "Receiver.h"

class GroupB : public Receiver{
public:
    void ShowCost() {
        std::cout << "GroupB " << cost << std::endl;
    }
};


#endif //SIMPLE_GROUPB_H
