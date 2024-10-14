#include "voiture.h"
int main()
{voiture v={"vhiwe","BMW","SUV","HACHCAK","une voiture lux de 4 porte qui a une vitesse de 150Km/h",12};
  voiture v1={"vhiwer","Toyota","SUV","4X4","une voiture lux pour une sortir de famille de 4 porte qui a une vitesse de 120Km/h",12};
  voiture v0={"V0A-H","Nissan","Cordoba","Ranger","un Camion de deux porte",13};
 societe s(30);
  s.insertion(&v);
  s.insertion(&v1);
  s.insertion(&v0);
  s.afficher();
  return 0;
}
