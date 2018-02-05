#pragma once

#include <SFML/Graphics.hpp>
#include "Definition.hpp"
#include "GameLoop.hpp"

namespace Flappy
{
	class DisplayScore
	{
	public:
		DisplayScore(GameDataRef data);
		~DisplayScore();

		void Draw();
		void UpdateScore(int score);

	private:
		GameDataRef _data;
		sf::Text _scoreText;
	};
}
