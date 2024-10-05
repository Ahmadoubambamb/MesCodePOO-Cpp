#include "fichier.h"

courier::courier(double p,mode_exp m,const string& ade,const string& add,double amount):adr_exp(ade),adr_dest(add)
{ poids=p;
  mode=m;
  montant=amount;
}

 ostream& courier::afficher(ostream& out) const
    {out<<"le poids: "<<poids<<endl
         <<"mode expedition: ";
         if(mode==normal)
             cout<<"normal"<<endl;
            else
                cout<<"Express"<<endl;
     out<<"adresse d'expedition: "<<adr_exp<<endl
         <<"adresse de destination: "<<adr_dest<<endl
         <<"montant: "<<montant<<endl;
         return out;
    }
ostream& operator<<(ostream& out,const courier& c)
{
    return c.afficher(out);
}

lettre::lettre(double p,mode_exp m,const string& ade,const string& add, format f,double mo):courier(p,m,ade,add,mo)
{
    form=f;
}

ostream& lettre::afficher(ostream& out) const
{this->courier::afficher(out);
    if(form==A3)
        out<<"format: A3"<<endl;
    else
        out<<"format: A4"<<endl;
    return out;
}

double lettre::calculprix_timbre()
{ if(mode==express)
     montant*=2;
    else
    { int tarif_de_base;
        if(form==A3)
            tarif_de_base=350;
        else
            tarif_de_base=250;
        montant=tarif_de_base+1.0*poids;
    }
    return montant;
}

colis::colis(double p,mode_exp m,const string& ade,const string& add,double v,double mo):courier(p,m,ade,add,mo)
{
  volume=v;
}

ostream& colis::afficher(ostream& out) const
{ this->courier::afficher(out);
    out<<"volume: "<<volume<<endl;
    return out;
}

double colis::calculprix_timbre()
{ if(mode==express)
     montant*=2;
   else
   {
    montant=0.25*volume + 1.0*poids;
   }
   return montant;
}

Boite_aux_Lettre::Boite_aux_Lettre(double h,double v,int m)
{
    hauteur=h; volume_boite=v;
    max=m; longeur=0;
    c=new courier*[max];
}

Boite_aux_Lettre::~Boite_aux_Lettre()
{
    if(c) delete [] c;
    cout<<"Appel du destructeur !"<<endl;
}
void Boite_aux_Lettre::ajouter(courier *cr)
{
    if(longeur<max) c[longeur++]=cr;
}

void Boite_aux_Lettre::afficher() const
{
    for(int i=0;i<longeur;i++)
    {//c[i]->afficher();
     cout<<*c[i];
     cout<<"\n----------------------------\n";
    }
}
