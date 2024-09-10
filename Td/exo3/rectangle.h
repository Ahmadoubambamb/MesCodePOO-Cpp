#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include <iostream>
#include <iomanip>
using namespace std;

class Rectangle
{private:
    unsigned int Haut;
    unsigned int larg;
public:
    Rectangle(unsigned int=0,unsigned int=0);
    ~Rectangle();
    unsigned int GetLargeur() const;
    unsigned int GetHauteur() const;
    unsigned int perimetre() const;
    unsigned int surface() const;
    void SetHauteur(unsigned int);
    void SetLargeur(unsigned int);
   bool compare(const Rectangle&) const;
    void afficher() const;
};

void dessiner(Rectangle& );

#endif
