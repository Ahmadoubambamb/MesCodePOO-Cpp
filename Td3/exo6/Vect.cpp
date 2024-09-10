#include "Vectb.h"
#include "Vect.h"
#include <iostream>

vectb::vectb(int i,int p):vect(p-i+1)
{
    inf=i;
    sup=p;
}

vectb::~vectb()
{
    cout<<"appel du des"
}
