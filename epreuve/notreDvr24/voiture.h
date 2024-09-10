#ifndef VOITURE_H_
#define VOITURE_H_
#include <iostream>
#include <string.h>
using namespace std;

struct Voiture{
const char cle[30],marque[30],gamme[30],modele[30];
char *presentation;
int annee;
};

class societe{
private:
 int nbml;
 int nbmc;
 Voiture ***V;
public:
 societe(int, int);
 ~societe();
 void inserer(Voiture);
 void supprimer(char *);
 bool rechercher(char *);
 int h(char *);
 void afficher() const;
};

#endif
