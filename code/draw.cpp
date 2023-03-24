#include "engine.h"

void Engine::Draw()
{
    m_Window.clear();
    
    for (int i = 0; i < firstRoom.gridWidth; i++) {
        for (int j = 0; j < firstRoom.gridLength; j++) {
            m_Window.draw(firstRoom.m_Map[i][j]->m_Sprite);
        }
    }
    cout << "check" << endl;
    
    //Draws "Player"
    /*
    Sprite dd_player;
    Texture txtr;
    txtr.loadFromFile("textures/Elon-Musk.PNG");
    dd_player.setTexture(txtr);
    dd_player.setScale(1,1);
    m_Window.draw(dd_player);
    */
    
    //if (dead)
    {
        //u survived days hours mins.
    }
    m_Window.display();
}