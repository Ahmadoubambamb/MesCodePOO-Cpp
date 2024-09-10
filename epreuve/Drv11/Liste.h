#ifndef LISTE_H_
#define LISTE_H_
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
struct noeud{
    int cle;
    string chaine;
    noeud *suivant;
};

class liste
{private:
    noeud *debut;
public:
    liste();
    liste(const liste&);
    ~liste();
    void inserer(int, const string&);
    void supprimer(int );
    bool rechercher(int);
    liste Union(const liste&);
    liste intersection(const liste&);
    liste difference(const liste&);
    void afficher();
};

#endif
