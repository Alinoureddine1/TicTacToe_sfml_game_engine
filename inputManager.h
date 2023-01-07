#pragma once
#include <SFML/Graphics.hpp>

namespace ttt{

class inputManager
{
public:
	inputManager();
	~inputManager();
	bool IsSpriteClicked(sf::Sprite, sf::Mouse::Button, sf::RenderWindow& window);
	sf::Vector2i GetMousePosition(sf::RenderWindow &window);
};

}


