#ifndef COMBALUTE_H_
#define COMBALUTE_H_
#include "Evenement.h"
class CombaLute:public Evenement{
private:
    double frais;
    double dommage;
public:
    CombaLute(Date , const string&,double,double,double);
    virtual ~CombaLute(){};
    void afficher(ostream&) const;
    double calcul_cout();
};

#endif
