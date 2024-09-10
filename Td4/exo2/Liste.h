#ifndef LISTE_H_
#define LISTE_H_
#include "Entrepise.h"
class liste
{private:
    int n_max;
    int n;
    Base **mp;
public:
    liste(int );
    void ajout(Base *);
    virtual ~liste();
    void afficher();
};

#endif
