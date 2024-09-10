#ifndef COMPLEXE_H_
#define COMPLEXE_H_

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

class complexe
{private :
    double x;
    double y;
public:
    complexe(double=0,double=0);
    double reelle() const;
    double imaginaire() const;
    double module() const;
   // complexe ajouter(const complexe&) const;
    complexe operator+ (const complexe&) const;
   // complexe multiplier(const complexe&) const;
    complexe operator* (const complexe&) const;
   // void afficher() const;
    friend ostream& operator<<(ostream&,const complexe&);
};


#endif
