#include "Agenda.h"

int main(){
    Agenda A(10);
    Evenement e1(Date(12,10,2024),"fete d'anniversaire",500000);
    Evenement e2(Date(12,06,2024),"Association des architect",1000000);

    CombaLute c1(Date(21,11,2023),"Modou Lo Vs EUmeu",100000,400000,50000);
    MatchFootball m1(Date(21,11,2023),"Barca vs real",110000,4000);
    // cout<<e1<<endl;
    // cout<<e2<<endl;
    // cout<<c1<<endl;
    // cout<<m1<<endl;

     A.ajouter(&e1);
      A.ajouter(&e2);
       A.ajouter(&c1);
        A.ajouter(&m1);
         A.afficher();
         cout<<"Le cout total de l'Agenda : "<<A.cout_total();
    return 0;
}
