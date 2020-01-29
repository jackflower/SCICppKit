#include "Character.h"


//Konstruktor domyślny
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

//Metoda ustawia pozycję obiektu
void Character::setPosition(float x, float y)
{
	m_sprite.setPosition(x, y);
}

//Metoda ustawia życie obiektu
void Character::setHealth(float health)
{
	m_health = health;
}

//Metoda ustawia teksturę zawartego w klasie sf::Sprite'a
void Character::setGraphics(sf::Texture & texture)
{
	m_sprite.setTexture(texture);
}

//Metoda aktualizująca obiekt
void Character::update(float dt)
{
	//to do...
}

//Metoda rysująca obiekt na kontekście graficznym - oknie
void Character::draw(sf::RenderWindow & window) const
{
	window.draw(m_sprite);
}
