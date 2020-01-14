#include <SFML/Graphics.hpp>

int main()
{
	sf::String title = L"Szczecińskie Collegium Informatyczne SCI 2020";

	//Okno
	sf::RenderWindow window(sf::VideoMode(800, 600), title);

	
	sf::Texture ship_graphics;
	ship_graphics.loadFromFile("../data/sci_ship_one.png");
	ship_graphics.setSmooth(true);

	sf::Sprite ship;
	ship.setTexture(ship_graphics);
	ship.setPosition(400.f, 300.f);

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
		window.display();
	}

	return 0;
}
