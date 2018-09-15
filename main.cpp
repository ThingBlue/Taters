/**

Hey there! Please take a look at the readme file for controls and explainations of game mechanics!

WARNING: the code that follows will make you cry;
         a safety pig has been provided below for your benefit
                         _
 _._ _..._ .-',     _.._(`))
'-. `     '  /-._.-'    ',/
   )         \            '.
  / _    _    |             \
 |  a    a    /              |
 \   .-.                     ;
  '-('' ).-'       ,'       ;
     '-;           |      .'
        \           \    /
        | 7  .__  _.-\   \
        | |  |  ``/  /`  /
       /,_|  |   /,_/   /
          /,_/      '`-'
*/

#include "header.h"
#include <SFML/Graphics.hpp>

///Global variables
bool isPaused = false;
int gameState = 0;
float loadTimer = 0.0f;
int area;
std::string requestedMusic;
std::string currentMusic;
sf::Vector2f viewPosition;
sf::Vector2f viewSize;

float timeElapsed;

int main()
{
    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

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

        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}
