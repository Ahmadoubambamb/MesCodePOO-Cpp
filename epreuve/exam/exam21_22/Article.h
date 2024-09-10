#ifndef ARTICLE_H_
#define ARTICLE_H_
#include <iostream>
#include <string>
using namespace std;
class Article
{protected:
    string num_reference;
    string designation;
    double prix_achat;
public:
    Article(const string&,const string&,double);
    virtual ~Article(){};
    friend ostream& operator<<(ostream&,const Article&);
    virtual double prix();
};

#endif
