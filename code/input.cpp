#include "engine.h"

void Engine::Input()
{
    Event event;
    while (m_Window.pollEvent(event))
    {
        if (event.type == Event::Closed)
        {
            // Quit the game when the window is closed
            m_Window.close();
        }

        if (event.type == sf::Event::KeyPressed)
        {
            if (Keyboard::isKeyPressed(Keyboard::W))
            {
                m_PlayerDirection = Direction::UP;
                cout << "UP" << endl;
            }
            if (Keyboard::isKeyPressed(Keyboard::S))
            {
                m_PlayerDirection = Direction::DOWN;
                cout << "DOWN" << endl;
            }
            if (Keyboard::isKeyPressed(Keyboard::A))
            {
                m_PlayerDirection = Direction::LEFT;
                cout << "LEFT" << endl;
            }
            if (Keyboard::isKeyPressed(Keyboard::D))
            {
                m_PlayerDirection = Direction::RIGHT;
                cout << "RIGHT" << endl;
            }
        }
    }

    if (Keyboard::isKeyPressed(Keyboard::Escape))
    {
        cout << "game exited" << endl;
        m_Window.close();
    }
}