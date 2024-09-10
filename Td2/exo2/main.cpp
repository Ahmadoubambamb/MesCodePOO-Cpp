#include "Ensemble.h"
int main()
{ ensemble E(10),e(2),e1(10),e2;
   for(int i=0;i<6;i++)
      E.ajouter(rand()%18+1);
    E.afficher();
    cout<<"le cardinal de E est card="<<E.cardinal()<<endl;
   cout<<"suppression de l'element 17"<<endl;
    E.supprimer(17);
    E.supprimer(4);
    E.afficher();
    cout<<""
    f_que_les_pair(E);
   // e1.afficher();
     E.afficher();
     //e2.afficher();
    return 0;
}
