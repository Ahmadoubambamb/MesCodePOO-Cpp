#ifndef VOITURE_H_
#define VOITURE_H_
#include <cstring>
#include <iostream>
using namespace std;
struct voiture{
    char cle[255];
    char marque[255];
    char gamme[255];
    char modele[255];
    char presentation[255];
    int annee;
};

struct noeud{
    voiture *v;
    noeud *suiv;
};

class societe
{
private:
    int max;
    int courant;
    noeud **debut;
public:
    societe(int);
    ~societe();
    societe(const societe&);
    void insertion(voiture *);
    void supprimer(char *);
    bool rechercher(char *);
    void afficher() const;
    int h(char *);
};

voiture *creer_v(const char*,const char*,const char*,const char*,const char*,int);

#endif
