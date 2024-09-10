#ifndef INDIVIDU_H_
#define INDIVIDU_H_
#include "CBase.h"
class individu:public Base
{private:
    int m_id;
    string m_prenom;
    string m_nom;
public:
    individu(int id, string& prenom,string& nom)
    { cout<<"appel du construteur d'individu adr="<<this<<endl;
        m_id=id;
        m_prenom=prenom;
        m_nom=nom;
    };
    individu(individu& i)
    { m_id=i.m_id;
     m_nom=i.m_nom;
     m_prenom=i.m_prenom;
    };
   virtual ~individu(){cout<<"appel du destructeur de la class individu adr="<<this<<endl;};
   virtual  void afficher(){
    cout<<"id individu :"<<m_id<<"\tprenom:"<<m_prenom<<"\tnom:"<<m_nom<<endl;
};
   virtual  int clef()
   {return m_id;};
   individu& operator=(individu& i)
   { m_id=i.m_id;
     m_nom=i.m_nom;
     m_prenom=i.m_prenom;
     return *this;
   };
};

#endif
