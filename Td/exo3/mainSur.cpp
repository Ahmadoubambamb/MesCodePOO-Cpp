#include "rectangleSur.h"
int main()
{Rectangle r(20,15),r1(3,6),r2(5,5) ,r3(6,5);
 cout<<"la largeur de r1="<<r1.GetLargeur()<<endl;
 cout<<"la hauteur de r1="<<r1.GetHauteur()<<endl;
 cout<<"le perimetre de r1="<<r1.perimetre()<<endl;
 cout<<"la surface de r1="<<r1.surface()<<endl;
 r1.SetLargeur(2);
 cout<<r1;
 r2.SetHauteur(1);
 cout<<r2;
if(r1==r2)
     cout<<"r1=r2"<<endl;
    else
        cout<<"r1!=r2"<<endl;
    if(r1==r)
         cout<<"r=r1"<<endl;
    else
        cout<<"r!=r1"<<endl;
    cout<<"le dessin de r:"<<endl;
dessiner(r);
 cout<<"le dessin de r1:"<<endl;
dessiner(r1);
if(r3==r2)
     cout<<"r3==r2"<<endl;
    else
        cout<<"r3!=r2"<<endl;
 cout<<"le dessin de r2:"<<endl;
dessiner(r2);
 cout<<"le dessin de r3:"<<endl;
 dessiner(r3);
    return 0;
}
