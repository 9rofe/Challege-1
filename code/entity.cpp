#include "Entity.h"

//Entity
Entity::Entity(Vector2f coord)
{
    m_EntityLocation = coord;
    dead = false;
}

Vector2f Entity::GetLocation() const
{
    return m_EntityLocation;
}

void Entity::SetLocation(Vector2f location)
{
    m_EntityLocation = location;
}


//Player
Player::Player(Vector2f coord, int health) : Entity(coord)
{
    m_PlayerSpeed = PLAYER_WALK_SPEED;
    m_Health = 100;
    m_Hunger = 100;
    m_Thirst = 100;
}

void Player::Move(Direction direction, Time dt)
{
    /*
    if (direction == Direction::LEFT)
    {
        m_speed = 510;
        m_EntityLocation.x -= m_speed * dt.asSeconds();
    }
    else if (direction == Direction::RIGHT)
    {
        m_speed = 510;
        m_EntityLocation.x += m_speed * dt.asSeconds();
    }
    else if (direction == Direction::DOWN)
    {
        m_speed = 510;
        m_EntityLocation.y += m_speed * dt.asSeconds();
    }
    else if (direction == Direction::UP)
    {
        m_speed = 510;;
        m_EntityLocation.y -= m_speed * dt.asSeconds();
    }
    */
}

void Player::SetSpeed(int speed)
{
    m_PlayerSpeed = speed;
}
int Player::GetSpeed() const
{
    return m_PlayerSpeed;
}

void Player::SetHealth(int health)
{
    m_Health = health;
}

int Player::GetHealth() const
{
    return m_Health;
}

void Player::updateHealth(int health)
{
    m_Health = health;
}
void Player::updateHunger(int hunger)
{
    m_Hunger = hunger;
}
void Player::updateThirst(int thirst)
{
    m_Thirst = thirst;
}


//Enemy
Enemy::Enemy(Vector2f coord, int health, int speed) : Entity(coord)
{
    m_EnemyHealth = health;
    m_EnemySpeed = speed;
}

void Enemy::Move(Direction direction, Time dt)
{
    /*
    if (m_direction == Direction::DOWN)
    {

        m_EntityLocation.y -= m_speed * dt.asSeconds();
    }
    else if (m_direction == Direction::UP)
    {
        m_EntityLocation.y += m_speed * dt.asSeconds();
    }
    */
}

void Enemy::SetSpeed(int speed)
{
    m_EnemySpeed = speed;
}
int Enemy::GetSpeed() const
{
    return m_EnemySpeed;
}

void Enemy::SetHealth(int health)
{
    m_EnemyHealth = health;
}

int Enemy::GetHealth() const
{
    return m_EnemyHealth;
}
