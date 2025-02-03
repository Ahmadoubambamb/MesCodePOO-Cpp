#include "ArticleImporte.h"

 ArticleImporte::ArticleImporte(int ref,const string& des,double p,double t):Article(ref,des,p),taxe_import(t){}

 ostream& ArticleImporte::afficher(ostream& out) const{
     Article::afficher(out);
     out<<"taxe d'importation : "<<taxe_import<<endl;
     return out;
}

double ArticleImporte::prix(){
    double pr = Article::prix();
     pr += 0.4 * taxe_import;
     return pr;
}

