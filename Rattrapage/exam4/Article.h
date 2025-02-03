#ifndef ARTICLE_H_
#define ARTICLE_H_
#include <iostream>
#include <string>
 using namespace std;

 class Article{
 protected :
     int reference;
     string design;
     double prix_achat;
    virtual ostream& afficher(ostream&) const;
 public:
     Article(int ,const string& ,double);
     friend ostream& operator <<(ostream& ,const Article&);
     virtual double prix();
};



#endif
