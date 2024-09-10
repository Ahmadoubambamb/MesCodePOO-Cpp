#include "Fraction.h"

Fraction::Fraction(int n,int d)
{
    num=n;
    deno=d;
}

void Fraction::afficher()
{cout<<num
     <<"/"<<deno<<endl;
}
