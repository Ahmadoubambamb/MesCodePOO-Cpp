#include "ArticleImporte.h"
ArticleImporte::ArticleImporte(const string& numref,const string& desi,double prix,double tax):Article(numref,desi,prix)
{
    taxe_import=tax;
}

ostream& ArticleImporte::afficher(ostream& out) const
{    Article::afficher(out);
     out<<"taxe d'importation: "<<taxe_import;
     return out;
}

double ArticleImporte::prix()
{
    return (prix_achat+0.4*taxe_import);
}
