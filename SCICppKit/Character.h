#ifndef H_CHARACTER_SCI
#define H_CHARACTER_SCI

#include "SFML/Graphics.hpp"

///
///Klasa reprezentuje obiekt posiadający reprezentację
///fizyczną i graficzną - postać
///
class Character
{
public:

	///
	///Konstruktor domyślny
	///
	Character();

	///
	///Destruktor
	///
	~Character();

	///
	///Metoda ustawia pozycję obiektu
	///
	///@param x - współrzędna x
	///
	///@param y - współrzędna y
	///
	void setPosition(float x, float y);

	///
	///Metoda ustawia życie obiektu
	///
	///@param health - życie
	///
	void setHealth(float health);

	///
	///Metoda ustawia teksturę zawartego w klasie sf::Sprite'a
	///
	///@param texture - stała referencja na teksturę
	///
	void setGraphics(sf::Texture & texture);

	///
	///Metoda aktualizująca obiekt
	///
	///@param dt - czas
	///
	virtual void update(float dt);

	///
	///Metoda rysująca obiekt na kontekście graficznym - oknie
	///
	///@param window - referencja na okno gry
	///
	void draw(sf::RenderWindow & window) const;



protected:
	sf::Sprite m_sprite;//kontekst graficzny
	float m_health;//życie...
private:

	
};

#endif//H_CHARACTER_SCI