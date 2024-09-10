#include <iostream>
#include <string>
#include "Liste.h"
liste::liste(int max)
{cout<<"creation de liste vide de "<<n<<" objet :"<<endl;
    mp=new Base*[max];
    n_max=max;
    n=0;
}

void liste::ajout(Base* m)
{  if(n< n_max)
    mp[n++]=m;
}

liste::~liste()
{
    delete [] mp;
}

void liste::afficher()
{for(int i=0;i<n;i++)
{ mp[i]->afficher();
    cout<<"--> ";}
    cout<<endl;
}
