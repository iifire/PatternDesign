//
// Created by kate on 2020/4/14.
//

#ifndef SIMPLE_STATEB_H
#define SIMPLE_STATEB_H

#include "State.h"

class StateB : public State {
public:
    StateB(){
        st = StateEnum::STATE_B;
    }
    void Execute(int & a,
                 std::unordered_map<int, State *> const & mp,
                 StateEnum & cur_state) {
        if (cur_state == st) {
            while (a <= 40) {
                ++a;
                std::cout << "state"<< (int)st << " " << a << std::endl;
                sleep(1);
            }
            cur_state = StateEnum::STATE_C;
            mp.at((int)cur_state)->Execute(a, mp, cur_state);
        } else {
            throw std::invalid_argument("Not status B");
        }
    }
};


#endif //SIMPLE_STATEB_H
