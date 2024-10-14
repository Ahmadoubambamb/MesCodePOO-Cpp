#include "Voiture.h"
int main()
{table T(12),T1(34);
  voiture *v=creer_v("vhiwe","BMW","SUV","HACHCAK","une voiture lux de 4 porte qui a une vitesse de 150Km/h",12);
  voiture v1={"vhiwer","Toyota","SUV","4X4","une voiture lux pour une sortir de famille de 4 porte qui a une vitesse de 120Km/h",12};
  voiture v0={"V0A-H","Nissan","Cordoba","Ranger",nullptr,13};
   v0.presentation=new char[100];
   strcpy(v0.presentation,"Une voiture ranger Row de lux presentable roulant une vitesse 200Km/h");
    T.inserer(v);
    T.inserer(v1);
    T.inserer(&v0);
 table t=T;
 t.afficher();
    return 0;
}
