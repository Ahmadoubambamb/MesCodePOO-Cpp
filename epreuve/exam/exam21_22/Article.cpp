#include "Article.h"

Article::Article(const string& numref,const string& desing,double prix):num_reference(numref),designation(desing)
{
    prix_achat=prix;
}

ostream& operator<<(ostream& out,const Article& ar)
{ out<<"numero de reference: "<<ar.num_reference<<endl
     <<"designation: "<<ar.designation<<endl
     <<"prix d'achat: "<<ar.prix_achat<<endl;
  return out;
}

double Article::prix()
{
  return prix_achat;
}
