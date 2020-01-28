#include "Knight.h"


//Konstruktor domyślny 
Knight::Knight()
:
	Physical{}//konstruktor klasy bazowej

{
}

//Destruktor wirtualny *)poczytać...
Knight::~Knight()
{
}

//Metada zwraca zbroję rycerza
const float Knight::getArmor() const
{
	return m_armor;
}

//Metada ustawia zbroję rycerza
void Knight::setArmor(float armor)
{
	m_armor = armor;
}
