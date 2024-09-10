#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include "text.h"
#include "chaine.h"
using namespace std;
int main()
{   Textformater T("mame bamba",true,true,"white");
    T.afficher();
    str s("Ma famille d'abord ");
    Textformater T1(s,true,false,"Black");
    T1.afficher();
    T1=T;
    T1.afficher();
    str S1("Mon oncle Charlie ");
    T1=S1;
    T1.afficher();
    str *adr;
     int rep;
     cout<<"tapez (0) pour text unique et (1) pour le format HTML:";
     cin>>rep;
     switch(rep)
     {   case 0: adr=&s; break;
         case 1: adr=&T; break;
         default: adr=NULL; break;
     }
     if(adr)
         adr->afficher(); cout<<endl;

    str *adr1= new Textformater("Titre de Ma Page HTML",true,true,"Green");
    adr1->afficher(); cout<<endl;
    delete adr1;

 return 0;
}
