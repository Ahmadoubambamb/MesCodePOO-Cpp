#ifndef MAGASIN_H_
#define MAGASIN_H_
#include "ArticleLocal.h"
#include "ArticleImporte.h"

class Magasin
{private:
    int max;
    int longueur;
    Article **stock;
public:
    Magasin(int);
    virtual ~Magasin();
    void ajouter(Article *);
    void afficher();
    double prix_total();
};

#endif
