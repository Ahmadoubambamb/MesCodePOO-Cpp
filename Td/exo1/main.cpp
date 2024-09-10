#include "fonct.h"
int main()
{Matrice *m=NULL; int i,j;
    m=creer_matrice(4,4);
     afficher_matrice(m);
       for(i=0;i<4;i++)
           for(j=0;j<4;j++)
               m->element[i][j]=i+2*j;
    cout<<"la Matrice"<<endl;
    afficher_matrice(m);
    cout<<"sont transposer !!"<<endl;
    Matrice *Tr=NULL;
    Tr=transposer(m);
    afficher_matrice(Tr);
    Matrice *mp=matrice_produit(m,Tr);
    cout<<"produit !!"<<endl;
    afficher_matrice(mp);
     return 0;
}
