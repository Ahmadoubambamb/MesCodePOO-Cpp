#include "Liste.h"

Liste::Liste()
{
    debut=courant=nullptr;
}

void Liste::ajouter(Base* e)
{ noeud *m=new noeud;
    m->element=e;
    m->suiv=nullptr;
    if(debut==nullptr)
        debut=m;
    else
    {noeud *tmp=debut;
         while(tmp->suiv)
           tmp=tmp->suiv;
         tmp->suiv=m;
    }
}
Liste::~Liste()
{noeud *p1 , *p2;
    p1=debut;
     while(p1)
     { p2=p1->suiv;

         delete p1;
         p1=p2;
     }
}

void Liste::afficher()
{  Base *pt;
    init();
    while(existe())
    {pt=prochaine();
        pt->afficher();
        cout<<" -> ";
    }
    cout<<"NULL"<<endl;
}

void Liste::init()
{
    courant=debut;
}

Base *Liste::prochaine()
{Base *pt;
    if(courant)
    { pt=courant->element;
        courant=courant->suiv;
        return pt;
    }
    return nullptr;
}

bool Liste::existe()
{
 return (courant!=nullptr);
}
