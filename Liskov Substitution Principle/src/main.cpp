#include "SonParam.h"
#include "Son.h"
#include "FatherParam.h"


int main() {
    SonParam *p = new SonParam();
    Father * ptr = new Son();
    ptr->Speak(p);
    std::cout << p->name << std::endl;
    return 0;
}
