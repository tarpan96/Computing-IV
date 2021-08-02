//
// Tarpan Patel 
// $Project
//2020-03-06.
//

#include "CelestialBody.hpp"
using namespace sf;

CelestialBody::CelestialBody(double radius)
{
    this->radius = radius;
}

void CelestialBody::windowSize(double x, double y)
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

void CelestialBody::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
    double scaled = (radius * 2) / winX;
    double x = xPos / scaled;
    double y = yPos / scaled;

    sf::Sprite sprite2 = sprite;

    sprite2.setPosition(x + (winX/2), y + (winY/2));

    target.draw(sprite2);
}

CelestialBody::CelestialBody(double xPos, double yPos, double xVel, double yVel, double, std::string planetName)
{
    this->xPos = xPos;
    this->yPos = yPos;
    this->xVel = xVel;
    this->yVel = yVel;
    this->planetName = planetName;
}



//------------------------------------------------------------



void CelestialBody::setxAcceleration()
{
    xAcc = xForce / mass;
}

void CelestialBody::setyAcceleration()
{
    yAcc = yForce / mass;
}

void CelestialBody::setxForce(double xForce)
{
    this->xForce = xForce;
}

void CelestialBody::setyForce(double yForce)
{
    this->yForce = yForce;
}

void CelestialBody::setMass(double mass)
{
    this->mass = mass;
}

void CelestialBody::setxPos(double xPos)
{
    this->xPos = xPos;
}

void CelestialBody::setyPos(double yPos)
{
    this->yPos = yPos;
}

void CelestialBody::setxVel(double deltaTime)
{
    xVel = xVel + (deltaTime * xAcc);
}

void CelestialBody::setyVel(double deltaTime)
{
    yVel = yVel - (deltaTime * yAcc);
}

void CelestialBody::setNetForce(double prevMass, double r)
{
    NetForce = ((G * mass  * prevMass) / r);
}



//--------------------------------------------------



double CelestialBody::getxPos()
{
    return xPos;
}

double CelestialBody::getyPos()
{
    return yPos;
}

double CelestialBody::getxVel()
{
    return xVel;
}

double CelestialBody::getyVel()
{
    return yVel;
}

double CelestialBody::getMass()
{
    return mass;
}

double CelestialBody::getxForce()
{
    return xForce;
}

double CelestialBody::getyForce()
{
    return yForce;
}

double CelestialBody::getNetForce()
{
    return NetForce;
}

double CelestialBody::getxAcceleration()
{
    return xAcc;
}

double CelestialBody::getyAcceleration()
{
    return yAcc;
}

std::ostream &operator<<(std::ostream &os, CelestialBody &body)
{
    os << "planetName: " << body.planetName << " mass: " << body.mass << " radius: " << body.radius
       << " deltaTime: " << body.deltaTime << " xPos: " << body.xPos << " xVel: " << body.xVel << " xForce: "
       << body.xForce << " xAcc: " << body.xAcc << " : " << body.deltaX << " NetForce: " << body.NetForce
       << " winX: " << body.winX << " yPos: " << body.yPos << " yVel: " << body.yVel << " yForce: " << body.yForce
       << " yAcc: " << body.yAcc << " deltaY: " << body.deltaY << " distance: " << body.distance << " winY: "
       << body.winY << std::endl;
    return os;
}
