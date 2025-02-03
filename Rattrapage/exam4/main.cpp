#include "magasin.h"

int main(){
 Article ar(1309,"Banana",2000);
 Article A1(232,"Savon",3000);
 cout<<A1;
 cout<<ar;
 ArticleLocal Al1(1234,"Formage",45000,650);
 ArticleLocal Al2(214,"Pure",8000,4500);
 Magasin M(7);
  M.ajouter(&A1);
  M.ajouter(&ar);
  M.ajouter(&Al1);
  M.ajouter(&Al2);
  M.afficher();
 return 0;
}
