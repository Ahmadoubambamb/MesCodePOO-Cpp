#ifndef MATCHFOOTBALL_H_
#define MATCHFOOTBALL_H_
#include "Evenement.h"

class MatchFootball : public Evenement{
private:
    int nbr_ticket;
public:
    MatchFootball(Date,const string&,double,int);
    virtual ~MatchFootball(){};
    void afficher(ostream&) const;
    double calcul_cout();
};


#endif
