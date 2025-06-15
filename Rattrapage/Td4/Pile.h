#ifndef PILE_H_
#define PILE_H_

template <class T , int n> class Pile{
    private:
    int dim;
    T *adr;
    int nelem;
    public:
    Pile();
    ~Pile();
    void push(T);
    void pop();
    T top() const;
    bool estVide()const;
};

template <class T, int n> Pile<T,n>::Pile(){
    dim = n ;
    adr  = new T[dim];
    nelem = 0;
}

template <class T,int n> Pile<T,n>::~Pile(){
    if(adr != NULL)
    delete [] adr;
}

template <class T,int n> void Pile<T,n>::push(T e){
    if(nelem < dim)
     adr[nelem++] = e;
     else
     cout<<"Pile Plein";
}

template <class T, int n> void Pile<T,n>::pop(){
    if(!estVide())
    nelem--;
    else
    cout<<"Pile vide ";
}
template <class T,int n> bool Pile<T,n>::estVide(){
    return nelem == 0;
}

template <class T,int n> T Pile<T,n>::top() const{
    if(!estVide())
     return adr[nelem - 1];
     else
     cout<<"Pile vide ";
}

#endif