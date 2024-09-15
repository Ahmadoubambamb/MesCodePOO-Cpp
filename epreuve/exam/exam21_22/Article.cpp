#include "Article.h"

Article::Article(const string& numref,const string& desing,double prix):num_reference(numref),designation(desing)
{
    prix_achat=prix;
}

ostream& Article::afficher(ostream& out) const
{
  out<<"numero de reference: "<<num_reference<<endl
     <<"designation: "<<designation<<endl
     <<"prix d'achat: "<<prix_achat<<endl;
  return out;
}

ostream& operator<<(ostream& out,const Article& ar)
{
  return ar.afficher(out);
}

double Article::prix()
{
  return prix_achat;
}
