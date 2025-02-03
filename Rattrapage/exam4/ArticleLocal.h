#ifndef ARTICLELOCAL_H_
#define ARTICLELOCAL_H_
#include "Article.h"

class ArticleLocal :public Article{
private:
    double cout_trans;
public:
    ArticleLocal(int,const string&,double,double);
    double prix();
protected:
    ostream& afficher(ostream&) const;
};
#endif
