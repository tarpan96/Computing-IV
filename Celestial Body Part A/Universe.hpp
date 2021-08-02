//
//  Universe.hpp
//  PS3A
//
//  Created by Tarpan Patel on 2/27/20.
//  Copyright © 2020 Tarpan Patel. All rights reserved.
//

#ifndef Universe_hpp
#define Universe_hpp

#include <fstream>
#include <vector>
#include "CelestialBody.hpp"
#include <memory>

class Universe
{
    public:
        void readFile();
        void drawUniverse();
    private:
        std::vector<std::shared_ptr<CelestialBody> > SolarSystem;
        std::ifstream planetFile;
        int numberOfPlanets;
        double radius;
        sf::Texture texture;
        sf::Sprite sprite;
    
};
#endif /* Universe_hpp */
