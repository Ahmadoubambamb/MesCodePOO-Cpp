#include "point2D.h"
/*void *erreur()
{cerr<<"erreur a l'allocation de la memoire !!"<<endl; return NULL;}
float **creer_matrice(int,int);
void affiche(float**,int,int);
void detruire(float**,int,int);
float **produit_matrice(float**,int,int,float**,int,int);*/
/*int main()
float **m1=creer_matrice(4,4);
    int i,j;
    for(i=0;i<4;i++)
        for(j=0;j<4;j++)
            m1[i][j]=2*j+i;
    affiche(m1,4,4);
    float **m2=creer_matrice(4,5);
     for(i=0;i<4;i++)
        for(j=0;j<5;j++)
            m2[i][j]=j+i;
    cout<<endl;
    affiche(m2,4,5);
    float **m=produit_matrice(m1,4,4,m2,4,5);
     cout<<endl;
     cout<<"-------apres produit----------"<<endl;
    affiche(m,4,5);

   point pt;
   pt.initialise(2,3);
   pt.affiche();
   cout<<"apres deplacement!!"<<endl;
   pt.deplace(3,4);
   pt.affiche();*/
int main(){
vecteur v2(1.0,2.0,3.0) ,v1 ,v;
v1=v2;
cout<<"v1.v2="<<v1.produit(v2)<<endl;
v=v1.somme(v2);
cout<<"affichage de la somme v=";
v.afficher();
cout<<"||v1||="<<v1.norme()<<" et ||v||="<<v.norme()<<endl;
vecteur *ptr=new vecteur(2,4,5);
//(*ptr)=vecteur(2,3,6);
cout<<"(*ptr)=";
(*ptr).afficher();
cout<<"v1.(*ptr)="<<v1.produit(*ptr);
cout<<"oubien"<<endl;
cout<<"*ptr.v1="<<ptr->produit(v1);
vecteur v4(1.0,2.0,3.0);
if(coincide(v2,v4)) cout<<"v2 coincide avec v4"<<endl;
else cout<<"v2 ne coincide pas avec v4";
return 0;
}
/*
float **creer_matrice(int n,int p)
{ float **m; int i,j;
    m=new float*[n];
    if(m==NULL)
      erreur();
    for(i=0;i<n;i++){
      m[i]=new float[p];
     if(m[i]==NULL)
        erreur();
      }
    for(i=0;i<n;i++)
        for(j=0;j<p;j++)
            m[i][j]=0.0;
    return m;
}
void detruire(float **m ,int n,int p)
{ int i,j;
    for(i=0;i<n;i++)
    if(m[i])
        delete m[i];
    if(m)
        delete m;
}

void affiche(float **m,int n,int p)
{ int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<p;j++)
            cout<<m[i][j]<<"  ";
          cout<<endl;
    }
}
float **produit_matrice(float **m1,int n1,int p1,float **m2,int n2,int p2)
{ int i,j,k;
    if(p1!=n2)
    {cout<<"Le produit de ces deux matrice est impossible:";
    return NULL;
    }
    float **m=creer_matrice(n1,p2);
    for(k=0;k<n1;k++)
      for(i=0;i<p2;i++)
         for(j=0;j<n2;j++)
           m[k][i]+=m1[k][j]*m2[j][i];
    return m;
}
*/
