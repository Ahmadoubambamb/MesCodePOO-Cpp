#ifndef VOITURE_H_
#define VOITURE_H_
#include <iostream>
#include <cstring>
using namespace std;
struct voiture{
    char cle[30];
    char marque[30];
    char gamme[30];
    char modele[30];
    char *presentation;
    int annee;
};

struct noeud{
    voiture *v;
    noeud *suiv;
};

class table
{private:
    int max;
    noeud **tab;
    int taille_courant;
public:
    table(int );
    ~table();
    table(const table&);
    void inserer(voiture* );
    void supprimer(char *);
    bool rechercher(char *);
    unsigned int h(char *);
    table& operator =(const table&);
    void afficher();
};

voiture *creer_v(const char*,const char*,const char*,const char*,const char*,int);

#endif
