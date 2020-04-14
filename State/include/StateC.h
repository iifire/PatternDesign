//
// Created by kate on 2020/4/14.
//

#ifndef SIMPLE_STATEC_H
#define SIMPLE_STATEC_H

#include "State.h"

class StateC : public State{
public:
    StateC(){
        st = StateEnum::STATE_C;
    }
    void Execute(int & a,
                 std::unordered_map<int, State *> const & mp,
                 StateEnum & cur_state) {
        if (cur_state == st) {
            a /= 10;
            std::cout << "state"<< (int)st << " " << a << std::endl;
            sleep(1);
            cur_state = StateEnum::STATE_A;
            mp.at((int)cur_state)->Execute(a, mp, cur_state);
        } else {
            throw std::invalid_argument("Not status C");
        }
    }
};


#endif //SIMPLE_STATEC_H
