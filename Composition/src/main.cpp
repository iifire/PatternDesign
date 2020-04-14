#include <iostream>
#include "Composite.h"


int main() {
    Person * p1 = new Composite("p1","w");
    Person * p2 = new Composite("p2","n");
    Person * p3 = new Composite("p3","h");
    Person * p4 = new Composite("p4","n");
    Person * p5 = new Composite("p5","h");
    Person * p6 = new Composite("p6","n");

    p1->Add(p2);
    p1->Add(p4);
    p1->Add(p6);
    p4->Add(p3);
    p4->Add(p5);

    p1->Display();

    return 0;
}
