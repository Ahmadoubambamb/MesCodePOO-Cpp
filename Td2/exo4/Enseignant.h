#ifndef ENSEIGNANT_H_
#define ENSEIGNANT_H_
#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;
class Enseignants
  { private:
    char nom[40];
    char prenom[40];
    char diplome[40];
    char **matiere;
    int nb_matiere;
public:
    Enseignants();
    Enseignants(char* ,char*,char*);
    Enseignants(Enseignants& );
    ~Enseignants();
     char* GetNom();
     char* GetPrenom();
     char* GetDiplome();
     void SetMatiere(char* );
    void afficher() const;
    Enseignants& operator=(const Enseignants& );
};

void nom_diplome_prenom(Enseignants);
#endif
