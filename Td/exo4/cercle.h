#ifndef CERCLE_H_
#define CERCLE_H_
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
    bool operator ==(const Cercle& ) const;
   friend ostream& operator <<(ostream& ,const Cercle&);
};

void afficher_centre(Centre);
void dessiner(Cercle);
#endif


/*class point
{private:
   unsigned int m_x;
   unsigned int m_y;
public:
  point(unsigned int abs,unsigned int ord );
  point(point&);
  void affiche();
 // bool operator==(const point&);
  void deplace(unsigned int dx, unsigned int dy);
};

const int pi=3.14;

class Cercle
{private:
    point Centre;
    unsigned int rayon;
public:
    Cercle:(unsigned int=0,unsigned int=0,unsigned int=0);
    unsigned int GetRayon() const;
    point GetCentre() const;
    unsigned int perimetre() const;
    unsigned int surface() const;
    void SetRayon(unsigned int);
    void SetCentre(point);
   // bool comparer(const Cercle&) const;
    bool operator ==(const Cercle& ) const;
   // void afficher() const;
   friend ostream& operator <<(ostream& ,const Cercle&);
};*/
