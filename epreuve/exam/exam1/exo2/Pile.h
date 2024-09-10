#ifndef PILE_H_
#define PILE_H_
#include <iostream>
using namespace std;

template <class T,int n> class pile
{private:
    T *adr;
    int taille;
public:
    pile();
   // pile(const pile&);
    ~pile();
    void push(T);
    T pop();
    T top();
     bool EstVide();
     void afficher();
};

template <class T,int n> pile<T,n>::pile()
{ cout<<"appel du constructeur ! adr="<<this<<endl;
    adr=new T[n];
    if(adr==NULL)
    { cerr<<"Allocation echec !";
        exit(-1);
    }
    taille=0;
}
template <class T,int n> bool pile<T,n>::EstVide()
{return(taille==0);}
template<class T,int n> pile<T,n>::~pile()
{ if(!EstVide())
    delete adr;
}

template<class T,int n> void pile<T,n>::push(T x)
{if(taille==n)
    {cerr<<"Pile pleine ";
      return ;}
      adr[taille++]=x;
}

template<class T,int n> T pile<T,n>::pop()
{  if(this->EstVide())
   {cerr<<"Pile vide ";
       exit(-1);}
    T d=adr[taille-1];
    taille --;
    return d;
}

template<class T,int n> T pile<T,n>::top()
{
    return adr[taille-1];
}

//template <class T,int n> pile<T,n>::pile(pile& P)
//{ taille=P.taille;
    //adr=new T[n];
    //pile p1(n);
    //int i,m=0;
    //for(i=0;i<taille;i++)

//}

template<class T,int n> void pile<T,n>::afficher()
{
    for(int i=taille;i>0;i--)
        cout<<adr[i]<<endl;
}
#endif
