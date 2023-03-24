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
#include "worldMap.h"

using namespace std;
using namespace sf;

class Engine {
public:
	Engine();
	void Run();
private:
	WorldMap firstRoom;
	void Input();
	void Update();
	void Draw();
	Player* m_Player;
	Vector2f resolution;
	RenderWindow m_Window;
	Direction m_PlayerDirection;
	bool dead;
	Vector2f startingPos;

};
