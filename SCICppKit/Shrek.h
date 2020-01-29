#ifndef H_SHREK_SCI
#define H_SHREK_SCI
#include "Character.h"

///
///Klasa reptrezentuje Shrek'a
///
class Shrek : public Character
{
public:

	///
	///Konstruktor domyœlny 
	///
	Shrek();

	///
	///Destruktor wirtualny *)poczytaæ...
	///
	virtual ~Shrek();

private:
	float m_colorek;
};

#endif//H_SHREK_SCI