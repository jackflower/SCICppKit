#include <SFML/Graphics.hpp>

#include "Physical.h"
#include "Warrior.h"
#include "Knight.h"
#include "Character.h"
#include "Shrek.h"


int main()
{
	sf::String title = L"Szczecińskie Collegium Informatyczne SCI 2020";
	sf::RenderWindow window(sf::VideoMode(800, 600), title);
	
	//Ładowanie testury
	sf::Texture ship_graphics;
	ship_graphics.loadFromFile("../data/sci_ship_one.png");
	ship_graphics.setSmooth(true);

	//Tworzenie sprite'a
	sf::Sprite ship;
	ship.setTexture(ship_graphics);
	ship.setPosition(400.f, 300.f);


	//2020-January...przechodzimy na używanie klas (obieltowość)
	
	sf::Texture swamp;
	swamp.loadFromFile("../data/sci_ship_two.png");
	
	//2020 - testowanie BEGIN
	Character janek;
	janek.setHealth(120);
	janek.setGraphics(ship_graphics);
	Character czarny = janek;
	czarny.setPosition(100, 200);
	czarny.setGraphics(swamp);
	int wartownik = 0;
	//2020 - testowanie END

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear(sf::Color::White);
		janek.draw(window);
		czarny.draw(window);
		window.draw(ship);
		window.display();
	}

	return 0;
}
