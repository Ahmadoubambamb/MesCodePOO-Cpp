#include "cercle1.h"

Cercle::Cercle(unsigned int x1,unsigned int y1,unsigned int r)
{  cout<<"apelle du constructeur :adr="<<this<<endl;
    c.x=x1;
    c.y=y1;
    rayon=r;
}
Cercle::~Cercle()
{
    cout<<"appel du destructeur :adr="<<this<<endl;
}
unsigned int Cercle::GetRayon() const
{
    return rayon;
}

Centre Cercle::GetCentre() const
{
    return c;
}

unsigned int Cercle::perimetre() const
{
    return 2*pi*rayon;
}

unsigned int Cercle::surface() const
{
    return pi*pow(rayon,2);
}

void Cercle::SetRayon(unsigned int r)
{
    rayon+=r;
}

void Cercle::SetCentre(Centre c1)
{ //c.x=c1.x;
  //c.y=c1.y;
    c=c1;
}

 void afficher_centre(Centre c)
 {
   cout<<" centre C:"<<"("<<c.x<<","<<c.y<<")";
 }


void Cercle::afficher() const
{  cout<<"Le Cercle de ";
   afficher_centre(GetCentre());
   cout<<"et de rayon "<<rayon<<endl;
}

 bool Cercle::comparer(const Cercle& C1) const
 {
     return((rayon==C1.rayon)&&(c.x==C1.c.x&&c.y==C1.c.y));
 }

