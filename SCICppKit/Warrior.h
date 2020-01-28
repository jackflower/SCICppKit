#ifndef H_WARRIOR_SCI
#define H_WARRIOR_SCI

#include "Physical.h"

///
///Klasa reptrezentuje wojownika
///
class Warrior : public Physical
{
public:

	///
	///Konstruktor domyślny 
	///
	Warrior();

	///
	///Destruktor wirtualny *)poczytać...
	///
	virtual ~Warrior();

	///
	///Metada zwraca siłę wojownika
	///
	const float getStrenght() const;

	///
	///Metada ustawia siłę wojownika
	///
	///@param strength - siła wojownika
	///
	void setStrenght(float strength);

private:

	float m_strength;	//siła wojownika 
	
};

#endif//H_WARRIOR_SCI