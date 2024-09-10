#ifndef MATRICE_H_
#define MATRICE_H_
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
 class matrice
{ private:
  int nb_ligne;
  int nb_colone;
  int **element;
public:
   // matrice () {};
    matrice(int=1 ,int=1);
    matrice(matrice&);
    ~matrice();
    int Getelement(int,int ) const;
    void Setelement(int ,int,int);
    matrice produit(const matrice& );
    void afficher() const;
    matrice& operator=(const matrice& );
    int& operator [](int ,int);
};
#endif
