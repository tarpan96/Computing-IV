//
//  CelestialBody.hpp
//  PS3A
//
//  Created by Tarpan Patel on 2/27/20.
//  Copyright © 2020 Tarpan Patel. All rights reserved.
//

#ifndef CelestialBody_hpp
#define CelestialBody_hpp

#include <stdio.h>
#include <iostream>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <string>
#include <SFML/Graphics.hpp>
#include <memory>
#include <fstream>

using namespace std;
class CelestialBody : public sf::Drawable
{
    public:
        
    	CelestialBody(double);
        CelestialBody(double, double, double, double, double, std::string);
        void setWindowSize(double, double);
        friend std::ostream& operator <<(std::ostream&, CelestialBody&);
        friend std::istream& operator >>(std::istream&, CelestialBody&);
        void draw(sf::RenderTarget &target, sf::RenderStates states) const;
        
    private:
		double xPos, yPos, xVel, yVel, mass, radius;
        double winX, winY;
		std::string planetName;
        sf::Texture texture;
        sf::Sprite sprite;
	    sf::Image image;
};
#endif /* CelestialBody_hpp */
