#include "complexe.h"

int main()
{
    complexe c1,c2(2,3),c3(3,4);
    cout<<"le relle de c2="<<c2.reelle()<<endl;
    cout<<"la partie img de c2="<<c2.imaginaire()<<endl;
    cout<<"la module de c3="<<c3.module()<<endl;
   // c1=c2.ajouter(c3);
    c1=c2+c3;
    cout<<"apres ajout c1=";
    //c1.afficher();
    cout<<c1;
    //c1=c2.multiplier(c3);
    c1=c2*c3;
    cout<<"apres mult c1=";
   // c1.afficher();
    cout<<c1;
    return 0;
}
