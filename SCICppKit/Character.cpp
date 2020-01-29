#include "Character.h"


//Konstruktor domy�lny
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

//Metoda ustawia pozycj� obiektu
void Character::setPosition(float x, float y)
{
	m_sprite.setPosition(x, y);
}

//Metoda ustawia �ycie obiektu
void Character::setHealth(float health)
{
	m_health = health;
}

//Metoda ustawia tekstur� zawartego w klasie sf::Sprite'a
void Character::setGraphics(sf::Texture & texture)
{
	m_sprite.setTexture(texture);
}

//Metoda aktualizuj�ca obiekt
void Character::update(float dt)
{
	//to do...
}

//Metoda rysuj�ca obiekt na kontek�cie graficznym - oknie
void Character::draw(sf::RenderWindow & window) const
{
	window.draw(m_sprite);
}
