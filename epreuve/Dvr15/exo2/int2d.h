#ifndef INT2D_H_
#define INT2D_H_
#include <iostream>
#include <iomanip>
using namespace std;

class Int2d
{private:
    int nlig;
    int ncol;
    int **adr;
public:
 Int2d(int,int);
 //Int2d(Int2d& );
 ~Int2d();
 int& operator() (int,int);
 void afficher();
};

#endif
