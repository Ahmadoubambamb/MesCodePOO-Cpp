#include "Enseignant.h"

int main()
{ char no[20]="bamba" ,pre[20]="mboup" ,dip[20]="Bac",math[20]="math",ph[20]="Physique" , INF[20]="INFO";
    Enseignants e(no,pre,dip);
    e.SetMatiere(math);
    e.SetMatiere(ph);
    e.SetMatiere(INF);
    //cout<<e.GetDiplome();
    e.afficher();
  char no1[20]="Mbaye", pre1[20]="Babacar", dip1[20]="Licence",inf[20]="anglais",ang[20]="francais";
  Enseignants e1(no1,pre1,dip1);
  e1.SetMatiere(inf); e1.SetMatiere(ang);
  e1.afficher();
  cout<<endl;
  e1=e;
  cout<<"apres affectation :"<<endl;
  e1.afficher();
  Enseignants e2=e1;
  nom_diplome_prenom(e2);
    return 0;
}
/*cout<<"donner le prenom:";
    cin.getline(pre,40,'\n');

    cout<<"donner le nom:";
    cin.getline(no,40,'\n');

    cout<<"donner le diplome:";
    cin.getline(dip,40,'\n');

    Enseignants e(no,pre,dip);

    cin.getline(math,40,'\n');
    e.SetMatiere(math);

    cin.getline(ph,40,'\n');
    e.SetMatiere(ph);

    cin.getline(INF,40,'\n');
    e.SetMatiere(INF);*/
