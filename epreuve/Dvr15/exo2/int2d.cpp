
#include "int2d.h"

//Int2d::Int2d(int l,int c)
//{ adr=new int[l*c];
    //ncol=c;
    //nlig=l;
//}
//Int2d::~Int2d()
//{ if(adr)
    //delete [] adr;
//}

//int& Int2d::operator()(int i,int j)
//{if(i>0 && i<nlig && j>0 && j<ncol)
    //return adr[i*ncol+j];
    //exit(-1);

//}

//void Int2d::afficher()
//{
    //for(int i=0;i<nlig*ncol;i++)
    //{  cout<<adr[i]<<"  ";
       //if((i+1)%ncol==0)
       //cout<<endl;
    //}
//}


 Int2d::Int2d(int l,int c)
{ adr=new int*[l];
    for(int i=0;i<l;i++)
        adr[i]=new int[c];
    for(int i=0;i<l;i++)
        for(int j=0;j<c;j++)
            adr[i][j]=0;
    ncol=c;
    nlig=l;
}
Int2d::~Int2d()
{ if(adr)
   {
    for(int i=0;i<nlig;i++)
        delete [] adr[i];
    delete [] adr;
   }

}

int& Int2d::operator()(int i,int j)
{if(i>=0 && i<nlig && j>=0 && j<ncol)
    return adr[i][j];
   exit(-1);
}

void Int2d::afficher()
{
    for(int i=0;i<nlig;i++)
    {  for(int j=0;j<ncol;j++)
            cout<<adr[i][j]<<"  ";
       cout<<endl;
    }
}


