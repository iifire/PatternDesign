//
// Created by kate on 2020/4/14.
//

#ifndef SIMPLE_COMMAD_H
#define SIMPLE_COMMAD_H

#include "Receiver.h"

class Command {
protected:
    Receiver * receiver;
public:
    Command(Receiver * r) : receiver{r} {}
    virtual void Action() = 0;
};


#endif //SIMPLE_COMMAD_H
