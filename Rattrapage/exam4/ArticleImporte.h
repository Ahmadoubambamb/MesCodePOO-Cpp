#ifndef ARTICLEIMPORTE_H_
#define ARTICLEIMPORTE_H_
#include "Article.h"

class ArticleImporte :public Article
{ private :
    double taxe_import;
public:
    ArticleImporte(int,const string& ,double ,double);
    double prix();
protected:
    ostream& afficher(ostream&) const;
};

#endif
