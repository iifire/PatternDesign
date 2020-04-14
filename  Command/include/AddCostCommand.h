//
// Created by kate on 2020/4/14.
//

#ifndef SIMPLE_ADDCOSTCOMMAND_H
#define SIMPLE_ADDCOSTCOMMAND_H

#include "Command.h"

class AddCostCommand : public Command{
public:
    AddCostCommand(Receiver * r) : Command(r) {}
    void Action() {
        receiver->cost += 100;
    }
};


#endif //SIMPLE_ADDCOSTCOMMAND_H
