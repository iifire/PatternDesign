//
// Created by kate on 2020/4/14.
//

#ifndef SIMPLE_MINUSCOSTCOMMAND_H
#define SIMPLE_MINUSCOSTCOMMAND_H

#include "Command.h"

class MinusCostCommand : public Command {
public:
    MinusCostCommand(Receiver * r) : Command(r) {}
    void Action() {
        receiver->cost -= 25;
    }
};


#endif //SIMPLE_MINUSCOSTCOMMAND_H
