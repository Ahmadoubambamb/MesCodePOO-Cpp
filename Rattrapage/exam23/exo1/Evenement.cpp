#include "Evenement.h"

Evenement::Evenement(Date d , const string& des , double c):date(d),descrp(des),cout_base(c){}

void Evenement::afficher(ostream& out) const {
    out<<date
       <<"sujet : "<<descrp<<endl
       <<"cout de base : "<<cout_base<<endl;
}

ostream& operator<<(ostream& out , const Evenement& e){
    e.afficher(out);
    return out;
}

double Evenement::calcul_cout(){
    return cout_base;
}
