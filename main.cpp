#include "Gun.h"
#include "Soldier.h"
#include <iostream>

void test() {
    Soldier soldier0("haz", std::make_shared<Gun>("AK47"));
    soldier0.load(10);
    while (soldier0.fire());
    soldier0.load(5);
}

int main(int argc, char **argv) {
    std::cout << "Test" << std::endl;
    // dev test
    test();
    return 0;
}