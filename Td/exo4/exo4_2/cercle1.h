#ifndef CERCLE1_H_
#define CERCLE1_H_
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

const int pi=3.14;
struct Centre
{ unsigned int x;
  unsigned int y;
};
class Cercle
{private:
    unsigned int rayon;
    Centre c;
public:
    Cercle(unsigned int=0,unsigned int=0,unsigned int=0);
    ~Cercle();
    unsigned int GetRayon() const;
    Centre GetCentre() const;
    unsigned int perimetre() const;
    unsigned int surface() const;
    void SetRayon(unsigned int);
    void SetCentre(Centre);
    bool comparer(const Cercle&) const;
    void afficher() const;
};

void afficher_centre(Centre);
#endif
