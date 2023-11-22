#include "Soldier.h"

Soldier::Soldier(std::string name, std::shared_ptr<Gun> gun) : _name(name), _gun(gun) {}

void Soldier::get_gun(std::shared_ptr<Gun> gun)
{
    _gun = gun;
}

void Soldier::load(int bullet_number)
{
    if (_gun.get())
    {
        _gun->load(bullet_number);
    }
}

bool Soldier::fire()
{
    if (_gun.get())
    {
        return _gun->shoot();
    }
    else
    {
        return false;
    }
}
