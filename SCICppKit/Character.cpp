#include "Character.h"


//Konstruktor domyœlny
Character::Character()
:
	m_sprite{},
	m_health { 100.0f }
{
}

//Destruktor
Character::~Character()
{
}

//Metoda ustawia pozycjê obiektu
void Character::setPosition(float x, float y)
{
	m_sprite.setPosition(x, y);
}

//Metoda ustawia ¿ycie obiektu
void Character::setHealth(float health)
{
	m_health = health;
}

//Metoda ustawia teksturê zawartego w klasie sf::Sprite'a
void Character::setGraphics(sf::Texture & texture)
{
	m_sprite.setTexture(texture);
}

//Metoda aktualizuj¹ca obiekt
void Character::update(float dt)
{
	//to do...
}

//Metoda rysuj¹ca obiekt na kontekœcie graficznym - oknie
void Character::draw(sf::RenderWindow & window) const
{
	window.draw(m_sprite);
}
