#pragma once

#include <SFML/Graphics.hpp>
#include "GameLoop.hpp"
#include "Definition.hpp"

namespace Flappy
{
	class Flash
	{
	public:
		Flash(GameDataRef data);
		~Flash();

		void Show(float dt);
		void Draw();

	private:
		GameDataRef _data;
		sf::RectangleShape _shape;
		bool _flashOn;

	};
}
