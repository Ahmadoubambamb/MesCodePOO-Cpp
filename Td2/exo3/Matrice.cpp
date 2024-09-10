
#include "Matrice.h"
matrice::matrice(int l,int c)
{ cout<<"appel du constructeur"<<endl;
    element=new int*[l];
    if(element==NULL)
    {   cerr<<"erreur d'allocation !";
        exit(-1);
    }
    for(int i=0;i<l;i++)
    {element[i]=new int[c];
        if(element[i]==NULL)
        { cerr<<"erreur d'allocation !";
            exit(-1);}
    }
    for(int i=0;i<l;i++)
        for(int j=0;j<c;j++)
            element[i][j]=0;
    nb_ligne=l;
    nb_colone=c;
}

matrice::matrice(matrice& m)
{ cout<<"appel du constructeur de copie"<<endl;
    nb_colone=m.nb_colone;
    nb_ligne=m.nb_ligne;
    element=new int*[nb_ligne];
    if(element==NULL)
        cerr<<"erreur d'allocation !";
    for(int i=0;i<nb_ligne;i++)
    {element[i]=new int[nb_colone];
        if(element[i]==NULL)
            cerr<<"erreur d'allocation !";
    }
    for(int i=0;i<nb_ligne;i++)
        for(int j=0;j<nb_colone;j++)
            element[i][j]=m.element[i][j];

}
matrice::~matrice()
{ cout<<"appel du destructeur"<<endl;
    if(element)
 {for(int i=0;i<nb_ligne;i++)
     delete element[i];
    delete element;
 }
}

int matrice::Getelement(int i,int j) const
{  if(i<nb_ligne && j<nb_colone )
    return element[i][j];
    return -1;
}

void matrice::Setelement(int i,int j,int x)
{ if(i<nb_ligne && j<nb_colone)
    element[i][j]=x;
    else
        cerr<<"impossible indice "<<endl;
}

matrice matrice::produit(const matrice& m)
{ int i,j,k;
    matrice p(nb_ligne,m.nb_colone);
    if(nb_colone!=m.nb_ligne)
    {
        cerr<<"impossible "<<endl;
    }
                            // cerr<<"le produit est impossible !";
    else{
    for(i=0;i<nb_ligne;i++)
        for(j=0;j<m.nb_colone;j++)
            for(k=0;k<m.nb_ligne;k++){ //cout<<" "<<i<<" "<<j<<" "<<k<<endl;
                p.element[i][j]+=element[i][k]*m.element[k][j];}
       }
    return p;

}

void matrice::afficher () const
{
    int i,j;
    for(i=0;i<nb_ligne;i++)
    { for(j=0;j<nb_colone;j++)
            cout<<element[i][j]<<"   ";
            cout<<endl;}
}

matrice& matrice::operator=(const matrice& m)
{ if(this==&m) return *this;
    int i,j;
    delete element;
    nb_colone=m.nb_colone ; nb_ligne=m.nb_ligne;
    element=new int*[nb_ligne];
    if(element==NULL)
        cerr<<"erreur d'allocation";
     for(i=0;i<nb_ligne;i++)
         element[i]=new int[nb_colone];
    for(i=0;i<nb_ligne;i++)
        for(j=0;j<nb_colone;j++)
            element[i][j]=m.element[i][j];
    return (*this);
}

int& matrice::operator[] (int i, int j)
{
    return element[i][j];
}
