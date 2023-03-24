#include "items.h"

//light
Light::Light() {
	brightness = 0;
	depth = 0;
	diameter = 0;
	power = false;
	}
Light::Light(int b, int d, int w) {
	brightness = b;
	depth = d;
	diameter = w;
	power = true;
}
void Light::dim() {
	brightness--;
	if (brightness == 0)
		power = false;
}
void Light::powerSwitch() {
	if (power == false)
		power = true;
	else
		power = false;
}

//buyables
Buyable::Buyable(float p) {
	price = p;
}

//consumable
Consumable::Consumable(Effect e, float p) {
	effect = e;
	price = p;
}

//snack
Snack::Snack(Effect e, float p, int h) : Consumable(e, p) {
	hunger = h;
}

//drink
Drink::Drink(Effect e, float p, int t) : Consumable(e, p) {
		thirst = t;
}