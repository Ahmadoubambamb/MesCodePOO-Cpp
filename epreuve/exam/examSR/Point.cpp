#include "Point.h"

Point::Point(int x,int y)
{
    m_x=x;
    m_y=y;
}

void Point::afficher()
{
    cout<<"("<<m_x<<","<<m_y<<")"<<endl;
}
