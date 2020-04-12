
#include "Stu1TeacherListener.h"
#include "Stu2LunchListener.h"
#include "CommonStudent.h"
#include "LunchBegin.h"
#include "TeacherCome.h"

int main() {
    Student * stu1 = new Stu1TeacherListener();
    Student * stu2 = new Stu2LunchListener();
    Student * stu3 = new CommonStudent();
    auto lst1{dynamic_cast<Listener *>(stu1)};
    auto lst2{dynamic_cast<Listener *>(stu2)};
    lst1->Init(new TeacherCome());
    lst1->AddOtherStudent(stu1);
    lst1->AddOtherStudent(stu2);
    lst1->AddOtherStudent(stu3);
    lst2->Init(new LunchBegin());
    lst2->AddOtherStudent(stu1);
    lst2->AddOtherStudent(stu2);
    lst2->AddOtherStudent(stu3);
    lst1->EventHappens();
    lst2->EventHappens();

    return 0;
}
