#include "Agenda.h"

Agenda::Agenda(int max){
    nmax = max;
    even = new Evenement*[nmax];
    if(even == nullptr)
       { cerr<<"erreur d'allocation \n";
           exit(-1);
    }
    longueur = 0;
}

Agenda::~Agenda(){
    if(even) delete [] even;
}

void Agenda::ajouter(Evenement *e){
    if(longueur < nmax)
        even[longueur++] = e;
}

void Agenda::afficher()const{
    for(int i = 0; i < longueur ; i++)
       { cout<<*even[i];
        cout<<"=====================================\n";
    }
}

double Agenda::cout_total(){
    double coutT = 0.0;
    for(int i = 0; i < longueur ; i++)
        coutT += even[i]->calcul_cout();
    return coutT;
}
