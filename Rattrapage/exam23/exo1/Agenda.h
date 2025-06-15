#ifndef AGENDA_H_
#define AGENDA_H_
#include "CombaLute.h"
#include "MatchFootball.h"
class Agenda{
private:
    int longueur;
    int nmax;
    Evenement **even;
public:
    Agenda(int );
    virtual ~Agenda();
    void ajouter(Evenement *);
    void afficher()const;
    double cout_total();
};

#endif
