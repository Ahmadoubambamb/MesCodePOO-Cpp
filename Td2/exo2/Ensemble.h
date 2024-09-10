#ifndef ENSEMBLE_H_
#define ENSEMBLE_H_
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

class ensemble
{private:
    int max;
    int card;
    int *element;
public:
    ensemble(int=0);
    ensemble(const ensemble&);
    int cardinal() const;
    void ajouter(int) ;
   void supprimer(int);
   int contient(int) const;
    ~ensemble();
    void afficher() const;
    friend void f_que_les_pair(ensemble);

};

//ensemble f_que_les_pair(const ensemble );
#endif
