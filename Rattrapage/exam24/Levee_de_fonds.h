#ifndef LEVEE_DE_FONDS_H_
#define LEVEE_DE_FONDS_H_

#include "Soiree.h"

class LeveeDeFonds : public Soiree{
private:
  double frais_com;
  double collecte;
  double frais_levee;
public:
    LeveeDeFonds(Date,const string&,double,double,double,double);
    virtual ~LeveeDeFonds(){};
    void afficher(ostream&) const;
    double calcul_cout();
};

#endif
