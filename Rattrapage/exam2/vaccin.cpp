#include <string>
#include <iostream>

using namespace std;
// prix du conditionnement d'une unité
const double COND_UNITE = 0.5;
// prix de base de fabrication d'une unité
const double PRIX_BASE = 1.5;
// majoration du prix de fabrication pour vaccin "high tech"
const double MAJORATION_HIGHTECH = 0.5;
// reduction du cout du à la delocalisation
const double REDUCTION_DELOC = 0.2;
enum Fabrication {Standard, HighTech};
// CLASSES A COMPLETER ICI

class Vaccin
{ protected:
    string nom;
    double volume;
    int nb_dose_produit;
    Fabrication mode_fabrication;

public:
    Vaccin(const string& nomV , double v , int nb ,Fabrication mode = Standard):nom(nomV),volume(v),nb_dose_produit(nb),mode_fabrication(mode){};

    virtual ~Vaccin(){};

   friend ostream& operator<<(ostream& out,const Vaccin& v){
        out <<v.nom << endl
            <<"volume/dose : "<<v.volume<<endl
            <<"nombre de dose : "<<v.nb_dose_produit<<endl
            <<"Mode de Fabrication ";
            if(v.mode_fabrication == Standard)
                out<<"Standard"<<endl;
            else
                out<<"HighTech"<<endl;
          return out;
    };
    virtual double conditionnement(){
        return volume * nb_dose_produit * COND_UNITE;
    };
    virtual double fabrication(){
        double cout = volume * nb_dose_produit + PRIX_BASE;
        if(mode_fabrication == HighTech)
            cout += cout * MAJORATION_HIGHTECH;
        return cout;
    };
    virtual double production(){
        return conditionnement() + fabrication();
    };
};

class Delocalise : public Vaccin{
protected:
    bool localise;
public:
 Delocalise(const string& nomV , double v, int nb ,bool del ,Fabrication mode = Standard):Vaccin(nomV,v,nb,mode){
     localise = del;
};
 virtual ~Delocalise(){};
 virtual double production(){
     double c = Vaccin::production();
     double cout;
     if(localise)
         cout = c - c * REDUCTION_DELOC;
     else
         cout = c/2;
     return cout;
  };
};

class Compagnie{
private:
    string nomC;
    Vaccin ** stock;
    int max;
    int longeur;
public:
    Compagnie(const string& nom , int m){
        max = m;
        stock = new Vaccin *[max];
        longeur = 0;
    };
    virtual ~Compagnie(){
        if(stock)
            delete [] stock;
    };
    void ajouter(Vaccin *v){
        if(longeur < max)
        stock[longeur++] = v;
    };
    void afficher(){
        for(int i = 0; i< longeur ;i++)
            cout << *stock[i]<<endl;
    };
    double production(){
        double cout = 0;
        for(int i = 0;i< longeur;i++)
            cout += stock[i]->production();
        return cout;
    };

};
int main() {
Vaccin v1("Zamiflu", 0.55, 200000, HighTech);
Vaccin v2("Triphas", 0.20 , 10000);
// affichage des vaccins à compléter ici
cout << v1 << endl;
cout << v2 << endl;
cout << "le cout de production de v1 et v2 est : ";
cout << v1.production() + v2.production() << endl;
// Test des parties suivantes
cout << "test des parties suivantes ..." << endl;

Delocalise D1 ("ZamifluDel", 0.55, 200000,true,HighTech);
Delocalise D3 ("TriphasDel", 0.55, 2000,true);
cout << D1 << endl;
cout << D3 << endl;
// A COMPLETER
Compagnie c("ICBA",5);
c.ajouter(&v1);
c.ajouter(&v2);
c.ajouter(&D1);
c.ajouter(&D3);
cout << "le cout de production total est:"<<c.production();
c.afficher();
return 0;
}


