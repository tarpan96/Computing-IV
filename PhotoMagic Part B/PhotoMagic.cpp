#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "LFSR.hpp"
#include <sstream>

int main(int argc,char* argv[])
{   
    int tap = stoi(argv[4]);

    LFSR l = LFSR(argv[3], tap);

    sf::Image image, image2;


    if (!image.loadFromFile(argv[1]))
    {
        return -1;
    }
        sf::Vector2u size = image.getSize();

     sf::RenderWindow window1(sf::VideoMode(size.x, size.y), "Input");

       sf::Texture texture;
       texture.loadFromImage(image);

       sf::Sprite sprite;
       sprite.setTexture(texture);

    // p is a pixel
    sf::Color p;

    // create photographic negative image of upper-left 200 px square
    for (int x = 0; x < image.getSize().x; x++)
    {
        for (int y = 0; y < image.getSize().y; y++)
        {
            p = image.getPixel(x, y);
            p.r = 255 - p.r;
            p.g = 255 - p.g;
            p.b = 255 - p.b;

            p.r = p.r - l.generate(10);
            p.g = p.g - l.generate(10);
            p.b = p.b - l.generate(10);

            image.setPixel(x,y,p);
        }
    }

    sf::RenderWindow window2(sf::VideoMode(size.x, size.y), "output");

    sf::Texture texture2;
    texture2.loadFromImage(image);

    sf::Sprite sprite2;
    sprite2.setTexture(texture2);


    while (window1.isOpen() && window2.isOpen())
    {
        sf::Event event;
        while (window1.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window1.close();
            }
        }
        while (window2.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window2.close();
            }
        }
        window1.clear();
        window1.draw(sprite);
        window1.display();
        window2.clear();
        window2.draw(sprite2);
        window2.display();
    }

    // fredm: saving a PNG segfaults for me, though it does properly
    //   write the file
    if (!image.saveToFile(argv[2]))
    {
            return -1;
    }

     return 0;
}

