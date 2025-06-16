#ifndef SOCIETE_H_
#define SOCIETE_H_

#include <iostream>
#include <cstring>
using namespace std;

struct voiture{
    char cle[50] ;
    char marque[50] ;
    char gamme[50] ;
    int annee;
    char modele[50];
    char presentation[50];
};

class Societe{
private:
    int nbml;
    int nbmc ;
    voiture ***hash ;
public:
    Societe(int , int );
    Societe(const Societe& );
    ~Societe() ;
    Societe& operator<<(voiture *v) ;
    Societe& operator>>(const char *);
    bool operator%(const char *) ;
    int h(const char *) ;
    void afficher() const;
};



#endif
