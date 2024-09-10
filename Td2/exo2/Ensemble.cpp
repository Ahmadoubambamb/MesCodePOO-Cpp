#include "Ensemble.h"

ensemble::ensemble(int N)
{   cout<<"appel du constructeur de adr="<<this<<endl;
    if(element=new int[N]){
    max=N;
    card=0;
    }
    else exit(-1);
}

int ensemble::cardinal() const
{
    return card;
}

void ensemble::ajouter(int x)
{if(card==max||(*this).contient(x))
{
    cout<<"ensemble max atteint ou element exitant"<<endl;
    return;
}
  card++;
  element[card-1]=x;
}

void ensemble::afficher() const
{
    for(int i=0;i<card;i++)
    { if(i==0) cout<<"[";
        else cout<<",";
            cout<<element[i];
    }
    cout<<"]"<<endl;
}
void ensemble::supprimer(int x)
{ int i=0;
    while(i<card && element[i]!=x)
        i++;
    if(i==card)
    {cerr<<"l'element a supprimer n'y est pas!!"<<endl;
        return;
    }
    for(int j=i;j<card-1;j++)
        element[j]=element[j+1];
}

int ensemble::contient(int x) const
{
   for(int i=0;i<card;i++)
        if(element[i]==x)
            return 1;
        return 0;
}

ensemble::~ensemble()
{   if(element)
   { cout<<"appel du destructeur de adr="<<this<<endl;
     delete element;
   }
}

ensemble::ensemble(const ensemble& E)
{  cout<<"appel du constructeur de copie de adr="<<this<<endl;
    max=E.max;
    card=E.card;
    element=new int[max];
    for(int i=0;i<card;i++)
        element[i]=E.element[i];
}

void f_que_les_pair(ensemble E)
{ int n=E.cardinal(),i;
    cout<<"les nombre paire de cette ensemble:";
   for(i=0;i<n;i++)
       if(E.element[i]%2==0)
           cout<<E.element[i]<<"  ";
    cout<<endl;
}

