// Tarpan Patel
// PS5
// 4/12/2020
// Main.cpp

#include <iostream>
#include "ED.h"
#include <SFML/System.hpp>


int main()
{
    sf::Clock clock;
    sf::Time t;

    std::string x, y;

    std::cin >> x >> y;

    ED ed(x,y);

    std::cout << "Edit Distance: " << ed.OptDistance() << std::endl;
     t = clock.getElapsedTime();

     std::cout << "Execution time is " << t.asSeconds() << " seconds \n";
}