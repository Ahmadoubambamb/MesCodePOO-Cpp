#include "Ensemble.h"
int main()
{ ensemble e(4),e1(5),e2;
    e.ajouter(3);
     e.ajouter(8);
     e.ajouter(2);
      e.ajouter(7);
       e.ajouter(5);
       e.ajouter(9);
       cout<<"e=";
       e.afficher();
       cout<<"le cardinal de e est:"<<e.cardinal()<<endl;
       e.supprimer(7);
       e.supprimer(9);
       e.supprimer(3);
       cout<<"apres suppresion e:"<<endl;
       e.afficher();
       cout<<"e1=";
       e1.ajouter(3);
       e1.afficher();
       ensemble e3=e1;
       e1=e2=e;
       cout<<"e1=e :";
       e1.afficher();
    return 0;
}
