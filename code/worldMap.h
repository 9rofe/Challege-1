#pragma once

#include "entity.h"
#include "tile.h"
#include <vector>

class WorldMap {
public:
	WorldMap();
	vector<vector<Tile*>> m_Map;
	int gridLength, gridWidth;
private:
	sf::Vector2i exitPos;
	void setInitialState();
	void setTiles();
	void setEnemy();
};