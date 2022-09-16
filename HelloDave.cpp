#include "SFML/Graphics.hpp"
#include "stdio.h"

using namespace sf;

class Engine {
public:
	//Game Stuff
	Texture tex;
	Sprite spr;

	//Engine Stuff
	RenderWindow window;
	void loop();
	void init();
	void input(Event e);
	void update();
	void render();
};
