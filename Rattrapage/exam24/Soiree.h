#ifndef SOIREE_H_
#define SOIREE_H_

#include <iostream>
#include <string>

using namespace std;

class Date{
private:
    int jour;
    int mois;
    int annee;
public:
    Date(int j,int m,int a):jour(j),mois(m),annee(a){};
    friend ostream& operator<<(ostream& out,const Date& d){
        out<<"Date : "<<d.jour<<"-"<<d.mois<<"-"<<d.annee<<endl;
        return out;
    };
};

class Soiree{
protected:
    string theme;
    Date date;
    double cout_base;
    virtual void afficher(ostream&) const;
public:
    Soiree(Date ,const string&,double);
    virtual ~Soiree(){};
    friend ostream& operator<<(ostream& ,const Soiree&);
    virtual double calcul_cout();
};

#endif
