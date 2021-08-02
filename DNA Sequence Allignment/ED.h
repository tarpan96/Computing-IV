// Tarpan Patel
// PS5
// 4/12/2020
// ED.h

#ifndef PS5_ED_H
#define PS5_ED_H

#include <string>

class ED
{
public:
    ED(std::string, std::string);
    static int penalty(char, char);
    static int min(int, int, int);
    int OptDistance();
    std::string Alignment();
    ~ED();
    friend std::ostream& operator <<(std::ostream&, ED&);

private:
    int** opt;
    std::string xString, yString;
};


#endif //PS5_ED_H
