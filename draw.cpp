#include "engine.h"

void Engine::Draw()
{
    m_Window.clear();

    //Draws "Player"
    Sprite dd_player;
    Texture text;
    text.loadFromFile("");
    dd_player.setTexture(text);
    dd_player.setScale(.8, 1.0);

    m_Window.draw(//text);

    //if (dead)
    {
        //u survived days hours mins.
    }
    m_Window.display();
}