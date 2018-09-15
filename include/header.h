#pragma once

#include "animation.h"
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <fstream>
#include <memory>
#include <sstream>
#include <string>
#include <vector>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

using namespace std;

struct blockPoint
{
    int index;
	int x;
	int y;
	int type;
};

///Game functions
//void StartLevel(int index);

///Global audio manager
//extern AudioManager audioManager;

///Global classes

///Global vectors

///Global resources

//extern sf::Font fntPressStart2P;

///Global variables
extern bool isPaused;
extern int gameState;
extern float loadTimer;
extern int area;
extern std::string requestedMusic;
extern std::string currentMusic;
extern sf::Vector2f viewPosition;
extern sf::Vector2f viewSize;

extern float timeElapsed;
