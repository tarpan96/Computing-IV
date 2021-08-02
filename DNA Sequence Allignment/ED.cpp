// Tarpan Patel
// PS5
// 4/12/2020
// ED.cpp

#include "ED.h"
#include <iostream>

ED::ED(std::string x, std::string y)
{
    xString = x + "-";
    yString = y + "-";

    opt = new int*[xString.length()];

    for (int i = 0; i < xString.length(); i++)
    {
        opt[i] = new int[yString.length()];
    }
}

ED::~ED()
{
    for (int i = 0; i < xString.length(); ++i)
    {
        delete [] opt[i];
    }
    delete opt;
}

int ED::penalty(char x, char y)
{
    return (x != y);
}

int ED::min(int down, int right, int cross)
{
    return std::min(std::min(down, right), cross);
}

int ED::OptDistance()
{
    int num = 0;

    for(int i = xString.length()-1; i >= 0; i--)
    {
        opt[i][yString.length()-1] = num * 2;
        num++;
    }

    num = 0;
    for (int j = yString.length()-1; j >= 0; j--)
    {
        opt[xString.length()-1][j] = num * 2;
        num++;
    }

    for(int i = xString.length()-1; i > 0; i--)
    {
        for (int j = yString.length()-1; j > 0 ; j--)
        {
            int minimin = min(opt[i][j-1] + 2, opt[i-1][j] + 2, (opt[i][j] + (penalty(xString.at(i-1),yString.at(j-1)))));

            opt[i-1][j-1] = minimin;
        }
    }

    return opt[0][0];
}

std::string ED::Alignment()
{
    return std::string();
}

std::ostream &operator << (std::ostream &os, ED &ed)
{
    os << ed.xString << ed.yString;
    return os;
}