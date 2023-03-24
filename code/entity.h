#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <sstream>
#include <vector>
#include <complex>
#include <cmath>
#include <sstream>

using namespace sf;
using namespace std;

enum class Direction {
    UP, DOWN, LEFT, RIGHT, STILL
};

class Entity
{
public:
    virtual void Move(Direction direction, Time dt) = 0;
    //location
    Vector2f GetLocation() const;
    void SetLocation(Vector2f location);
    //health
    virtual int GetHealth() const = 0;
    virtual void SetHealth(int health) = 0;
    //speed
    virtual void SetSpeed(int speed) = 0;
    virtual int GetSpeed() const = 0;
    //spawn
    //void spawn(IntRect arena, Vector2f resoulution);
    //player hit
    //bool hit(Time timeHit);
protected:
    Entity(Vector2f location);
    Vector2f m_EntityLocation; 
    bool dead;
};

class Player : public Entity
{
public:
    Player(Vector2f location, int health);
    void Move(Direction direction, Time dt) override;
    //health
    int GetHealth() const override;
    void SetHealth(int health) override;
    //speed
    void SetSpeed(int speed) override;
    int GetSpeed() const override;
    //update stats
    void updateHealth(int health);
    void updateHunger(int hunger);
    void updateThirst(int thirst);
private:
    const int PLAYER_WALK_SPEED = 125;
    const int PLAYER_SPRINT_SPEED = 175;
    const int START_HEALTH = 100;
    int m_Hunger, m_Thirst, m_Health, m_PlayerSpeed;
};

class Enemy : public Entity
{
public:
    Enemy(Vector2f location, int health, int speed);
    void Move(Direction direction, Time dt) override;
    //health
    int GetHealth() const override;
    void SetHealth(int health) override;
    //speed
    void SetSpeed(int speed) override;
    int GetSpeed() const override;
private:
    Time lastHit;
    int m_EnemyHealth, m_EnemySpeed;

};