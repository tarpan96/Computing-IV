//
// Tarpan Patel 
// $Project
//2020-03-06.
//

#ifndef PS3B_UNIVERSE_H
#define PS3B_UNIVERSE_H

#include <cmath>
#include <iostream>
#include <fstream>
#include <vector>
#include <memory>
#include <SFML/Audio.hpp>
#include "CelestialBody.hpp"


class Universe
{
    public:
        void readFile();
        void drawUniverse();
        void step(double, double);

    private:

        sf::Sprite sprite;
        sf::Texture texture;
        int numberOfPlanets;

        double newYPos, newXPos;
        double radius, xForce, yForce, deltaX, deltaY, r;
      
        std::vector<std::shared_ptr<CelestialBody> > SolarSystem;
};


#endif //PS3B_UNIVERSE_H
