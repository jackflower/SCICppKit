#ifndef H_KNIGHT_SCI
#define H_KNIGHT_SCI

#include "Physical.h"

///
///Klasa reptrezentuje rycerza
///
class Knight : public Physical
{
public:

	///
	///Konstruktor domyślny 
	///
	Knight();

	///
	///Destruktor wirtualny *)poczytać...
	///
	virtual ~Knight();

	///
	///Metada zwraca zbroję rycerza
	///
	const float getArmor() const;

	///
	///Metada ustawia zbroję rycerza
	///
	///@param armor - zbroja rycerza
	///
	void setArmor(float armor);

private:

	float m_armor;	//zbroja rycerza - ochrona
	
};

#endif//H_KNIGHT_SCI