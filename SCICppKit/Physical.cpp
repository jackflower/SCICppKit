#include "Physical.h"


//Konstruktor domyślny
Physical::Physical()
:
	m_sprite{}
{
}

//Destruktor
Physical::~Physical()
{
	//nothing to do...
}

//Metoda ustawia pozycję obiektu
void Physical::setPosition(float x, float y)
{
	m_sprite.setPosition(x, y);
}

//Metoda ustawia teksturę zawartego w klasie sf::Sprite'a
void Physical::setTexture(const sf::Texture & texture)
{
	m_sprite.setTexture(texture);
}

//Metoda aktualizująca obiekt
void Physical::update(float dt)
{
	//to do...
}

//Metoda rysująca obiekt na kontekście graficznym - oknie
void Physical::draw(sf::RenderWindow & window) const
{
	window.draw(m_sprite);
}
