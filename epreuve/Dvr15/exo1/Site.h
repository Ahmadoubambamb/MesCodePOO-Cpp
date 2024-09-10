#ifndef SITE_H_
#define SITE_H_
using namespace std;
class site:private document
{private :
    int nb_document;
    document *doc;
public:
    site();
    ~site();
    site(site& );
    void ajouter();
    void supprimer();
    void copie(site&);
    bool recherche(char*);

};

#endif
