
#include "fonct.h"
void *erreur()
{cerr<<"erreur lors de l'allcation de la memoire !"<<endl;
    return NULL;
}
Matrice *creer_matrice(int n,int p)
{  int i,j;
    Matrice *m=new Matrice;
    if(!m)
        erreur();
         m->element=new float*[n];
    if(!m->element)
        erreur();
     for(i=0;i<n;i++)
     {   m->element[i]=new float[p];
           if(!m->element[i])
             erreur();
     }
     for(i=0;i<n;i++)
         for(j=0;j<p;j++)
             m->element[i][j]=0.0;
    m->nb_ligne=n; m->nb_colonne=p;
    return m;
}
void destruire_matrice(Matrice *m)
{if(m)
  {if(m->element)
       for(int i=0;i<m->nb_ligne;i++)
           delete m->element[i];
      delete m->element;
       delete m;
  }
}
void afficher_matrice(Matrice *m)
{int i,j;
    for(i=0;i<m->nb_ligne;i++)
    {cout<<endl;
        for(j=0;j<m->nb_colonne;j++)
          cout<<m->element[i][j]<<"   ";
    }
}
Matrice *transposer(Matrice *m)
{ Matrice *Tr=creer_matrice(m->nb_colonne,m->nb_ligne);
    // le transposer de (ai,j) est (aj,i)
      int i,j;
        for(i=0;i<m->nb_ligne;i++)
           for(j=0;j<m->nb_colonne;j++)
               Tr->element[j][i]=m->element[i][j];
    return Tr;
}
Matrice *matrice_produit(Matrice *m1,Matrice *m2)
{ int k,i,j;
    if(m1->nb_colonne!=m2->nb_ligne)
    { cout<<"produit impossible !!"<<endl;
        return NULL;
    }
    Matrice *m=creer_matrice(m1->nb_ligne,m2->nb_colonne);
     for(k=0;k<m1->nb_ligne;k++)
         for(i=0;i<m2->nb_colonne;i++)
             for(j=0;j<m2->nb_ligne;j++)
                 m->element[k][i]+=m1->element[k][j]*m2->element[j][i];
     return m;
}

