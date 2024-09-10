#ifndef ENSEMBLESUR_H_
#define ENSEMBLESUR_H_
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
  ensemble& operator<<(int);
 ensemble& operator>>(int );
  int operator%(int );
  void afficher() const;
  ensemble& operator=(const ensemble& );
  void init();
  bool existe();
  int prochain();
};

element* creer_maillon(int);
int somme(ensemble);
#endif
