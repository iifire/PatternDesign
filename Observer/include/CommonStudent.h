//
// Created by kate on 2020/4/12.
//

#ifndef SIMPLE_COMMONSTUDENT_H
#define SIMPLE_COMMONSTUDENT_H

#include "Student.h"

class CommonStudent : public Student {
public:
    void PublishInfo(std::string info) {
        std::cout << "Common student " << info << std::endl;
    }
};


#endif //SIMPLE_COMMONSTUDENT_H
