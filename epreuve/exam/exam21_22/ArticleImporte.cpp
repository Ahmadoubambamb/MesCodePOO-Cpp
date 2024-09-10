#include "ArticleImporte.h"
ArticleImporte::ArticleImporte(const string& numref,const string& desi,double prix,double tax):Article(numref,desi,prix)
{
    taxe_import=tax;
}

ostream& operator<<(ostream& out,const ArticleImporte& ai)
{ out<<"numero de reference: "<<ai.num_reference<<endl
     <<"designation: "<<ai.designation<<endl
     <<"prix d'achat: "<<ai.prix_achat<<endl
     <<"taxe d'importation: "<<ai.taxe_import<<endl;
     return out;
}

double ArticleImporte::prix()
{
    return (prix_achat+0.4*taxe_import);
}
