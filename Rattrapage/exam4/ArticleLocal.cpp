#include "ArticleLocal.h"

ArticleLocal::ArticleLocal(int ref,const string& des,double pr,double cou):Article(ref,des,pr),cout_trans(cou){}

ostream& ArticleLocal::afficher(ostream& out) const{
    Article::afficher(out);
    out<<"cout de transport : "<<cout_trans<<endl;
    return out;
}

double ArticleLocal::prix(){
    return (cout_trans + prix_achat);
}

