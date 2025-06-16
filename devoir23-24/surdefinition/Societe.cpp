
#include "Societe.h"

Societe::Societe(int ml , int mc){
    nbml = ml ;
    nbmc = mc ;
    hash = new voiture**[nbml] ;
    if(!hash){
        cerr << "erreur d'allocation "<<endl;
        exit(-1);
    }

    for(int i  = 0 ; i <nbml ; i++)
    { hash[i] = new voiture*[nbmc] ;
        if(!hash[i]){
            cerr << "erreur lors de l'allocation de tab "<<i;
            exit(-2);
        }
    }
    for(int i = 0 ; i < nbml ; i++)
        for(int j = 0 ; j < nbmc ; j++)
            hash[i][j] = nullptr ;
}

Societe::Societe(const Societe& s){
    nbml = s.nbml ;
    nbmc = s.nbmc ;
    hash = new voiture**[nbml] ;
     if(!hash){
        cerr << "erreur d'allocation "<<endl;
        exit(-3);
    }
    for(int i  = 0 ; i <nbml ; i++)
    { hash[i] = new voiture*[nbmc] ;
        if(!hash[i]){
            cerr << "erreur lors de l'allocation de tab "<<i;
            exit(-2);
        }
    }
   for(int i = 0 ; i < nbml ; i++)
        for(int j = 0 ; j < nbmc ; j++)
           { if(s.hash[i][j])
              hash[i][j] = s.hash[i][j] ;
             else if(j == 1) break;
           }
}

Societe::~Societe(){
    if(hash){
        for(int i = 0 ; i < nbml ; i++)
            if(hash[i])
                delete [] hash[i];
       delete [] hash;
    }
}


Societe& Societe::operator<<(voiture *v){
    int i = h(v->cle) ;
    int j = 0 ;
    while(j < nbmc && hash[i][j] != nullptr && strcmp(v->cle , hash[i][j]->cle)!= 0)
        j++;
    if(j < nbmc && hash[i][j] == nullptr)
        hash[i][j] = v;
    else
        cout << "ligne "<< i <<" plein ou la voiture s'y trouve deja !!"<<endl;
    return *this;
}

Societe& Societe::operator>>(const char *cl){
    int i = h(cl);
    int j  = 0;
    while(j < nbmc && hash[i][j] != nullptr)
     { if(strcmp(cl , hash[i][j]->cle) == 0)
          {  hash[i][j] = nullptr ;
          for(int k = j ; k < nbmc -1 ; k++)
           hash[i][k] = hash[i][k + 1] ; //apres suppression
          return *this;                     // on tasse le tableau
         }
            else
                j++;
        }
        cout << "la voiture de cle "<<cl <<"ne s'y trouve pas !!"<<endl;
        return *this;
}

bool Societe::operator%(const char *cl){
    int i = h(cl) ;
    int j = 0 ;
    while(j < nbmc && hash[i][j] != nullptr)
        if(strcmp(cl , hash[i][j++]->cle) == 0)
            return true;
     return false ;

}

int Societe::h(const char *cl){
    int somme = 0 , i = 0;
    while(cl[i] != '\0')
        somme += cl[i++];
    return somme % nbml ;
}


void Societe::afficher() const{
  for(int i = 0 ; i < nbml ; i++){
      for(int j = 0 ; j < nbmc ; j++)
          if(hash[i][j]){
              cout<<"Ligne "<< i << " : "
                  <<hash[i][j]->cle << "  "
                  <<hash[i][j]->marque << "  "
                  <<hash[i][j]->gamme << "  "
                  <<hash[i][j]->annee << "  "
                  <<hash[i][j]->modele << "  "
                  <<hash[i][j]->presentation << "  "<<endl;
        }
   }
}
