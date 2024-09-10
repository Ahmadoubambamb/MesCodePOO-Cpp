#ifndef TEXT_H_
#define TEXT_H_
#include "chaine.h"
class Textformater : public str
{private:
    bool italic;
    bool gras ;
    char *couleur;
public:
     Textformater();
     Textformater(const char* ,bool,bool,const char*);
     Textformater(const str& ,bool,bool,const char*);
     Textformater(Textformater& );
     ~Textformater();
     Textformater& operator=(Textformater&);
     Textformater& operator=(str&);
     void en_italique();
     void en_gras();
     void colore(const char*);
     void afficher();
};


#endif
