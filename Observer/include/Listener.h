//
// Created by kate on 2020/4/12.
//

#ifndef SIMPLE_LISTENER_H
#define SIMPLE_LISTENER_H

#include "Subject.h"
#include "Student.h"

class Listener {

public:
    void Init(Subject *sb) {
        subject = sb;
        subject->Init();
    }
    void AddOtherStudent(Student * stu) {
        subject->AddStudent(stu);
    }
    void EventHappens() {
        subject->SetState(true);
    }
private:
    Subject * subject;
};


#endif //SIMPLE_LISTENER_H
