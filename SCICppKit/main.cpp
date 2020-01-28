#include <SFML/Graphics.hpp>

#include "Physical.h"
#include "Warrior.h"
#include "Knight.h"


int main()
{
	sf::String title = L"Szczecińskie Collegium Informatyczne SCI 2020";

	sf::RenderWindow window(sf::VideoMode(800, 600), title);

	
	sf::Texture ship_graphics;
	ship_graphics.loadFromFile("../data/sci_ship_one.png");
	ship_graphics.setSmooth(true);

	sf::Sprite ship;
	ship.setTexture(ship_graphics);
	ship.setPosition(400.f, 300.f);

	//2020-01-28
	Physical physical_sci;
	physical_sci.setTexture(ship_graphics);
	physical_sci.setPosition(100, 100);
	//2020-01-28


	int wartownik = 0;

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear(sf::Color::White);
		window.draw(ship);
		physical_sci.draw(window);
		window.display();
	}

	return 0;
}
