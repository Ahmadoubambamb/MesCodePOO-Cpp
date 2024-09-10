#ifndef CHAINE_H_
#define CHAINE_H_
#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdlib>
#include <cstdio>
using namespace std;

class str
{private :
    unsigned int lenght;
    char* ch;
public:
     str();
     str(char* );
     str(const str&);
     ~str();
     str& operator=(const str&);
     bool operator==(const str&);
     str operator+(const str&);
     char& operator[](int);
     friend ostream& operator<<(ostream& ,const str& );
};

#endif
