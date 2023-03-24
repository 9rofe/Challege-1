#include "tile.h"

Tile::Tile(string textureLocation, sf::Vector2f pos, bool passable, bool exit)
{
	m_Position = pos;
	isPassable = passable;
	isExit = exit;
	m_Sprite.setPosition(sf::Vector2f(m_Position));
	if (!m_Texture.loadFromFile(textureLocation)) {
		cout << "Texture failed to load" << endl;
		return;
	}
	//m_Texture.setSmooth(true);
	m_Sprite.setTexture(m_Texture);
	m_Sprite.setTextureRect(sf::IntRect(0, 0, 50, 50));
}
