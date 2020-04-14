//
// Created by kate on 2020/4/14.
//

#ifndef SIMPLE_STATE_H
#define SIMPLE_STATE_H

#include <unistd.h>
#include <exception>
#include <unordered_map>

#include "StateEnum.h"

class State {
protected:
    StateEnum st;
public:
    virtual void Execute(int & a,
            std::unordered_map<int, State *> const & mp,
            StateEnum & cur_state) = 0;
};


#endif //SIMPLE_STATE_H
