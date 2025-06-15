#include <string>
#include <iostream>
using namespace std;
class Membre{
private :
    string nom;
    int annee;
public:
    Membre(const string& n , int a):nom(n),annee(a){};
    virtual ~Membre(){};
    virtual void afficher(){
        cout<<nom<<endl
            <<"annee d'arrivee : "<<annee<<endl;
    };

    virtual int nombre_annee(int annee_actuel){
      return annee_actuel - annee;
    };
};

class Personnel : public Membre{
private:
    string nom_depart;
public:
    Personnel(const string& nomP,int anneeP ,const string& nomD):Membre(nomP,anneeP),nom_depart(nomD){};
    virtual ~Personnel(){};
    virtual void afficher(){
        Membre::afficher();
        cout<<"nom departement : "<<nom_depart<<endl;
    };
    virtual int nombre_annee(int annee_actuel){
        return Membre::nombre_annee(annee_actuel);
    };
};

class Etudiant : public Membre{
private:
    string nomClass;
public:
    Etudiant(const string& nomE,int a,const string& nomC):Membre(nomE,a),nomClass(nomC){};
    virtual ~Etudiant(){};
    virtual void afficher(){
        Membre::afficher();
        cout<<"nom class : "<<nomClass<<endl;
    };
    virtual int nombre_annee(int annee_actuel){
        return Membre::nombre_annee(annee_actuel);
    };
};

class Secretaire : public Personnel{
public:
    Secretaire(const string& n,int a , const string& nomD):Personnel(n,a,nomD){};
    virtual ~Secretaire(){};
    void afficher(){
        Personnel::afficher();
    };
    int nombre_annee(int annee_actuel){
        return Personnel::nombre_annee(annee_actuel);
    };
};

class Enseignant : public Personnel{
private :
    string nom_labo ;
    double salaire;
public:
    Enseignant(const string&nE,int a ,const string& nomD, const string& nomL , double sal):Personnel(nE,a,nomD),nom_labo(nomL),salaire(sal){};
    virtual ~ Enseignant(){};
    void afficher(){
        Personnel::afficher();
        cout<<"nom de labo : "<<nom_labo<<endl
            <<"salaire : "<<salaire<<endl;
    };
    int nombre_annee(int annee_actuel){
        return Personnel::nombre_annee(annee_actuel);
    };
};

class EtudiantEtranger : public Etudiant{
private:
    string nom_pays;
public:
    EtudiantEtranger(const string& n , int a ,const string& nc , const string& p):Etudiant(n,a,nc),nom_pays(p){};
    virtual ~EtudiantEtranger(){};
    void afficher(){
        Etudiant::afficher();
        cout<<"Pays origin : "<<nom_pays<<endl;
    };
    int nombre_annee(int annee_actuel){
        return Etudiant::nombre_annee(annee_actuel);
    };
};

class EtudiantSenegalais : public Etudiant{
private:
    string mention;
public:
    EtudiantSenegalais(const string& n,int a ,const string& nc,const string& m):Etudiant(n,a,nc),mention(m){};
    virtual ~EtudiantSenegalais(){};
    void afficher(){
        Etudiant::afficher();
        cout<<"mention : " <<mention<<endl;
    };
    int nombre_annee(int annee_actuel){
        return Etudiant::nombre_annee(annee_actuel);
    };
};

class Institut {
private:
    Membre ** membres;
    string nom;
    int max;
    int longueur;
public:
    Institut(const string& nomI , int m):nom(nomI){
        max = m;
        membres = new Membre*[max];
    };
    virtual ~Institut(){
        if(membres) delete [] membres;
    };
  void ajouter_membre(Membre *m){
      if(longueur < max)
          membres[longueur++] = m;
   };
   void afficher(){
       for(int i = 0;i < longueur ;i++)
       { membres[i]->afficher();
           cout<<endl<<"================================="<<endl;
       }
    };
       void nombre_moyenne_annee(int annee_actuel){
           int nombre_total = 0;
           for(int i = 0; i < longueur ;i++)
               nombre_total +=membres[i]->nombre_annee(annee_actuel);
           cout<<"Le nombre annee moyenne frequente pour chaque : "<<nombre_total/longueur<<endl;
    };
};

int main(){
    Secretaire S("Christine",2005,"Informatique");
    Enseignant E("Bamba",2015,"Informatique","science",2000000);
    EtudiantEtranger Ee("Kougoue",2022,"L3","Tchad");
    EtudiantSenegalais Es("Cheikh",2022,"L3","Bien");

    Institut I("SAT",10);
    I.ajouter_membre(&S);
     I.ajouter_membre(&E);
      I.ajouter_membre(&Ee);
       I.ajouter_membre(&Es);
       I.afficher();
       I.nombre_moyenne_annee(2025);
    return 0;
}

