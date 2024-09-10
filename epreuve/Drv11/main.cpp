#include "Liste.h"
int main()
{liste L,L1;
    L.inserer(1,"Bamba");
    L.inserer(2,"Mboup");
    L.inserer(2,"nvn");
    L.inserer(3,"Cheikh-Tidiane");
    L.inserer(4,"Mor-Sine");
   // L.afficher();
    liste l=L;
    l.afficher();
    l.supprimer(2);
    cout<<"\n-------  apres supression de l'element 2  -------\n";
    l.afficher();
    cout<<"==========================\n liste L1:\n"<<endl;
    L1.inserer(4,"Ahmadou");
    L1.inserer(5,"Sow");
    L1.inserer(8,"Thiaw-Laye");
    L1.inserer(10,"Fallou");
    L1.afficher();
   liste U;
   U=L.Union(L1);
    //liste I;
    //I=L.intersection(L1);
    cout<<"\n---------------- la reuinion de L et L1 --------\n";
    U.afficher();
    return 0;
}
