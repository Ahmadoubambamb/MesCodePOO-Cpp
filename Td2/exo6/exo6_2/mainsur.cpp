#include "Ensemblesur.h"

int main()
{ ensemble E(5),e1(6);
    E<<2<<3<<10;
    E.afficher();
    E>>10>>2;
    cout<<"apres suppression :";
    E.afficher();
    if(E%3)
        cout<<"3 est dans E"<<endl;
    else
        cout<<"3 n'est pas dans E"<<endl;
    e1<<4<<5<<6<<8;
    e1.afficher();
    int s=somme(e1);
    cout<<"la somme des element de e1 est :"<<s<<endl;
    return 0;
}
