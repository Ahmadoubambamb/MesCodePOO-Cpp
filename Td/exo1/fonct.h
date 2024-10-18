#ifndef FONCT_H_
#define FONCT_H_
#include <iostream>
#include <iomanip>
using namespace std;
struct Matrice
{int nb_colonne;
  int nb_ligne;
float **element;// l'aadress de la matrice 
};
void *erreur();
Matrice *creer_matrice(int,int);
void detruire_matrice(Matrice *);
void afficher_matrice(Matrice *);
Matrice *transposer(Matrice *);
Matrice *matrice_produit(Matrice *,Matrice *);
#endif
