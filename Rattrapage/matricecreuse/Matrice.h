#ifndef MATRICE_H_
#define MATRICE_H_
#include <iostream>
#include <string>
#define Ligne 3
using namespace std;

class MatriceCreuse{
private :
    int *tab[Ligne];
    int nbcol;
public:
    MatriceCreuse(int **,int ,int);
  //  MatriceCreuse(const MatriceCreuse&);
    ~MatriceCreuse();
    void afficher() const;
};

#endif
