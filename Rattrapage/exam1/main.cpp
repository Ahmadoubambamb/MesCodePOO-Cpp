#include "enseignant.h"

int main(){
   Date date(21,11,2021);
    Enseignant E("Faye","David","Doctorat",date);
/*
    cout<<"le diplome :"<<E.getDiplome()<<endl;
    E.setMatiere("Algo1");
    E.setMatiere("POO");
    //E.setMatiere("POO");
    E.setMatiere("analyse");
     E.setMatiere("algebre");
      E.setMatiere("Algo3");
       E.setMatiere("mecanique");
    E.afficher();*/
  E<<"Algo"<<"Algebre"<<"Logique"<<"Math"<<"Archi1";
  //E>>"Algebre";
   E.afficher();
   Enseignant E1 = E;
   E1.afficher();
    return 0;
}
