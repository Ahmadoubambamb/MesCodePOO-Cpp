#ifndef PILE_H
#define PILE_H
#include <iostream>
#include <iomanip>
using namespace std;

template <class T,int n> class Pile{
private:
    int nelem;
    T *adr;
public:
    Pile();
    void push(T);
    void pop();
    T top();
     bool est_Vide();
     void afficher();
} ;

template <class T,int n> Pile<T,n>::Pile(){
    adr = new int[n];
    if(adr == NULL)
        exit(-1);
    nelem = 0;
}

template <class T,int n> void Pile<T,n>::push(T element){
    if(nelem == n)
       { cout<<"pile Plein"<<endl;
           exit(-1);
      }
     adr[nelem++] = element;
}

template <class T,int n> void Pile<T,n>::pop(){
    if(est_Vide())
    {cout<<"erreur Pile vide ";
        exit(-1);
    }
    T element = adr[nelem-1];
    nelem--;
    return element;
}

template <class T,int n> T Pile<T,n>::top(){
    if(est_Vide())
    {cout<<"erreur Pile vide ";
        exit(-1);
    }
    return adr[nelem - 1];
}

template <class T,int n> bool Pile<T,n>::est_Vide(){
    return (nelem == 0);
}


template <class T,int n> void Pile<T,n>::afficher(){
    for(int i = 0; i < nelem ;i++)
        cout<<adr[i]<<"  ";
}

#endif
