#include "Ensemblesur.h"

ensemble::ensemble(int N)
{
    if(element=new int[N]){
    max=N;
    card=0;
    cout<<"appel du constructeur de adr="<<this<<endl;
    }
    else exit(-1);
}

int ensemble::cardinal() const
{
    return card;
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

ensemble::~ensemble()
{   if(element){
    cout<<"appel du destructeur de adr="<<this<<endl;
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
   for(i=0;i<n;i++)
       if(E.element[i]%2==0)
           cout<<E.element[i]<<"  ";
    cout<<endl;
}

ensemble& ensemble::operator<<(int x)
{
    if(card==max||(*this)%x)
{
    cout<<"ensemble max atteint ou element exitant"<<endl;
    return (*this);
}
  card++;
  element[card-1]=x;
  return (*this);
}

ensemble& ensemble::operator>>(int x)
{int i=0;
    while(i<card && element[i]!=x)
        i++;
    if(i==card)
    {cerr<<"element inexistant !!"<<endl;
    }
    else{
      for(int j=i;j<card;j++)
          element[j]=element[j+1];
      card--;}
    return (*this);
}

int ensemble::operator%(int x)
{
   for(int i=0;i<card;i++)
        if(element[i]==x)
            return 1;
        return 0;
}

ensemble& ensemble::operator=(const ensemble& e)
{ if(this==&e) return (*this);
    delete element;
    max=e.max;
    card=e.card;
    element=new int[max];
     for(int i=0;i<e.card;i++)
         element[i]=e.element[i];
    return (*this);
}

ensemble ensemble::operator+(const ensemble& e)
{ ensemble e1(max+e.max);
    int i;
    for(i=0;i<card;i++)
        e1<<(element[i]);
    for(i=0;i<e.card;i++)
        e1<<(e.element[i]);
    return e1;
}

ensemble ensemble::operator*(const ensemble& e)
{ int i,j,min;
    (card>e.card ? min=e.card:min=card);
    ensemble e1(min);
     for(i=0;i<card;i++)
     { for(j=0;j<e.card;j++)
          if(element[i]==e.element[j])
          {e1<<element[i]; break;}
     }
    return e1;
}

void ensemble::init()
{
    courant=0;
}

bool ensemble::existe()
{
    return (courant<card);
}

int ensemble::prochain()
{
    return element[courant++];
}

int ensemble::somme()
{  int sum=0;
    init();
    while(existe())
        sum+=prochain();
    return sum;
}
