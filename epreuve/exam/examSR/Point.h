#ifndef POINT_H_
#define POINT_H_
#include "Base.h"
class Point: public Base
{private:
    int m_x;
    int m_y;
public:
    Point(int,int);
    virtual ~Point(){};
    void afficher();
};

#endif
