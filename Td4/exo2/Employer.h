#ifndef EMPLOYER_H_
#define EMPLOYER_H_
#include <iostream>
#include <string>
#include "Individu.h"
class employer:public individu
{private:
    string competence;
public:
  employer(int id,string& prenom,string& nom,string& comp):individu(id,prenom,nom)
  {competence=comp;};
  employer(employer& e):individu(e)
  {competence=e.competence;
  };
 virtual ~employer(){cout<<"destructeur de employer:";};
 virtual void afficher()
 {individu::afficher();
   cout<<"sa competence:"<<competence<<endl;
 };
  int clef() {return(individu::clef());};
  employer& operator=(employer& );
};

employer& employer::operator=(employer& e)
{ individu *ad1,*ad2;
      ad1=this; ad2=&e;
      *ad1=*ad2;
      competence=e.competence;
      return *this;
}
#endif
