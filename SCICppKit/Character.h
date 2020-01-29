#ifndef H_CHARACTER_SCI
#define H_CHARACTER_SCI

#include "SFML/Graphics.hpp"

///
///Klasa reprezentuje obiekt posiadaj�cy reprezentacj�
///fizyczn� i graficzn� - posta�
///
class Character
{
public:

	///
	///Konstruktor domy�lny
	///
	Character();

	///
	///Destruktor
	///
	~Character();

	///
	///Metoda ustawia pozycj� obiektu
	///
	///@param x - wsp�rz�dna x
	///
	///@param y - wsp�rz�dna y
	///
	void setPosition(float x, float y);

	///
	///Metoda ustawia �ycie obiektu
	///
	///@param health - �ycie
	///
	void setHealth(float health);

	///
	///Metoda ustawia tekstur� zawartego w klasie sf::Sprite'a
	///
	///@param texture - sta�a referencja na tekstur�
	///
	void setGraphics(sf::Texture & texture);

	///
	///Metoda aktualizuj�ca obiekt
	///
	///@param dt - czas
	///
	virtual void update(float dt);

	///
	///Metoda rysuj�ca obiekt na kontek�cie graficznym - oknie
	///
	///@param window - referencja na okno gry
	///
	void draw(sf::RenderWindow & window) const;



protected:
	sf::Sprite m_sprite;//kontekst graficzny
	float m_health;//�ycie...
private:

	
};

#endif//H_CHARACTER_SCI