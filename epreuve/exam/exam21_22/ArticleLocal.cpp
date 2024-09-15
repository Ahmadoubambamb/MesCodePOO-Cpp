#include "ArticleLocal.h"

ArticleLocal::ArticleLocal(const string& num,const string& d,double prix,double cout):Article(num,d,prix)
{
    cout_transp=cout;
}

ostream& ArticleLocal::afficher(ostream& out) const
{
     Article::afficher(out);
     out<<"cout du transport: "<<cout_transp<<endl;
   return out;
}


double ArticleLocal::prix()
{
  return (prix_achat+cout_transp);
}
