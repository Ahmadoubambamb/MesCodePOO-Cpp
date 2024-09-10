#ifndef LISTE_H_
#define LISTE_H_
#include "Base.h"
struct noeud{
    Base *element;
    noeud *suiv;
};

class Liste
{private:
    noeud *debut;
    noeud *courant;
public:
    Liste();
    virtual ~Liste();
    void ajouter(Base*);
    void afficher();
    void init();
    Base* prochaine();
    bool existe();
};
#endif
