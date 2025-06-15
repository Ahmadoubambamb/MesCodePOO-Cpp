#include "CombaLute.h"

CombaLute::CombaLute(Date d,const string& des,double c,double fr,double dom):Evenement(d,des,c),frais(fr),dommage(dom){}

void CombaLute::afficher(ostream& out) const{
  Evenement::afficher(out);
  out <<"frais de securite : "<<frais <<endl
      <<"dommage et interet : "<<dommage<<endl;
}

double CombaLute::calcul_cout(){
    double coutb = Evenement::calcul_cout();
    cout_base =  coutb + frais + dommage;
    return cout_base;
}

