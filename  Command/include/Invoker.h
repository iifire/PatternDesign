//
// Created by kate on 2020/4/14.
//

#ifndef SIMPLE_INVOKER_H
#define SIMPLE_INVOKER_H

#include "Command.h"
#include <vector>

class Invoker {
public:
    std::vector<Command *> vec;
    void AddCommand(Command * b) { vec.push_back(b);}
    void Action() {
        for (auto const& mem : vec) {
            mem->Action();
        }
    }
};


#endif //SIMPLE_INVOKER_H
