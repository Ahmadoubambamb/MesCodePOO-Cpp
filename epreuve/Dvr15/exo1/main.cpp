#include "Document.h"
int main()
{ char nom[30]="Delannoy";
    document doc(nom);
    doc.ajouter("23gf");
    doc.ajouter("Hj45");
    doc.afficher();
   return 0;
}
