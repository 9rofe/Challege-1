#pragma once

#include <iostream>
#include <string>

//items: 
	//flashlight (different types) - start with phone light
	//batteries
	//coins
	//vending machines with: 
		//health supplies
		//drinks (energy)
		//food 
	//backpack
	//drink/snack bar with:
		//coffee (energy)
		//alcohol (molotav)
		//snacks
		//cups?

enum Effect {
	NONE, HUNGRY, THIRSTY, INJURED, ENERGIZED, LOOPY, DEAD
};

//constant hunger, thirst decay (only apply at 30%)

//CHECK EFFECTS
/*
void checkEffect(Effect e) {
	switch e()
	{
	case NONE:
	case HUNGRY:
		//notify
	case THIRSTY:
		//notify
	case INJURED:
		//blurred view
		//heart rate fast
	case ENERGIZED:
		//speed
		//heart rate fast
	case LOOPY:
		//heart rate slow
		//random movement
	}
}
*/

class Light {
public:
	Light();
	Light(int b, int d, int w);
	void dim();
	void powerSwitch();
private:
	int brightness;
	int depth;
	int diameter;
	bool power;
};

class Buyable {
public:
	Buyable(float p);
	float getPrice() {
		return price;
	}
protected:
	float price;
};


class Consumable {
public:
	Consumable(Effect e, float p);
	Effect getEffect() {
		return effect;
	}
	int getPrice() {
		return price;
	}
protected:
	Effect effect;
	float price;
};

class Snack : public Consumable {
public:
	Snack(Effect e, float p, int h);
	int getHunger() {
		return hunger;
	}
private:
	int hunger;
};

class Drink : public Consumable {
public:
	Drink(Effect e, float p, int t);
	int getThirst() {
		return thirst;
	}
private:
	int thirst;
};
