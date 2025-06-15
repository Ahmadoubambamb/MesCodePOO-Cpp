#include "Matrice.h"

int main(){
     int m = 4, n = 5;
    int mat[4][5] = {
        {0, 0, 3, 0, 4},
        {0, 0, 5, 7, 0},
        {0, 0, 0, 0, 0},
        {0, 2, 6, 0, 0}
    };

     int **mat1 = new int*[m];
    for (int i = 0; i < m; i++) {
        mat1[i] = new int[n];
        for (int j = 0; j < n; j++) {
            mat1[i][j] = mat[i][j];
        }
    }
    MatriceCreuse mT(mat1,m,n);
    mT.afficher();
    return 0;
}
