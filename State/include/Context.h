//
// Created by kate on 2020/4/14.
//

#ifndef SIMPLE_CONTEXT_H
#define SIMPLE_CONTEXT_H

#include "StateEnum.h"
#include "StateA.h"
#include "StateB.h"
#include "StateC.h"

class Context {
private:
    std::unordered_map<int, State *> state_map;
public:
    int a = 1;
    Context() {
        state_map.insert(std::make_pair((int)StateEnum::STATE_A, new StateA()));
        state_map.insert(std::make_pair((int)StateEnum::STATE_B, new StateB()));
        state_map.insert(std::make_pair((int)StateEnum::STATE_C, new StateC()));
    }

    void Run() {
        StateEnum cur_state = StateEnum::STATE_A;
        state_map.at((int)cur_state)->Execute(a, state_map, cur_state);
    }

    ~Context(){
        for(auto &mem : state_map){
            delete mem.second;
        }

    }
};


#endif //SIMPLE_CONTEXT_H
