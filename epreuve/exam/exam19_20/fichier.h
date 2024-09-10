#ifndef FICHIER_H_
#define FICHIER_H_
#include <iostream>
#include <string>
using namespace std;

enum mode_exp{express,normal};
enum format{A3,A4};

class courier
{protected:
    double poids;
    mode_exp mode;
    string adr_exp;
    string adr_dest;
    double montant;
public:
    courier(double,mode_exp,const string&,const string&,double);
    virtual void afficher();
    virtual double calculprix_timbre()=0;
};

class lettre: public courier
{private:
    format form;
public:
    lettre(double ,mode_exp ,const string& ,const string& ,format,double );
    void afficher();
    double calculprix_timbre();
};

class colis: public courier
{private:
    double volume;
public:
    colis(double,mode_exp,const string&,const string&,double,double);
    void afficher();
    double calculprix_timbre();
};

class Boite_aux_Lettre
{private:
   double hauteur;
   double volume_boite;
   int max;
   int longeur;
   courier **c;
public:
    Boite_aux_Lettre(double ,double ,int );
    virtual ~Boite_aux_Lettre();
    void ajouter(courier*);
    void afficher();
};
#endif
