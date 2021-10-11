//
//  LFSR.cpp
//  PS1B
//
//  Created by Tarpan Patel on 1/23/2020.
//  Copyright © 2019 Tarpan Patel. All rights reserved.
//

#include "LFSR.hpp"
#include <sstream>
#include <string>

using namespace std;

LFSR::LFSR(string seed, int t)
{
    tap = t;
    
    for(int i = seed.size()-1; i >= 0; i--)
    {
        if(seed.at(i) == '1')
        {
            byte.push_back(seed.at(i) - '0');
        }
        else
        {
            byte.push_back((('0') - seed.at(i)));
        }
    }
}

int LFSR::generate(int k)
{
    int result = 0;

    for (int i = 0; i < k; i++)
    {
        result *= 2;
        result = result + step();
    }
    
    return result;
}

int LFSR::step()
{
    bit = byte.at(tap) ^ byte.at(byte.size()-1);
    byte.pop_back();
    
    byte.insert(byte.begin(),bit);
    
    return bit;
}

ostream & operator<<(std::ostream &outStream, const LFSR &b)
{
    std::string byteString = "";

    for (int i = b.byte.size()-1; i >= 0;--i)
    {
        byteString += (b.byte[i]);
    }

    outStream << byteString;

    return outStream;
}
