#include "Game.h"

namespace ttt {
	Game::Game(int width, int height, std::string title)
	{
		_data->window.create(sf::VideoMode(width, height),title,sf::Style::Close | sf::Style::Titlebar);
		this->Run();
	}

	void Game::Run() {
		float newTime, frameTime, interpolation;
		float currentTime = this->_clockk.getElapsedTime().asSeconds();
		float accumulator = 0.0;
		while (this->_data->window.isOpen())
		{
			this->_data->machine.ProcessStateChanges();
			newTime = this->_clockk.getElapsedTime().asSeconds();
			frameTime = newTime - currentTime;
			if (frameTime > 0.25) 
			{
				frameTime = 0.25;
			}
			currentTime = newTime;
			accumulator += frameTime;
				while (accumulator >= dt) {
					this->_data->machine.GetActiveState()->
						Han

				}
		}
	}

}