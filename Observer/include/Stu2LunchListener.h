//
// Created by kate on 2020/4/12.
//

#ifndef SIMPLE_OBSERVER1_H
#define SIMPLE_OBSERVER1_H

#include <iostream>
#include "Student.h"
#include "Subject.h"
#include "Listener.h"

class Stu2LunchListener : public Student, public Listener{

public:
    void PublishInfo(std::string info) {
        std::cout << "Student 2 " << info << std::endl;
    }
};


#endif //SIMPLE_OBSERVER1_H
