//
// Tarpan Patel
// PS1b
// 1/20/2020
//

#ifndef PS1A_LFSR_H
#define PS1A_LFSR_H

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class LFSR
{
    public:
        LFSR(string seed, int t);
        int step();
        int generate(int k);
        friend::ostream& operator << (ostream &outStream, const LFSR &b);
        vector<int> byte;
private:
        void print();
        int tap, bit;
};

#endif //PS1A_LFSR_H
