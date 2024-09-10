#ifndef ARTICLEIMPORTE_H_
#define ARTICLEIMPORTE_H_
#include "Article.h"
class ArticleImporte: public Article
{private:
    double taxe_import;
public:
    ArticleImporte(const string&,const string&,double,double);
    virtual ~ArticleImporte(){};
    friend ostream& operator<<(ostream&,const ArticleImporte&);
    double prix();
};

#endif
