#include "Matrice.h"

int main()
{ matrice m1(3,4),m2(4,4),m,M;
    int i,j;
    m2.afficher();
    for(i=0;i<3;i++)
        for(j=0;j<4;j++)
            m1.Setelement(i,j,rand()%13+1);
    cout<<"Matrice m1:"<<endl;
  m1.afficher();
  for(i=0;i<4;i++)
        for(j=0;j<4;j++)
            m2.Setelement(i,j,rand()%8+2);
     cout<<endl<<"Matrice m2:"<<endl;
  m2.afficher();
  m=m1.produit(m2);
  cout<<endl<<"Matrice produit de m1 et m2:"<<endl;
    m.afficher();
M=m2.produit(m1);
M=m=m2;
M.afficher();
M[2,2]=123;
M.afficher();
    return 0;
}
