#include "Levee_De_Fonds.h"

LeveeDeFonds::LeveeDeFonds(Date d,const string& th,double
                          c,double frc,double col,double frl):Soiree(d,th,c),
                          frais_com(frc),collecte(col),frais_levee(frl){}


void LeveeDeFonds::afficher(ostream& sorti) const{
    Soiree::afficher(sorti);
    sorti<<"frais de communiction : "<<frais_com<<endl
         <<"font de collecte : "<<collecte<<endl
         << "Frais de levee : "<<frais_levee<<endl;
}

double LeveeDeFonds::calcul_cout(){
    double coutb = Soiree::calcul_cout();
return coutb  + 0.02 * collecte + frais_levee;
}


