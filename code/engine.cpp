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
    resolution.x = 1000;//VideoMode::getDesktopMode().width;
    resolution.y = 500; //VideoMode::getDesktopMode().height;

    m_Window.create(VideoMode(resolution.x, resolution.y), "Behind You", Style::Default);
    //set player
    dead = false;



    startingPos = {resolution.x / 2.0f, resolution.y / 1.1f};
    m_Player = new Player(startingPos, 100);
    m_PlayerDirection = Direction::STILL;

    //generate text

    //score tracker
    /*
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
    */
    //generate map
    for (int i = 0; i < firstRoom.gridWidth; i++) {
        for (int j = 0; j < firstRoom.gridLength; j++) {
            m_Window.draw(firstRoom.m_Map[i][j]->m_Sprite);
        }
    }
    //draw once before loop
    /*
    for (int i = 0; i < room1.gridWidth; i++) {
        for (int j = 0; j < room1.gridLength; j++) {
            m_Window.draw(room1.m_Map[i][j]->m_Sprite);
        }
    }
    */
}