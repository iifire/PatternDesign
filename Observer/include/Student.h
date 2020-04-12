//
// Created by kate on 2020/4/12.
//

#ifndef SIMPLE_OBSERVER_H
#define SIMPLE_OBSERVER_H


class Student {
public:
    virtual void PublishInfo(std::string info) = 0;
};


#endif //SIMPLE_OBSERVER_H
