#include "Voiture.h"
societe::societe(int l,int c)
{nbml=l; nbmc=c;
  V=new Voiture**[nbml];
    for(int i=0;i<nbml;i++)
      V[i]=NULL;
   for(int i=0;i<nbml;i++)
     V[i]=new Voiture*[nbmc];
   for(int i=0;i<nbml;i++)
     for(int j=0;j<nbmc;j++)
       V[i][j]=NULL;
 cout<<"appel du constructeur: adr="<<this<<endl;
}

void societe::inserer(Voiture vo)
{ int i=h(vo.cle);
  int j=0;
  while(V[i][j]!=NULL && V[i][j]->cle!=vo.cle && j<nbmc)
    j++;
  if(j<nbmc)
   {if(V[i][j]->cle==vo.cle)
     cout<<" cette voiture est déjà dans la societe"<<endl;
    else
   {V[i][j]=new Voiture;
    strcpy(V[i][j]->cle,vo.cle);
    strcpy(V[i][j]->marque,vo.marque);
    strcpy(V[i][j]->gamme,vo.gamme);
    strcpy(V[i][j]->modele,vo.modele);
    V[i][j]->annee=vo.annee;
    V[i][j]->presentation=new char[strlen(vo.presentation)];
    strcpy(V[i][j]->presentation,vo.presentation);
    }
  }
 else
 cout<<"le nombre maximum d'éléments est atteint"<<endl;
}

void societe::supprimer(char* key)
{ int j,i=h(key);
  while(V[i][j]!=NULL &&V[i][j]->cle!=key && j<nbmc)
    j++;
  if(j<nbmc)
  {if(V[i][j]!=NULL)
    { delete V[i][j]->presentation;
      delete V[i][j];
      while(V[i][j+1]!=NULL && j<nbmc)
        {V[i][j]=V[i][j+1];
           j++;}
    }
   else
   cout<<"l'element a supprimer n'y est   pas!"<<endl;
  }
else 
cout<<"l'element a supprimer n'y est   pas!"<<endl;
}

bool societe::rechercher(char *key)
{ int j,i=h(key);
  while(V[i][j]!=NULL && V[i][j]->cle!=key && j<nbmc)
  j++;
 return (V[i][j]->cle==key);
}

int societe::h(char *key)
 {
     int hash = 0,leng=strlen(key);
    for (int i = 0; i < leng; ++i) {
        hash = 31 * hash + key[i];
    }
    return hash % nbml;
}

societe::~societe()
{ for(int i=0;i<nbml;i++)
   { if(V[i]!=NULL)
      {int j=0;
        while(V[i][j]!=NULL)
        { delete V[i][j]->presentation;
          delete V[i][j];
           j++;
        }
     }
   }
 cout<<"appel du destructeur :adr="<<this<<endl;
}