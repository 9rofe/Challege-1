#pragma once
#include <SFML/Graphics.hpp> 
#include <SFML/Audio.hpp>
#include <iostream>
#include <sstream>
#include <vector>
#include <complex>
#include <cmath>
#include <fstream>
#include <string>

#include "items.h"
#include "entity.h"

using namespace std;
using namespace sf;

class Engine() {
public:
	Engine();
	void Run();
private:
	void Input();
	void Update();
	void Draw();
	Player* m_player;
	bool dead;
};
