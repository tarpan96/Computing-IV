//
// Tarpan Patel
// PS1A
// 1/23/2020

#include "FibLFSR.hpp"
#include <iostream>
#include <string>


int main()
{
   FibLFSR l = FibLFSR("1011011000110110");

    for (int i = 0; i < 10; ++i)
    {
        l.generate(5);

        std::cout << l <<std::endl;
    }

}
