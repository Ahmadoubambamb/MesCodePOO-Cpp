#ifndef ENSEMBLE_H_
#define ENSEMBLE_H_
#include <iostream>
#include <iomanip>
using namespace std;
struct element
{ int val;
  element* suiv;
};

class ensemble
{ private :
    element* debut;
    element* courant;
   int N;
   int nb_element;
public:
  ensemble(int =0);
  ~ensemble();
  ensemble(const ensemble& );
  int cardinal() const;
  void ajouter(int);
  void supprimer(int);
  int contient(int) const;
  void afficher() const;
  ensemble& operator=(const ensemble& );
};

element* creer_maillon(int);

#endif
