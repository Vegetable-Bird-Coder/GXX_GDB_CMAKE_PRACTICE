#include "Gun.h"
#include <iostream>

void Gun::load(int bullet_num) {
    if (_bullet_number + bullet_num > _magazine_capacity) {
        _bullet_number = _magazine_capacity;
    } else {
        _bullet_number += bullet_num;
    }
}

bool Gun::shoot() {
    if (_bullet_number > 0) {
        _bullet_number -= 1;
        std::cout << "Fire in the hole!" << std::endl;
        return true;
    } else {
        std::cout << "Ammo depleted!" << std::endl;
        return false;
    }
}

Gun::~Gun() {
    std::cout << _type << " was abandoned!" << std::endl;
}