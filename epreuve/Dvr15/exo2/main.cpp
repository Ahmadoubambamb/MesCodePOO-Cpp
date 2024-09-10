#include "int2d.h"
int main()
{ Int2d t(3,4);
    t(1,1)=4;
    t(2,1)=6;
     t(0,0)=3;
    t.afficher();
}
