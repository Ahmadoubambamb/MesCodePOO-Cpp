#include "Societe.h"

int main(){
  Societe s(8,8);
  voiture v1 = {"v001","toyota","SUV",7,"0-9-2S","une voiture de luxe"},
            v2 = {"v002","Bugati","OND",4,"GT80","une tres belle voiture de luxe je crois "},
            v3 = {"v002","ONDA","OSS",6,"LS80","Une voiture bizarre hein"},
            v4 = {"v003","Mercedes","HKHG",3,"PS04","voiture bou later si deuk bi"},
            v5 = {"v005","Toyota","SSD",9,"98LK","bah je sais pas comment le representer hein "};
        s.insertion(&v1);
        s.insertion(&v2);
        s.insertion(&v3);
        s.insertion(&v4);
        s.insertion(&v5);
       s.afficher();
       cout << s.recherche("v005") <<endl
            <<"============================"<<endl;
       s.supprimer("v008");
       s.supprimer("v005");
       s.afficher();
  return 0;
}
