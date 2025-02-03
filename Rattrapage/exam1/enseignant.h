#ifndef ENSEIGNANT_H_
#define ENSEIGNANT_H_

#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;
 class Date{
public:
    int jour;
    int mois;
    int annee;
    Date(int j , int m , int a){
        jour = j;
        if(m <= 12)
          mois = m;
         else{
             cout<<"le mois doit etre inferieur ou egal a 12"<<endl;
             exit(1);
        }
        annee = a;
    };
    Date (){};
    Date(const Date& date){
        jour = date.jour;
        mois = date.mois;
        annee = date.annee;
    };
    void afficherDate() const{
        cout << "Date de Naissance :"
             << jour << "-"<<mois<<"-"<<annee<<endl;
    };
    Date& operator =(const Date& date){
        if(this == &date) return *this;
         jour = date.jour;
        mois = date.mois;
        annee = date.annee;
        return *this;
    };
};

class Enseignant
{private :
    char *nom;
    char *prenom;
    char *diplome;
    Date date;
    char **matiere;
public:
    Enseignant(const char *,const char* ,const char *,Date&);
    Enseignant(const Enseignant&);
  ~ Enseignant();
  void afficher() const;
  char * getDiplome() const;
  char *get_ieme_matiere(int ) const;
  //void  setMatiere(const char *);
 // void supprimerMatiere(const char * );
  //bool test(const char *);
 Enseignant& operator <<(const char*);
 Enseignant& operator >>(const char* );
 bool operator %(const char *);
 Enseignant& operator =(const Enseignant&);
};
#endif
