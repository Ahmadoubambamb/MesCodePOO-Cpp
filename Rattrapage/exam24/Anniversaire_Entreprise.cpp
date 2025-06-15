#include "Anniversaire_Entreprise.h"

AnniversaireEntreprise::AnniversaireEntreprise(Date d,const string& th,
                                               double c,double frcom,double frcon
                                               ,double frani):Soiree(d,th,c),
                                               frais_com(frcom),
                                               frais_contacts(frcon),
                                               frais_anniversaire_entreprise(frani){}

void AnniversaireEntreprise::afficher(ostream& sortie) const{
    Soiree::afficher(sortie);
    sortie<<"frais de communication : "<<frais_com<<endl
          <<"frais de contacts : "<< frais_contacts<<endl
          <<"frais anniversaire entreprise "
          <<frais_anniversaire_entreprise
          <<endl;
}

double AnniversaireEntreprise::calcul_cout(){
    double coutb = Soiree::calcul_cout();
return coutb + frais_anniversaire_entreprise + frais_contacts + frais_com;
}


