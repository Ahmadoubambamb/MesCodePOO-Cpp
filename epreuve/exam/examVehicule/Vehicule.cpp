#include <iostream>
#include <string>
using namespace std;

class Vehicule
{ protected:
   string marque;
   int date_achat;
   double prix_achat;
   double prix_courant;
  virtual ostream& afficher(ostream&) const;
   public:
   Vehicule(const string&,int,double);
   virtual ~Vehicule(){};
   friend ostream& operator<<(ostream&,const Vehicule&);
   virtual double calculPrix(int);
};

class voiture:public Vehicule
{private:
  double cylindre;
  int nombrePortes;
  double puissance;
  double kilometrage;
 protected:
  ostream& afficher(ostream&) const;
 public:
  voiture(const string&,int,double,double,int,double,double);
  virtual ~voiture(){};
  double calculPrix(int);
};

// ----====---- La classe Avion    ----====----
enum Type_Avion { HELICES, REACTION };

class avion: public Vehicule
{private:
  Type_Avion type;
  int nb_heure;
protected:
 ostream& afficher(ostream&) const;
 public:
 avion(const string&,int,double,Type_Avion,int);
 virtual ~avion(){};
 double calculPrix(int);
};

class aeroport
{private:
  int longueur;
  int max;
  Vehicule **stock;
 public:
  aeroport(int);
  virtual ~aeroport();
  void ajouter(Vehicule*);
  void afficher() const;
};

int main()
{ Vehicule v("Ferrari",2014,6000000);
  Vehicule v1("Renault",2016,2000000);
  Vehicule v2("Fiat",2017,4000000);
  voiture voi("Porsche",2022,700000,12.0,4,14.7,200.0);
  voiture voi1("Toyota",2024,900000,14.5,2,20,150);
  avion a1("Emirat",2012,800000,HELICES,72);

  //cout <<"Vehicule : " << v <<endl;
  //cout <<voi <<endl;
  //cout << a1;
  aeroport L(10);
  L.ajouter(&v);
  L.ajouter(&v1);
  L.ajouter(&v2);
  L.ajouter(&voi);
  L.ajouter(&voi1);
  L.ajouter(&a1);
  L.afficher();
  return 0;
}

/*----- la definition des class vehicule ------------*/
Vehicule::Vehicule(const string& mark,int da,double pa):marque(mark)
{
    prix_achat=prix_courant=pa;
    //prix_courant=pc;
    date_achat=da;
}

ostream& Vehicule::afficher(ostream& out) const
{
    out<<"marque = "<<marque
       <<", date = "<<date_achat
       <<", prix = "<<prix_achat<<endl;
    return out;   
}
ostream& operator<<(ostream& out,const Vehicule& v)
{
    return v.afficher(out);
}

double Vehicule::calculPrix(int anneeActuel)
{
    prix_courant=prix_achat-(0.01*prix_achat*(anneeActuel-date_achat));
    return prix_courant;
}

/*--------------la definition de la class voiture ------------------------*/

voiture::voiture(const string& mark,int da,double pa,double c,int nbp,double power,double kilo):Vehicule(mark,da,pa)
{
    cylindre=c;
    nombrePortes=nbp;
    puissance=power;
    kilometrage=kilo;
}

ostream& voiture::afficher(ostream& out) const
{   out << "voiture : ";
  Vehicule::afficher(out);
   out<<"cylindre = "<<cylindre
      <<", nombre de porte = "<<nombrePortes
      <<", puissance = "<<puissance
      <<", kilometrage = "<<kilometrage<<endl;
    return out;   
}


double voiture::calculPrix(int anneeActuel)
{ prix_courant = prix_achat - 0.02*prix_achat*(anneeActuel - date_achat);
     double transexacte = kilometrage/10000.0;
     int transkilo;
     int transentier = (int)transexacte;
     double transdecimal = transexacte - transentier;
     if(transdecimal >= 0.5)
      transkilo = transentier+1;
     else
     transkilo = transentier; 
     prix_courant -= (0.05*prix_courant)*transkilo;  // car a ce stade le prix d'achat est le prixcourant;
     if(marque == "Renault" || marque == "Fiat")
       prix_courant -= 0.1*prix_courant;
       else if(marque == "Ferrari" || marque == "Porsche")
         prix_courant -= 0.2*prix_courant;
    return prix_courant;     
}

avion::avion(const string& mark, int date,double pa,Type_Avion typ,int nb):Vehicule(mark,date,pa)
{
    type=typ;
    nb_heure=nb;
}

ostream& avion::afficher(ostream& out) const
{  out << "avion : ";
   Vehicule::afficher(out);
    out<<"type de moteur = ";
      if(type == HELICES)
       out<<"HELICES";
        else
          out <<"REACTION";
       out<<", nombre d'heure de vole = "<<nb_heure<<endl;
    return out;   
}

double avion::calculPrix(int anneactuel)
{
     double decote;
  if (type == HELICES)
    decote = 0.1 * nb_heure / 100.0;
  else
    decote = 0.1 * nb_heure / 1000.0;

  prix_courant =prix_achat - (anneactuel - date_achat)*decote * prix_achat;
  return prix_courant;
}

aeroport::aeroport(int m)
{ stock = new Vehicule*[m];
   max = m;
   longueur=0;
}

aeroport::~aeroport()
{
    if(stock)
    delete [] stock;
}

void aeroport::ajouter(Vehicule *s)
{
    if(longueur < max)
    stock[longueur++]=s;
}

void aeroport::afficher() const
{
    for(int i=0 ; i<longueur ; i++)
     cout<< *stock[i]<< endl << "--------------------------" << endl;
}
