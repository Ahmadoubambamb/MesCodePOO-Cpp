#include "Article.h"
#include "ArticleImporte.h"
#include "ArticleLocal.h"
#include "Magasin.h"
using namespace std;

int main()
{ Article art1("1212546","Lait",6000) , art2("1213476","Sucre",7000);
    ArticleImporte ai1("46574","Blais",40000,23000) , ai2("5768","Mais",20000,4000);
    ArticleLocal al1("584893","Cafe",5000,150) , al2("568659","Huile",2000,300);
   Magasin L(100);
   L.ajouter(&ai1);
   L.ajouter(&ai2);
   L.ajouter(&al1);
   L.ajouter(&al2);
   cout<<"Le prix total de tout les Article est: "<<L.prix_total()<<endl;
   L.afficher();
    cout<<"Le prix total de tout les Article est: "<<L.prix_total()<<endl;
    return 0;
}



/*
  cout<<art1<<endl;
    cout<<art2<<endl;
    cout<<ai1<<endl;
    cout<<ai2<<endl;
    cout<<al1<<endl;
    cout<<al2<<endl;
 */
