//
// Created by kate on 2020/4/12.
//

#ifndef SIMPLE_SUBJECT_H
#define SIMPLE_SUBJECT_H

#include <vector>
#include <string>
#include "Student.h"

class Subject {
public:
    virtual void Init() = 0;

    void SetInfo (std::string str) {info = str;}

    void AddStudent(Student * ptr) {students_vec.push_back(ptr);}

    void SetState(bool flag) {
        state = flag;
        if (state) {
            for(auto const& ptr : students_vec) {
                ptr->PublishInfo(info);
            }
        }
    }
private:
    std::vector<Student *> students_vec;
    bool state = false;
    std::string info = "";
};


#endif //SIMPLE_SUBJECT_H
