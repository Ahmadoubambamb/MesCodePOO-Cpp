#ifndef DOCUMENT_H_
#define DOCUMENT_H_
#include <iostream>
#include <cstring>
using namespace std;
class document
{   protected:
    char nom_doc[30];
    int nb_mcles;
    char** motcles;
public:
    document(char*);
   ~document();
   void ajouter(const char*);
   void afficher();
};


#endif
