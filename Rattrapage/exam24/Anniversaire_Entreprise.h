#ifndef ANNIVERSAIRE_ENTREPRISE_H_
#define ANNIVERSAIRE_ENTREPRISE_H_

#include "Soiree.h"

class AnniversaireEntreprise : public Soiree{
private:
    double frais_com;
    double frais_contacts;
    double frais_anniversaire_entreprise;
public:
    AnniversaireEntreprise(Date,const string&,double,double , double,double);
    virtual ~AnniversaireEntreprise(){};
    void afficher(ostream&) const;
    double calcul_cout();
};


#endif
