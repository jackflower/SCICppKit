#ifndef H_PHYSICAL_SCI
#define H_PHYSICAL_SCI

#include "SFML/Graphics.hpp"


///
///Klasa reprezentuje obiekt posiadający reprezentację
///fizyczną i graficzną
class Physical
{
public:

	///
	///Konstruktor domyślny
	///
	Physical();

	///
	///Destruktor
	///
	~Physical();

	///
	///Metoda ustawia pozycję obiektu
	///
	///@param x - współrzędna x
	///
	///@param y - współrzędna y
	///
	void setPosition(float x, float y);

	///
	///Metoda ustawia teksturę zawartego w klasie sf::Sprite'a
	///
	///@param texture - stała referencja na teksturę
	///
	void setTexture(const sf::Texture & texture);

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

	sf::Sprite m_sprite;// kontekst graficzny

private:

};
#endif//H_PHYSICAL_SCI

