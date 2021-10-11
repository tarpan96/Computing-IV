//
//  FibLFSR.hpp
//  PS1A
//
//  Created by Tarpan Patel on 2/3/20.
//  Copyright © 2020 Tarpan Patel. All rights reserved.
//

#ifndef FibLFSR_hpp
#define FibLFSR_hpp

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class FibLFSR
{
    public:
        FibLFSR(string seed);
        int step();
        int generate(int k);
        friend::ostream& operator << (ostream &outStream, const FibLFSR &b);
        vector<int> byte;
private:
        void print();
        int tap, bit;
};
#endif /* FibLFSR_hpp */
