#include "complexe.h"
complexe::complexe(double re,double im)
{
    x=re; y=im;
}

double complexe::reelle() const
{
    return x;
}

double complexe::imaginaire() const
{
    return y;
}

double complexe::module() const
{
    double n=sqrt(pow(x,2)+pow(y,2));
    return n;
}
/*
complexe complexe::ajouter(const complexe& c) const
{ //complexe c1(x+c.x,y+c.y)
    complexe c1;
    c1.x=x+c.x;
    c1.y=y+c.y;
    return c1;
}

complexe complexe::multiplier(const complexe& c) const
{complexe c1;
    c1.x=x*c.x-y*c.y;
    c1.y=x*c.y+c.x*y;
return c1;
}

void complexe::afficher() const
{
    cout<<x<<"+"<<y<<"i"<<endl;
}
*/
complexe complexe::operator+ (const complexe& c) const
{ //complexe c1(x+c.x,y+c.y)
    complexe c1;
    c1.x=x+c.x;
    c1.y=y+c.y;
    return c1;
}

complexe complexe::operator* (const complexe& c) const
{complexe c1;
    c1.x=x*c.x-y*c.y;
    c1.y=x*c.y+c.x*y;
return c1;
}

ostream& operator<< (ostream& sortie,const complexe& c)
{
     sortie<<c.x<<"+"<<c.y<<"i"<<endl;
     return sortie;
}

