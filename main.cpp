#include "Gun.h"
#include "Soldier.h"
#include <iostream>

void test() {
    Soldier soldier0("haz", std::make_shared<Gun>("AK47"));
    soldier0.load(10);
    while (soldier0.fire());
    soldier0.load(5);
    while (soldier0.fire());
    soldier0.load(10);
    Soldier soldier1("yy", std::make_shared<Gun>("So Cute"));
    soldier1.load(15);
    while(soldier1.fire());
}

int main(int argc, char **argv) {
    std::cout << "Test" << std::endl;
    // master test
    // dev test
    test();
    return 0;
}