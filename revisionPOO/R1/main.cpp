#include "int2d.h"
int main()
{ int2d t(2,2);
    t(0,0)=2;
    t(0,1)=6;
    t(1,0)=8;
    t(1,1)=1;
    t.afficher();
return 0;
}
