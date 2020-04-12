//
// Created by kate on 2020/4/12.
//

#ifndef SIMPLE_OBSERVER2_H
#define SIMPLE_OBSERVER2_H

#include <iostream>
#include "Student.h"
#include "Subject.h"
#include "Listener.h"

class Stu1TeacherListener : public Student, public Listener{
public:
    void PublishInfo(std::string info) {
        std::cout << "Student 1 " << info << std::endl;
    }
};


#endif //SIMPLE_OBSERVER2_H
