#include "Warrior.h"


//Konstruktor domyślny 
Warrior::Warrior()
:
	Physical{}//konstruktor klasy bazowej

{
}

//Destruktor wirtualny *)poczytać...
Warrior::~Warrior()
{
}

//Metada zwraca siłę wojownika
const float Warrior::getStrenght() const
{
	return m_strength;
}

//Metada ustawia siłę wojownika
void Warrior::setStrenght(float strength)
{
	m_strength = strength;
}