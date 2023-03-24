#pragma once

#include<SFML/Graphics.hpp>
#include<iostream>
#include<string>

using namespace std;

class Tile {
public:
	Tile(string textureName, sf::Vector2f pos, bool passable, bool exit);
	bool isPassable;
	bool isExit;
	sf::Vector2f getPos() {
		return m_Position;
	}
	void setPos(sf::Vector2f pos) {
		m_Position = pos;
	}
	sf::Sprite m_Sprite;
private:
	sf::Vector2f m_Position;
	sf::Texture m_Texture;
};