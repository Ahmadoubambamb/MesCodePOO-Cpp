#include "cercle.h"

Cercle::Cercle(unsigned int x1,unsigned int y1,unsigned int r)
{  cout<<"apelle du constructeur :adr="<<this<<endl;
    c.x=x1;
    c.y=y1;
    rayon=r;
}

Cercle::~Cercle()
{
    cout<<"Appel du destructeur :adr="<<this<<endl;
}
ostream& operator <<(ostream& sortie,const Cercle& C1)
{
   sortie<<"le cercle de centre "<<"("<<C1.c.x<<","<<C1.c.y<<")"<<"et de rayon "<<C1.rayon<<endl;
   return sortie;
}

bool Cercle::operator==(const Cercle& C1) const
{
     return((rayon==C1.rayon)&&(c.x==C1.c.x&&c.y==C1.c.y));
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

/*
void Cercle::afficher() const
{ afficher_centre(GetCentre());
   cout<<"et de rayon "<<rayon<<endl;
}*/

/*
 bool Cercle::comparer(const Cercle& C1) const
 {
     return((rayon==C1.rayon)&&(c.x==C1.c.x&&c.y==C1.c.y));
}
*/



/*point::point(unsigned int abs,unsigned int ord)
  {
    m_x=abs;
    m_y=ord;
  }
  point::point(point& p)
  {
   m_x=p.m_x; m_y=p.m_y;
  }
    void point::affiche()
    {
        cout<<"("<<m_x<<","<<m_y<<")"<<endl;
    }
void point::deplace(double dx,double dy)
{
  m_x+=dx;
  m_y+=dy;
}

bool point::operator==(const point& p)
{
    return (m_x==p.m_x && m_y==p.m_y);
}
Cercle::Cercle(unsigned int x,unsigned int y,unsigned int r)
{  cout<<"apelle du constructeur :"<<endl;
   Centre(x,y);
    rayon=r;
}

unsigned int Cercle::GetRayon() const
{
    return rayon;
}

point Cercle::GetCentre() const
{
    return Centre;
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

void Cercle::SetCentre(unsigned int x,unsigned int y)
{ //c.x=c1.x;
  //c.y=c1.y;
    Centre(x,y);
}
*/

/*
void Cercle::afficher() const
{  this->point::affiche();
   cout<<"et de rayon "<<rayon<<endl;
}
*/

/*ostream& operator <<(ostream& sortie,const Cercle& C1)
{
   // afficher_centre(GetCentre());
   sortie<<"le cercle de centre "<<"("<<C1.(c.x)<<","<<C1.(c.y) <<")"<<"et de rayon"<<C1.rayon<<endl;
   return sortie;
}*/
