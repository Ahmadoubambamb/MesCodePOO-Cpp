#include "Ensemble.h"

element* creer_maillon(int x)
{ element* m=new element;
    m->val=x;
    m->suiv=NULL;
    return m;
}
ensemble::ensemble(int n)
{  cout<<"appel du constructeur: adr="<<this<<endl;
    debut=NULL;
    courant=NULL;
    N=n;
    nb_element=0;
}

int ensemble::cardinal() const
{ /*element *temp=debut; int i=0;
    while(temp)
    { i++;
        temp=temp->suiv;
    }
    return i;*/
    return nb_element;
}

void ensemble::ajouter(int x)
{ if( N==nb_element ||this->contient(x))
    {cout<<"element existant ou ensemble plein!! "<<endl;
        return;
    }
      element *m=creer_maillon(x);
      if(debut==NULL)
      { debut=courant=m;
        }
        else{
       courant->suiv=m;
       courant=m;}
       nb_element++;
}

void ensemble::supprimer(int x)
{ element *tmp=debut;
    element *prec;
    if(debut->val==x) {debut=debut->suiv; delete tmp;}
    else{
       while(tmp!=NULL && tmp->val!=x)
       { prec=tmp;
         tmp=tmp->suiv;
       }
       if(tmp==NULL)
       {cout<<"element a supprimer n'y est pas !!"<<endl;
           return;
       }
        prec->suiv=tmp->suiv;
        if(prec->suiv==NULL) courant=prec;
         delete tmp;
      }
      nb_element--;
}

int ensemble::contient(int x) const
{
    element* tmp=debut;
    while(tmp)
    {if(tmp->val==x)
        return 1;
        tmp=tmp->suiv;
    }
    return 0;
}

void ensemble::afficher() const
{ element* tmp=debut->suiv;
    cout<<"["<<debut->val;
    while(tmp)
    { cout<<","<<tmp->val;
        tmp=tmp->suiv;
    }
    cout<<"]"<<endl;
}

ensemble::~ensemble()
{ cout<<"appel du destructeur :adr="<<this<<endl;
    element* tmp=debut;
    while(debut)
    { debut=debut->suiv;
        delete tmp;
        tmp=debut;
    }
}

ensemble::ensemble(const ensemble& e)
{  cout<<"appel du constructeur de copie: adr="<<this<<endl;
    element *m, *tmp=e.debut;
   debut=courant=NULL;
   N=e.N; nb_element=e.nb_element;
   while(tmp)
   { m=creer_maillon(tmp->val);
       if(debut==NULL)
           debut=courant=m;
       else
       {courant->suiv=m;
           courant=courant->suiv;
       }
       tmp=tmp->suiv;
   }
}

ensemble& ensemble::operator=(const ensemble& e)
{ if(this==&e) return *this;
    element *tmp=debut;
    while(tmp!=NULL)
    {debut=debut->suiv;
        delete tmp;
        tmp=debut;
    }
    debut=NULL;
    courant=NULL;
    N=e.N; nb_element=e.nb_element;
    tmp=e.debut;
    element *m;
    while(tmp)
    {m=creer_maillon(tmp->val);
        if(debut==NULL)
            debut=courant=m;
        else
        {courant->suiv=m;
           courant=m;
        }
       tmp=tmp->suiv;
    }
  return *this;
}
