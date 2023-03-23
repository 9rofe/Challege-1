#include "engine.h"

//IDEAS:
//enemies approach from behind...gets silent and hear noise
//looking at an enemy freezes it and turns up heart beat
//sleeping turns screen red and everything comes at you til u get up and then its clear

//add pause and play enum for menus
//add sprint time limit


Engine::Engine()
{
    //set window
    resolution.x = VideoMode::getDesktopMode().width;
    resolution.y = VideoMode::getDesktopMode().height;
    m_Window.create(VideoMode(resolution.x, resolution.y), "Behind You", Style::Fullscreen);
    //set player
    Vector2f coord = { resolution.x / 2.0f, resolution.y / 1.1f };
    m_Player = new Player(coord);
    playerDirection = Direction::NONE;
    prev_Direction = playerDirection;
    //creates text
    GenerateText();

    //score tracker
    currentScore = 0;
    m_InputFile.open("code/scoreboard.txt");
    if (!m_InputFile)
    {
        cout << "m_InputFile failed to open" << endl;
    }
    else
    {
        string ss;
        m_InputFile >> ss;
        m_HighScore = stoi(ss);
        cout << "Current High Score: " << m_HighScore << endl;
        m_InputFile.close();
    }
    //generate map
    spaces = { resolution.x / 16, resolution.y / 9 };
    m_wallsMap = GenerateWalls();
    m_fruitMap = GenerateFruit();
    m_dotsMap = GenerateDots();
    //draw once before loop
    DrawWalls(m_wallsMap);
    DrawItems(m_dotsMap, m_fruitMap);
}