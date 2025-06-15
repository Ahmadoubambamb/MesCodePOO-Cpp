
#include "MatchFootball.h"

MatchFootball::MatchFootball(Date d, const string& des,double c,int nbr):Evenement(d,des,c),nbr_ticket(nbr){}

void MatchFootball::afficher(ostream& out) const{
    Evenement::afficher(out);
    out<<"Nombre de tickets : "<<nbr_ticket<<endl;
}

double MatchFootball::calcul_cout(){
    double coutb = Evenement::calcul_cout();
    cout_base = coutb + 0.2 * 1000 * nbr_ticket;
   return cout_base;
}

