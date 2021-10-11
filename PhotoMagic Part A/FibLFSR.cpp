//
//  FibLFSR.cpp
//  PS1A
//
//  Created by Tarpan Patel on 2/3/20.
//  Copyright © 2020 Tarpan Patel. All rights reserved.
//


#include "FibLFSR.hpp"
#include <sstream>
#include <string>

using namespace std;

FibLFSR::FibLFSR(string seed)
{
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

int FibLFSR::generate(int k)
{
    int result = 0;

    for (int i = 0; i < k; i++)
    {
        result *= 2;
        result = result + step();
    }
    
     std::cout << "  " << result << std::endl;
    
    return result;
}

int FibLFSR::step()
{
    bit = byte.at(byte.size()-1) ^ (byte.at(13)) ^ (byte.at(12)) ^ (byte.at(10));
    
    byte.pop_back();
    
    byte.insert(byte.begin(),bit);
    
    return bit;
}

ostream & operator<<(std::ostream &outStream, const FibLFSR &b)
{
    for (int i = b.byte.size()-1; i >= 0;--i)
    {
        outStream << (b.byte[i]);
    }
    
    return outStream;
}


