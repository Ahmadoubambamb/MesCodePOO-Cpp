#ifndef COMPLEXE_H_
#define COMPLEXE_H_

#include "Levee_de_fonds.h"
#include "Anniversaire_Entreprise.h"

class Complexe{
private:
    int nmax;
    int longueur;
    Soiree **soire;
public:
  Complexe(int );
  virtual ~Complexe();
  void ajouter(Soiree *);
  void afficher() const;
  double gain_total();
};

#endif
