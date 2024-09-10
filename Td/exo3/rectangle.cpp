#include "rectangle.h"

Rectangle::Rectangle(unsigned int H,unsigned int l)
{  cout<<"creation d'un objet rectangle d'adress="<<this<<" de  ";
    cout<<"hauteur="<<H<<" et "<<" de largeur="<<l<<endl;
   Haut=H;
   larg=l;
}
Rectangle::~Rectangle()
{
    cout<<"destruction d'un objet rectangle d'adress="<<this<<endl;
}
unsigned int Rectangle::GetLargeur() const
{
    return larg;
}

unsigned int Rectangle::GetHauteur() const
{
    return Haut;
}

unsigned int Rectangle::perimetre() const
{
    return 2*(Haut+larg);
}

unsigned int Rectangle::surface() const
{
    return Haut*larg;
}

void Rectangle::SetHauteur(unsigned int H)
{
    Haut+=H;
}

void Rectangle::SetLargeur(unsigned int L)
{
    larg+=L;
}

bool Rectangle::compare(const Rectangle& c) const
{
    return ((Haut==c.Haut)&&(larg==c.larg));
}

void Rectangle::afficher() const
{
    cout<<"la largeur est :"<<Haut<<endl;
    cout<<"la hauteur est:"<<larg<<endl;
}

void dessiner(Rectangle &r)
{ int i,j;
    for(i=0;i<r.GetHauteur();i++)
        cout<<"--";
    cout<<endl;
    for(j=0;j<r.GetLargeur();j++)
    { cout<<"|";
         for(i=0;i<r.GetHauteur()-1;i++)
        cout<<"  ";
         cout<<"|";
          cout<<endl;
    }
     for(i=0;i<r.GetHauteur();i++)
        cout<<"--";
    cout<<endl;
}
