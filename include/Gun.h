#pragma once
#include <string>

#define DEFAULT_MAGAZINE_CAPACITY 32

class Gun
{
public:
    Gun(std::string type, int magazine_capacity = DEFAULT_MAGAZINE_CAPACITY, int bullet_number = 0) : _type(type), _magazine_capacity(magazine_capacity), _bullet_number(bullet_number) {}
    void load(int bullet_number);
    bool shoot();
    ~Gun();
private:
    std::string _type;
    int _magazine_capacity;
    int _bullet_number;
};