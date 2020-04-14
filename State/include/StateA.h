//
// Created by kate on 2020/4/14.
//

#ifndef SIMPLE_STATEA_H
#define SIMPLE_STATEA_H

#include "State.h"

class StateA : public State{
public:
    StateA(){
        st = StateEnum::STATE_A;
    }
    void Execute(int & a,
            std::unordered_map<int, State *> const & mp,
            StateEnum & cur_state) {
        if (cur_state == st) {
            if (a == 0) {throw std::invalid_argument("a cannot be 0");}
            while (a <= 16) {
                a *= 2;
                std::cout << "state"<< (int)st << " " << a << std::endl;
                sleep(1);
            }
            cur_state = StateEnum::STATE_B;
            mp.at((int)cur_state)->Execute(a, mp, cur_state);
        } else {
            throw std::invalid_argument("Not status A");
        }
    }
};


#endif //SIMPLE_STATEA_H
