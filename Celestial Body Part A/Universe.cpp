//
//  Universe.cpp
//  PS3A
//
//  Created by Tarpan Patel on 2/27/20.
//  Copyright © 2020 Tarpan Patel. All rights reserved.
//

#include "Universe.hpp"
#include <fstream>
#include <iostream>
#include <vector>

void Universe::readFile()
{

    std::cin >> numberOfPlanets;
    std::cin >> radius;  

    for (int i = 0; i < numberOfPlanets; ++i)
    {
        std::shared_ptr<CelestialBody> planet(new CelestialBody(radius));

        std::cin >> *planet;
        
        SolarSystem.push_back(planet);
    }

    drawUniverse();
}

void Universe::drawUniverse()
{
    if(!texture.loadFromFile("space.jpg"))
    {
        std::cout << "could not open background " << std::endl;
    }
    
    sf::RenderWindow window(sf::VideoMode(texture.getSize().x, texture.getSize().y),"NBody");
    sprite.setTexture(texture);
    
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
        
       
        window.draw(sprite);

        for (int i = 0; i < numberOfPlanets; ++i)
        {
            (*(SolarSystem).at(i)).setWindowSize(texture.getSize().x, texture.getSize().y);
            window.draw((*(SolarSystem).at(i)));
        }
        
        window.display();
    }
}



