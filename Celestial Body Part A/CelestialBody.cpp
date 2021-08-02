//
//  CelestialBody.cpp
//  PS3A
//
//  Created by Tarpan Patel on 2/27/20.
//  Copyright © 2020 Tarpan Patel. All rights reserved.
//



#include "CelestialBody.hpp"
using namespace sf;


CelestialBody::CelestialBody(double xP, double yP, double xV, double yV, double m, std::string name)
{
    planetName = name;
    xPos = xP;
    yPos = yP;
    xVel = xV;
    yVel = yV;
    mass = m;
}


void CelestialBody::draw(sf::RenderTarget &target, sf::RenderStates states) const
{   
    double scaled = (radius * 2) / winX;
    double x = xPos / scaled;
    double y = yPos / scaled;



    sf::Sprite sprite2 = sprite;

    sprite2.setPosition(x + (winX/2), y + (winY/2));

    target.draw(sprite2);
}


void CelestialBody::setWindowSize(double x, double y)
{
    winX = x;
    winY = y;
}


istream& operator >> (istream &input, CelestialBody &system)
{
    input >> system.xPos >> system.yPos >> system.xVel >> system.yVel >> system.mass >> system.planetName;
   
	if(!system.image.loadFromFile(system.planetName))
    {
         std::cout << "Error" << std::endl;
    }

    system.texture.loadFromImage(system.image);
	system.sprite.setTexture(system.texture);
    return input;
}

/*
ostream& operator >> (ostream &output, CelestialBody &system)
{
    output << system.xPos << system.yPos << system.xVel << system.yVel << system.mass << system.planetName;

    
    return output;
}
*/

CelestialBody::CelestialBody(double radius)
{
    this->radius = radius;
}

