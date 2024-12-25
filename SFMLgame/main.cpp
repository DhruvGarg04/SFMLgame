#include<SFML/Graphics.hpp>
#include<iostream>

int main()
{
	sf::RenderWindow window(sf::VideoMode(900, 500), "hello");
	sf::CircleShape circle(50.23f);
	circle.setFillColor(sf::Color(200, 150, 0));

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}
		}
		
		window.clear(sf::Color(255, 255, 255));
		window.draw(circle);
		window.display();
	}
	return 0;
}