#include "Magasin.h"

Magasin::Magasin(int m)
{ stock=new Article*[m];
    max=m;
    longueur=0;
}

Magasin::~Magasin()
{
    if(stock) delete [] stock;
}
void Magasin::ajouter(Article *a)
{
    if(longueur<max)
        stock[longueur++]=a;
}

void Magasin::afficher()
{
    for(int i=0;i<longueur;i++)
        cout<<*stock[i]<<endl<<"------------------------------------\n";

}

double Magasin::prix_total()
{  double t=0;
    for(int i=0;i<longueur;i++)
        t+=stock[i]->prix();
    return t;
}
