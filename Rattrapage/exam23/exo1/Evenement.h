#ifndef EVENEMENT_H_
#define EVENEMENT_H_

#include <iostream>
#include <string>

using namespace std;

class Date{
private:
    int jour;
    int mois;
    int annee;
public:
    Date(int j,int m,int an){
        jour = j;
        mois = m;
        annee = an;
    };

   friend ostream& operator <<(ostream& out , const Date& d){
       out<<"date : "<<d.jour<<"-"<<d.mois<<"-"<<d.annee<<endl;
       return out;
  };
};

class Evenement{
protected:
    Date date;
    string descrp;
    double cout_base;
    virtual void afficher(ostream&)const;
public:
    Evenement(Date , const string&,double);
    virtual ~Evenement(){};
    friend ostream& operator<<(ostream&,const Evenement&);
    virtual double calcul_cout();
};


#endif
