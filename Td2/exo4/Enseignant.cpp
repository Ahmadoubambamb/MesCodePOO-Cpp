#include "Enseignant.h"

Enseignants::Enseignants(char* nom1,char* pre,char* d)
{cout<<"appel du constructeur adr="<<this<<endl;
    strcpy(nom,nom1); strcpy(prenom,pre); strcpy(diplome,d);
    matiere=new char*[5];
    nb_matiere=0;
    if(matiere==NULL)
        exit(-1);
}

Enseignants::~Enseignants()
{ cout<<"appel du destructeur de adr="<<this<<endl;
    if(matiere)
  { for(int i=0;i<nb_matiere;i++)
      delete matiere[i];
      delete matiere;
  }
}

char *Enseignants::GetNom()
{
    return nom;
}

char *Enseignants::GetPrenom()
{
    return prenom;
}

char *Enseignants::GetDiplome()
{
    return diplome;
}


void Enseignants::SetMatiere(char* mat)
{if(nb_matiere==5)
    cerr<<"nombre de matiere max est atteinte !"<<endl;
    else
    { matiere[nb_matiere]=new char[strlen(mat)+1];
        strcpy(matiere[nb_matiere],mat);
        nb_matiere++;
    }
}

Enseignants::Enseignants(Enseignants& e)
{cout<<"appel du constructeur de copie adr="<<this<<endl;
    strcpy(nom,e.nom); strcpy(prenom,e.prenom); strcpy(diplome,e.diplome);
    matiere=new char*[5];
    nb_matiere=e.nb_matiere;
    for(int i=0;i<nb_matiere;i++)
    {matiere[i]=new char [strlen(e.matiere[i])+1];
        if(matiere[i])
         strcpy(matiere[i],e.matiere[i]);
    }
}

void Enseignants::afficher() const
{
    cout<<"Nom:"<<nom<<endl<<"prenom:"<<prenom<<endl<<"Dilpome:"<<diplome<<endl;
    cout<<"LES MATIERE QU'IL ENSEIGNE SONT :"<<endl;
    for(int i=0;i<nb_matiere;i++)
        cout<<matiere[i]<<"\t";
    cout<<endl;
}

Enseignants& Enseignants::operator=(const Enseignants& e)
{ if(this==&e) return *this;
  if(matiere)
  { for(int i=0;i<nb_matiere;i++)
      delete matiere[i];
      delete matiere;
  }
  nb_matiere=e.nb_matiere;
  strcpy(nom,e.nom); strcpy(prenom,e.prenom); strcpy(diplome,e.diplome);
  matiere=new char*[5];
  for(int i=0;i<nb_matiere;i++)
   {  matiere[i]=new char[strlen(e.matiere[i])];
      strcpy(matiere[i],e.matiere[i]);}
    return *this;
}

void nom_diplome_prenom(Enseignants e)
{   cout<<"diplome\tnom\tprenom\n";
    cout<<e.GetDiplome()<<"\t"<<e.GetNom()<<"\t"<<e.GetPrenom()<<endl;
}
