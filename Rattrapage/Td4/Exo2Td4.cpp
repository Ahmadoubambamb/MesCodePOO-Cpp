#include <iostream>
#include <string>
class Base {
    public:
    virtual void afficher() = 0;
    virtual int clef() = 0;
};

class Individu : public Base{
    private:
    int id;
    string nom;
    string prenom;
    public:
    Individu(int idi, const string& name, const string& pr) : id(idi), nom(nom), prenom(pr){};
    // virtual ~Individu(){};
    void afficher(){
        cout << "id : " << id << " nom : " << nom << " prenom : " << prenom << endl;
    }
    int clef(){
        return id;
    }
};

class Employer : public Individu{
    private:
    string competence;
    public:
    Employer(int idi,const string& name,const string& pr,const string& comp):Individu(idi,name,pr),competence(comp){};
    void afficher() const{
        Individu::afficher();
        cout << "competence : " << competence << endl;
    };
    int clef() const{
        int ide = Individu::clef();
        return ide;
    };
};