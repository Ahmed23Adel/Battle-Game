#pragma once
#include "Enemies/Enemy.h"
class Healer :
    public Enemy
{
public:
	Healer(int id, ENMY_TYPE type, int arrTime, double health, int power,
		int reload, int speed) : Enemy(id, type, arrTime, health, power, reload, speed) {}
};

