#include "magasin.h"

Magasin::Magasin(int n){
    max = n;
    stock = new Article*[n];
    longueur = 0;
}

Magasin::~Magasin(){
    if(stock) delete [] stock;
}

void Magasin::ajouter(Article *s){
    if(longueur < max)
        stock[longueur++] = s;
}

void Magasin::afficher() const{
    for(int i = 0;i<longueur;i++)
        cout<<*stock[i]<<endl<<------------------------------<<endl;
}

double Magasin::prix_total(){
    double total = 0.0;
    for(int i = 0;i<longueur;i++)
        total+=stock[i]->prix();
    return total;
}
