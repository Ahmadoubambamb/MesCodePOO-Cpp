#include "Article.h"

Article::Article(int ref,const string& des,double p):reference(ref),design(des),prix_achat(p){}
ostream& Article::afficher(ostream& out) const{
    out<<"numero de reference : "<<reference<<endl
       <<"desgination : "<<design<<endl
       <<"prix d'achat : "<<prix_achat<<endl;
       return out;
}

ostream& operator <<(ostream& out ,const Article& ar){
    return ar.afficher(out);
}

double Article::prix(){
    return prix_achat;
}
