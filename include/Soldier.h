#pragma once
#include <string>
#include <memory>
#include "Gun.h"

class Soldier
{
public:
    Soldier(std::string name, std::shared_ptr<Gun> gun = nullptr);
    void load(int bullet_number);
    bool fire();
    void get_gun(std::shared_ptr<Gun> gun);

private:
    std::string _name;
    std::shared_ptr<Gun> _gun;
};