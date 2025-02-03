#include "enseignant.h"
Enseignant::Enseignant(const char nomP[] ,const char prenomP[],const char diplomeP[], Date& dat)
{ nom = new char[strlen(nomP) +1];
    strcpy(nom , nomP);
    prenom = new char[strlen(prenomP) + 1];
    strcpy(prenom , prenomP);
    diplome = new char[strlen(diplomeP) + 1];
    strcpy(diplome , diplomeP);
    date = dat;

    matiere = new char*[5];
    for(int i = 0 ;i < 5 ;i++)
        matiere[i] = NULL;
}

Enseignant::~Enseignant(){
    if(nom) delete [] nom;
    if(prenom) delete [] prenom;
    if(diplome) delete [] diplome;
    if(matiere){
        for(int i = 0; i<5 ;i++)
            if(matiere[i]) delete [] matiere[i];
        delete [] matiere;
    }

}

void Enseignant::afficher() const{
    cout <<"Nom: "<<nom<<endl
         <<"Prenom: "<<prenom<<endl
         <<"Diplome: "<<diplome<<endl;
         date.afficherDate();
         cout<<"Les matieres :" ;
      for(int i = 0; i< 5 ;i++)
          if(matiere[i])
          cout<<matiere[i]<<"  ";
    cout<<endl;
}

char * Enseignant::getDiplome() const{
    return diplome;
}

char *Enseignant::get_ieme_matiere(int i) const{
    if(i >0 && i < 5)
    return matiere[i];
    else
        return NULL;
}

// void Enseignant::setMatiere(const char *matr){
//     if(test(matr) == true){
//         cout<<"Matiere "<<matr<<" deja ajouter"<<endl;
//         return;
//     }
//   for(int i = 0; i< 5;i++)
//       if(matiere[i] == NULL)
//       { matiere[i] = new char[strlen(matr) + 1];
//           if(matiere[i])
//           {strcpy(matiere[i] , matr);
//                return;}
//     }
//     cout<< "nombre de matiere a atteint 5!!"<<endl;
// }
// void Enseignant::supprimerMatiere(const char* mat){
   /* int i = 0;
    * for(i = 0 ; i< 5 ;i++)
    * { if(strcmp(matiere[i],mat) ==0)
    *    break;
    * }
    * if(i == 5) {
    * cout << "Matiere non trouve!!"<<endl;
    * return;
    * }
    * int j;
    * for(int j = i;j < 4 ;j++)
    * strcpy(matiere[i],matiere[i+1]);
    * delete [] matiere[j];
    * matiere[j] = NULL;
    */
// }
//
// bool Enseignant::test(const char *matier){
//     for(int i = 0; i < 5 ; i++){
//         if(matiere[i]){
//         if(strcmp(matiere[i] , matier) == 0)
//             return true;
//         }
//     }
//     return false;
// }

Enseignant& Enseignant::operator <<(const char* mater)
{
    if((*this)%mater){
        cout<<"Matiere "<<mater<<" deja ajouter"<<endl;
        return *this;
    }
  for(int i = 0; i< 5;i++)
      if(matiere[i] == NULL)
      { matiere[i] = new char[strlen(mater) + 1];
          if(matiere[i] != NULL)
          {strcpy(matiere[i] , mater);
               return *this;
        }
    }
    cout<< "nombre de matiere a atteint 5!!"<<endl;
    return *this;
}

Enseignant& Enseignant::operator >>(const char* mater)
{ int i = 0;
    for(i = 0 ; i< 5 ;i++)
    if(matiere[i])
     { if(strcmp(matiere[i],mater) ==0)
        break;
     }
     if(i == 5) {
     cout << "Matiere non trouve!!"<<endl;
     return *this;
     }
     int j;
     for( j = i;j < 4 ;j++){
         if(matiere[j+1]!=NULL)break;
     strcpy(matiere[j],matiere[j+1]);
         }
     delete [] matiere[j];
     //matiere[j] = NULL;
     return *this;
}

bool Enseignant::operator %(const char* mater)
{  for(int i = 0; i < 5 ; i++)
    if(matiere[i]){
     if(strcmp(matiere[i],mater) == 0)
         return true;
    }
    return false;
}

Enseignant::Enseignant(const Enseignant& E){
    nom = new char[strlen(E.nom) +1];
    strcpy(nom , E.nom);
    prenom = new char[strlen(E.prenom) + 1];
    strcpy(prenom , E.prenom);
    diplome = new char[strlen(E.diplome) + 1];
    strcpy(diplome , E.diplome);
    date = E.date;

    matiere = new char*[5];
    for(int i = 0 ;i < 5 ;i++)
    {matiere[i] = new char[strlen(E.matiere[i]) + 1];
        strcpy(matiere[i],E.matiere[i]);
    }
    cout<<"Appel du construct de recopie\n";
}

Enseignant::operator =(const Enseignant& E){
    if(this == &E) return *this;
}
