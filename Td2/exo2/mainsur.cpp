#include "Ensemblesur.h"

int main()
{ ensemble E(10),e(2),e1(10),e2;
   E<<2<<10<<3;
   E.afficher();
   E>>10>>2;
   E.afficher();
   if(E%3!=-1)
      cout<<"3 est dans E:"<<endl;
   else
      cout<<"3 n'y est pas:"<<endl;
   E<<3;
   E<<4<<7<<8;
   e=E;
   e.afficher();
   e1<<2<<4<<7<<9<<1;
   ensemble e3=e1;
    e2=e1+E;
    cout<<"la reunion :"<<endl;
   e2.afficher();
   e2=e1*e;
    cout<<"l'intersection e2:"<<endl;
     e2.afficher();
     cout<<"la somme des element de l'ensemble e2="<<e2.somme()<<endl;
    return 0;
}
