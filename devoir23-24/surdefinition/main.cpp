#include "Societe.h"

int main(){
  Societe s(8,8);
  voiture v1 = {"v001","toyota","SUV",7,"0-9-2S","une voiture de luxe"},
            v2 = {"v002","Bugati","OND",4,"GT80","une tres belle voiture de luxe je crois "},
            v3 = {"v002","ONDA","OSS",6,"LS80","Une voiture bizarre hein"},
            v4 = {"v003","Mercedes","HKHG",3,"PS04","voiture bou later si deuk bi"},
            v5 = {"v005","Toyota","SSD",9,"98LK","bah je sais pas comment le representer hein "};
       s << &v1 << &v2 << &v3 << &v4 << &v5 ;
       s.afficher();
       if(s % "v001")
         cout << "voiture de cle v001 s'y trouve!!\n"<<"============================"<<endl;
       else
            cout <<"voiture de cle v001 s'y trouve! pas \n"<<"============================"<<endl;

       s.afficher();
       cout << "\n--------------------------------------------\n";
       cout <<"  apres suppression \n";
       s >>"v002">>"v005";
       s.afficher();
  return 0;
}
