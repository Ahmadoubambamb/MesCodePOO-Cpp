#ifndef TABLE_H_
#define TABLE_H_
struct voiture{
    char cle[50];
    char matricule[50];
    char modele[50];
    char gamme[50];
};

struct noeud{
    voiture *voitures;
    noeud *suivant;
};

class Table{
private:
    int nmax;
    int ncourant;
    noeud **tab;
public:
    Table(int );
    ~Table();
    void inserer(voiture *);
    void supprimer(char *);
    bool rechercher(char *);
    int h(char *);
};

#endif
