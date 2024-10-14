#include "int2d.h"

int2d::int2d(int exp1,int exp2)
{ nlig = exp1;
  ncol = exp2;
  adr = new int[exp1*exp2];
}



int2d::~int2d()
{  if(adr)
    delete [] adr;
}

int& int2d::operator() (int i,int j)
{
    if(i>=0 && i<nlig && j>=0 && j<ncol)
        return adr[i*ncol+j];
        exit(-1);
}

void int2d::afficher()
{
    for(int i=0;i<ncol*nlig;i++)
        cout<<adr[i]<<"\t";
}
