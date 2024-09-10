#include "Pile.h"

int main()
{ pile p(6);
	p.empiler(1);
    p.empiler(3);
    p.empiler(8);
	p.empiler(9);
	p.empiler(3);
	p.afficher();
	cout<<"Le sommet de  la pile:"<<p.Sommet()<<endl;;

	//cout<<"depilement "<<endl;
	//p.depiler();
	//p.afficher();
	pile p1=p;
	cout<<"l'affichage du copie:";
	p1.afficher();
   pile p4(5);
   p4=p1;
	return 0;
}
