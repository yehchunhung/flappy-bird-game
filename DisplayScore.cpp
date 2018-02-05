#include "DisplayScore.hpp"
#include <string>
#include <sstream>

namespace Flappy
{
	DisplayScore::DisplayScore(GameDataRef data) : _data(data)
	{
		_scoreText.setFont(this -> _data -> assets.GetFont("Flappy Font"));
		_scoreText.setString("0");
		_scoreText.setCharacterSize(135);
		_scoreText.setFillColor(sf::Color::White);
		_scoreText.setOrigin(sf::Vector2f(_scoreText.getGlobalBounds().width / 2, _scoreText.getGlobalBounds().height / 2));
		_scoreText.setPosition(sf::Vector2f(_data -> window.getSize().x / 2, _data -> window.getSize().y / 5));
	}

	DisplayScore::~DisplayScore(){}

	void DisplayScore::Draw()
	{
		_data -> window.draw(_scoreText);
	}

	void DisplayScore::UpdateScore(int score)
	{
	    std::ostringstream ss;
	     ss << score;
		_scoreText.setString(ss.str());
	}
}
