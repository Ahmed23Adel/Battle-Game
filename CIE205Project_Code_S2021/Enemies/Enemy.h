#pragma once

#include "..\Defs.h"
#include "..\CMUgraphicsLib\CMUgraphics.h"

class GUI;
// Enemy is the base class of each type of enemy
// Enemy should be an abstract class in next phases
class Enemy
{

protected:
	int ID,ArrvTime,power,reload,Distance,speed;         
	ENMY_TYPE type;
	ENMY_STATUS status;	    //status of the enemy (inactive, inactive, frosted, killed)
	double health;
	int priority;

public:
	Enemy(int id, ENMY_TYPE type, int arrTime, double health, int power,
		int reload, int speed,int distance=MaxDistance);

	Enemy(int id, int arrtime, int distance = MaxDistance) {
		SetID(id);
		SetArrvTime(arrtime);
		SetDistance(distance); } //hossam

	virtual ~Enemy();
	//Getters and setters
	int GetID() const { return ID; }
	void SetID(int id) { this->ID = id; }

	int GetPower() { return power; }
	void SetPower(int power) { this->power = power; }

	int GetReload() { return reload; }
	void SetReload(int reload) { this->reload = reload; }
	
	int GetSpeed() { return speed; }
	void SetSpeed(int s) { this->speed=s; }

	ENMY_TYPE GetType() { return type; }
	void SetType(ENMY_TYPE type) { this->type = type; }

	int GetDistance() const { return Distance; }
	void SetDistance(int d)
	{
		if (d >= MinDistance && d <= MaxDistance)
			Distance = d;
		else
			Distance = MaxDistance;
	}

	int GetArrvTime() { return ArrvTime; }
	void SetArrvTime(int time) { this->ArrvTime = time; }

	double GetHealth() { return health; }
	void SetHealth(double h) { this->health = h; }

	ENMY_STATUS GetStatus() const { return status; }
	void SetStatus(ENMY_STATUS s) { this->status = s; }

	int GetPriority() { return priority; }
	void SetPriority(int p) { this->priority = p; }
	//end of getters and setters
	


	bool operator>(Enemy* other);
	bool operator>= (Enemy* other);

	void DecrementDist();



	// Virtual Functions: ----------------

	//virtual void Move() = 0;	//All enemies can move
	//virtual void Act() = 0;	//Acting means fighting or healing

	//
	// TODO: Add More Member Functions As Needed
	//

};

