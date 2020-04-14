#include <iostream>
#include "Invoker.h"
#include "AddCostCommand.h"
#include "MinusCostCommand.h"
#include "GroupA.h"
#include "GroupB.h"


int main() {
    Receiver * a = new GroupA();
    Receiver * b = new GroupB();
    Command * c1 = new AddCostCommand(a);
    Command * c2 = new AddCostCommand(b);
    Command * c3 = new MinusCostCommand(a);
    Invoker i;
    i.AddCommand(c1);
    i.AddCommand(c2);
    i.AddCommand(c3);
    i.Action();
    a->ShowCost();
    b->ShowCost();

    return 0;
}
