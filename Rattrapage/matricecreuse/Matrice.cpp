#include "Matrice.h"

MatriceCreuse::MatriceCreuse(int **mat , int n , int m){
    int nbr_value = 0;
    for(int i = 0; i< n ;i++)
        for(int j = 0 ; j<m ;j++)
            if(mat[i][j]!=0)
                nbr_value++;
    for(int i = 0; i <Ligne ;i++)
        tab[i] = new int[nbr_value];
      nbcol = 0;
      for(int i = 0; i< n ;i++)
        for(int j = 0 ; j<m ;j++)
         if(mat[i][j] != 0)
            {tab[0][nbcol] = i;
            tab[1][nbcol] = j;
            tab[2][nbcol++] = mat[i][j];}
}
/*
MatriceCreuse::MatriceCreuse(const MatriceCreuse& m){
    nbcol = m.nbcol;
    for(int i = 0;i<3;i++)
        for(int j = 0;j<nbcol;j++)
           tab[i][j]=m.tab[i][j];
}*/

MatriceCreuse::~MatriceCreuse(){
    for(int i = 0; i < Ligne;i++)
        delete [] tab[i];
}

void MatriceCreuse::afficher() const{
    cout<<"Row ";
    for(int i =0;i<nbcol;i++)
        cout<<tab[0][i]<<" ";
     cout<<endl;
     cout<<"column ";
    for(int i =0;i<nbcol;i++)
        cout<<tab[1][i]<<" ";
     cout<<endl;

     cout<<"value ";
    for(int i =0;i<nbcol;i++)
        cout<<tab[2][i]<<" ";
     cout<<endl;
}


