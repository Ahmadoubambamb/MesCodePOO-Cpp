#include "point2D.h"
int main()
{/* vecteur v(3),w(2),z(3);
    v.composante(1,7);
    v.composante(0,6);
    affiche_vect(v);
   w=v;
   affiche_vect(w);
    v=v;
    affiche_vect(v);*/
    pointcol pc(5,2,"Noir");
    pc.afficher();
    point p(1,2) ,*ad;
    int rep ;
    cout<<"point colorer (0) point non colorer (1) "<<endl;
     cin>>rep;
    switch(rep)
    { case 0: ad=&pc; break;
        case 1: ad=&p; break;
        default: ad=NULL; break;
    }

    if(ad) ad->afficher();
    return 0;
}
