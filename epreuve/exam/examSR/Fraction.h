#ifndef FRACTION_H_
#define FRACTION_H_
#include "Base.h"
class Fraction: public Base
{private :
    int num;
    int deno;
public:
    Fraction(int,int);
    virtual ~Fraction(){};
    void afficher();
};

#endif
