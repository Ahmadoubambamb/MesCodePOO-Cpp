#ifndef INT2D_H_
#define INT2D_H_
#include <iostream>
#include <iomanip>
using namespace std;

class int2d
{private:
    int nlig;
    int ncol;
    int *adr;
public:
    int2d(int,int);
    ~int2d();
   // int2d(const int2d&);
    int& operator() (int,int);
    void afficher();
};

#endif
