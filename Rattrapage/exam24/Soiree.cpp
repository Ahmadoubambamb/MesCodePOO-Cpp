#include "Soiree.h"

Soiree::Soiree(Date d,const string& th,double coutb):date(d),theme(th),cout_base(coutb){}

void Soiree::afficher(ostream& sortie) const{
    sortie<<date
          <<"thematique : "<<theme<<endl
          <<"frais de location de sall : "<<cout_base<<endl;
}

ostream& operator<<(ostream& sortie, const Soiree& s){
    s.afficher(sortie);
    return sortie;
}

double Soiree::calcul_cout(){
    return cout_base;
}
