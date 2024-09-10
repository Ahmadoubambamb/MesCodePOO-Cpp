#include "ArticleLocal.h"

ArticleLocal::ArticleLocal(const string& num,const string& d,double prix,double cout):Article(num,d,prix)
{
    cout_transp=cout;
}

ostream& operator<<(ostream& out,const ArticleLocal& al)
{
  out<<"numero de reference: "<<al.num_reference<<endl
     <<"designation: "<<al.designation<<endl
     <<"prix d'achat: "<<al.prix_achat<<endl
     <<"cout du transport: "<<al.cout_transp<<endl;
   return out;
}

double ArticleLocal::prix()
{
  return (prix_achat+cout_transp);
}
