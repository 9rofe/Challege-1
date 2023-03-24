#include "worldMap.h"

#include <random>



WorldMap::WorldMap()
{
	gridLength = 20;
	gridWidth = 10;
	setInitialState();
}

void WorldMap::setInitialState()
{
	//setEnemy();
	setTiles();
}

void WorldMap::setEnemy()
{

}

void WorldMap::setTiles()
{
	m_Map.clear();
	/*
	float spacer = 50;
	int randomNumber = rand() % 10;
	int doorCount = 3;
	//set floor
	vector<Tile*> row;
	for (float j = 0.; j < 1000.; j += spacer)
	{
		row.clear();
		for (float i = 0.; i < 500.; i += spacer)
		{
			row.push_back(new Tile("textures/floor.png", { i, j }, true, false));
			gridLength++;
		}
		m_Map.push_back(row);
		gridWidth++;
	}
	gridLength /= gridWidth;
	cout << "GRID LENGTH: " << gridLength << "  GRID WIDTH: " << gridWidth << endl;

	//set walls
	for (float i = 0; i < 500; i += spacer)
	{
		row.clear();
		for (float j = 0; j < 1000; j += spacer)
		{
			if (j == 0 && i == 0)
			{
				row.push_back(new Tile("textures/tlcorner.png", { i, j }, false, false));
			}
			else if (j == 0 && i == 450)
			{
				row.push_back(new Tile("textures/trcorner.png", { i, j }, false, false));
			}
			else if (j == 950 && i == 0)
			{
				row.push_back(new Tile("textures/blcorner.png", { i, j }, false, false));
			}
			else if (j == 950 && i == 450)
			{
				row.push_back(new Tile("textures/brcorner.png", { i, j }, false, false));
			}
			else if (j == 0)
			{
				int randomDoor = rand() % 10;
				if (randomNumber == randomDoor) {
					row.push_back(new Tile("textures/lwalldoor.png", { i, j }, false, true));
					doorCount++;
				}
				else {
					row.push_back(new Tile("textures/lstonewall.png", { i, j }, false, false));
				}
			}
			else if (j == 950)
			{
				int randomDoor = rand() % 10;
				if (randomNumber == randomDoor) {
					row.push_back(new Tile("textures/rwalldoor.png", { i, j }, false, true));
					doorCount++;
				}
				else {
					row.push_back(new Tile("textures/rstonewall.png", { i, j }, false, false));
				}
			}
			else if (i == 0)
			{
				int randomDoor = rand() % 10;
				if (randomNumber == randomDoor) {
					row.push_back(new Tile("textures/twalldoor.png", { i, j }, false, true));
					doorCount++;
				}
				else {
					row.push_back(new Tile("textures/tstonewall.png", { i, j }, false, false));
				}
			}
			else
			{
				int randomDoor = rand() % 10;
				if (randomNumber == randomDoor) {
					row.push_back(new Tile("textures/bwalldoor.png", { i, j }, false, true));
					doorCount++;
				}
				else {
					row.push_back(new Tile("textures/bstonewall.png", { i, j }, false, false));

				}
			}
		}
		m_Map.push_back(row);
	}
	cout << "size: " << m_Map.size() << endl;
	*/
	for (int j = 0; j < 500; j += 50)
	{
		vector<Tile*> row;
		for (int i = 0; i < 1000; i += 50)
		{
			row.push_back(new Tile("textures/Textures/Wood/WOODA.png", { float(i+1) ,float(j+1)}, true, false));
		}
		m_Map.push_back(row);
	}	
}