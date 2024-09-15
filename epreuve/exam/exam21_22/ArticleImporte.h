#ifndef ARTICLEIMPORTE_H_
#define ARTICLEIMPORTE_H_
#include "Article.h"
class ArticleImporte: public Article
{private:
    double taxe_import;
public:
    ArticleImporte(const string&,const string&,double,double);
    virtual ~ArticleImporte(){};
    ostream& afficher(ostream&) const;
    double prix();
};

#endif
