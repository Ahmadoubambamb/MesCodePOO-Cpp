#include "Pile.h"

int main()
{ pile p,p1;
  p.empiler(2);
     p.empiler(8);
      p.empiler(1);
       p.empiler(5);
        p.empiler(4);
         p.empiler(24);
         p1.empiler(3);
         p1.empiler(4);
         cout<<"la pile p:";
   p.afficher();
    p.depiler();
   cout<<"la pile p1:"; p1.afficher();
   p1.depiler(); p1.depiler(); p1.depiler();
   cout<<"le sommet de la pile P est:"<<p.Sommet()<<endl;
   pile p3=p;
   cout<<"affichage du copie:"; p3.afficher();
    return 0;
}
