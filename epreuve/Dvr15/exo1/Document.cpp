#include "Document.h"
document::document(char *nom)
{ int i=0;
    while((nom_doc[i]=nom[i])!='\0')
        i++;
    motcles=new char*[5];
    for(i=0;i<5;i++)
        motcles[i]=NULL;
    nb_mcles=0;
}

document::~document()
{ if(motcles)
  {for(int i=0;i<nb_mcles;i++)
      delete [] motcles[i];
        delete [] motcles;
  }
}

void document::ajouter(const char *mot)
{  if(nb_mcles!=5){
    motcles[nb_mcles]=new char[strlen(mot)+1];
    int i=0;
    while((motcles[nb_mcles][i]=mot[i])!='\0')
        i++;
    nb_mcles++;}
    else return;
}
void document::afficher()
{cout<<"nom:"<<nom_doc<<endl;
    for(int i=0;i<nb_mcles;i++)
    {
         if(i==0)
        cout<<motcles[i];
        else
            cout<<"-> "<<motcles[i];
    }

}
