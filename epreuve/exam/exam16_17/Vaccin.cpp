#include <iostream>
#include <string>
#include <iomanip>
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

class vaccin
{protected:
    string nom;
    double volume_par_dos;
    int nb_dos;
    Fabrication mode_fabrication;
public:
    vaccin(const string& nm,double v,int n,Fabrication fab=Standard):
    nom(nm),volume_par_dos(v),nb_dos(n),mode_fabrication(fab){
        cout<<"appel du constructeur: adr="<<this<<endl;
    };
   virtual ~vaccin(){};
   friend ostream& operator << (ostream& sortie,const vaccin& v)
   { sortie<<v.nom<<"\n"
           <<"volume/dose:"<<v.volume_par_dos<<"\n"
           <<"nombre de dose:"<<v.nb_dos<<'\n'
           <<"mode de fabrication ";
           if(v.mode_fabrication==HighTech)
               sortie<<"High Tech\n";
           else
               sortie<<"Standard\n";
       return sortie;
   };
    double conditionnement()
    {
        double cout=volume_par_dos*nb_dos*COND_UNITE ;
        return cout;
    };
    double fabrication(){
        double cout=volume_par_dos*nb_dos*PRIX_BASE;
        if(mode_fabrication==HighTech)
        {cout+=cout*MAJORATION_HIGHTECH;
         return cout;
        }
        return cout;
    };
   virtual double production()
    {
        return (conditionnement() + fabrication());
    };
};
class delocalise:public vaccin
{
 bool pays_front;
public:
    delocalise(const string& nm,double v,int n,bool p,Fabrication fb=Standard):vaccin(nm,v,n,fb)
    {pays_front=p;
    };
    double production()
    { double c=vaccin::production();
        if(pays_front==true)
            return c-c*REDUCTION_DELOC;
        return c/2;
    };
    //friend ostream& operator<<(ostream& out,const delocalise& d)
    //{ out<<d;
        //if(d.pays_front)
            //out<<"delocaliser\n";
         //else
             //out<<"non delocaliser \n";
        //return out;
    //};
};
class compagni
{private:
    string nomComp;
    vaccin **stocke;
    int max;
    int longueur;
public:
    compagni(const string& name,int m):nomComp(name),max(m)
    {longueur=0;
        stocke=new vaccin*[max];
        cout<<"appel du constructeur de compagni: adr="<<this<<endl;
    };
  virtual ~ compagni()
   {
     if(stocke) delete [] stocke;
  };
    void ajouter(vaccin *v)
    { if(max!=longueur)
        stocke[longueur++]=v;
      else
          cout<<"nombre max de stocke plein!! \n";
    };
 void afficher()
 {for(int i=0;i<longueur;i++)
    cout<<*stocke[i]<<"\n";
 };
  double production_stocke()
  {double cout_total=0.0;
      for(int i=0;i<longueur;i++)
          cout_total=cout_total+stocke[i]->production();
      return cout_total;
 };
};
int main()
{vaccin v1("Zamiflu", 0.55, 200000, HighTech);
 vaccin v2("Triphas", 0.20 , 10000);
// affichage des vaccins à compléter ici
cout << v1 << endl;
cout << v2 << endl;
cout << "le cout de production de v1 et v2 est : ";
cout << v1.production() + v2.production() << endl;
// Test des parties suivantes
cout << "test des parties suivantes ..." << endl;
// A COMPLETER
delocalise v3("Zamiflu", 0.55, 200000,true, HighTech);
 delocalise v4("Triphas", 0.20 , 10000,false);
 cout<<"-----------------  les vaccin de la compagni ICIBA  -----------\n";
 compagni C("ICIBA",6);
 C.ajouter(&v1);
 C.ajouter(&v2);
  C.ajouter(&v3);
 C.ajouter(&v4);

 C.afficher();

 cout<<"Leur cout total de production est :"<<C.production_stocke();
return 0;
}
