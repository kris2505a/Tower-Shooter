#pragma once
#include "Tile.hpp"
#include <vector>
#include <SFML/Graphics/RenderWindow.hpp>


class Game {

private:
	
	//WINDOW MEMBERS
	unsigned int m_width, m_height, m_fps;
	std::string m_title;
	bool m_fullScreen;
	bool m_vSync;
	sf::RenderWindow* m_window;
	
	//DELTATIME ELEMENTS
	float m_deltaTime;
	sf::Clock m_dtClock;


	//INIT FUNCTIONS
	void initWindow();
	void initTiles();

	//GAME FUNCTIONS
	void render();
	void update();
	void handleInput();
	void run();

	std::vector <Tile*> m_tiles;
	

public:
	Game();
	~Game();
};