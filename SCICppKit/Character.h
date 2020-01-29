#ifndef H_CHARACTER_SCI
#define H_CHARACTER_SCI

#include "SFML/Graphics.hpp"

///
///Klasa reprezentuje obiekt posiadaj¹cy reprezentacjê
///fizyczn¹ i graficzn¹ - postaæ
///
class Character
{
public:

	///
	///Konstruktor domyœlny
	///
	Character();

	///
	///Destruktor
	///
	~Character();

	///
	///Metoda ustawia pozycjê obiektu
	///
	///@param x - wspó³rzêdna x
	///
	///@param y - wspó³rzêdna y
	///
	void setPosition(float x, float y);

	///
	///Metoda ustawia ¿ycie obiektu
	///
	///@param health - ¿ycie
	///
	void setHealth(float health);

	///
	///Metoda ustawia teksturê zawartego w klasie sf::Sprite'a
	///
	///@param texture - sta³a referencja na teksturê
	///
	void setGraphics(sf::Texture & texture);

	///
	///Metoda aktualizuj¹ca obiekt
	///
	///@param dt - czas
	///
	virtual void update(float dt);

	///
	///Metoda rysuj¹ca obiekt na kontekœcie graficznym - oknie
	///
	///@param window - referencja na okno gry
	///
	void draw(sf::RenderWindow & window) const;



protected:
	sf::Sprite m_sprite;//kontekst graficzny
	float m_health;//¿ycie...
private:

	
};

#endif//H_CHARACTER_SCI