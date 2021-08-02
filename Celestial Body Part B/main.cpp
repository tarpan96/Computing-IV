#include <iostream>
#include "Universe.hpp"
#include "CelestialBody.hpp"

int main(int argc, char** argv)
{
    Universe universe;

    universe.readFile();

    float t = atof(argv[1]);
    float dt = atof(argv[2]);

    double time = (double) t;
    double deltaTime = (double) dt;

    universe.step(time, deltaTime);
   // universe.drawUniverse();


}