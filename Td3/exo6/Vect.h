#ifndef VECT_H_
#define VECT_H_

class vect
{ int n;
  int *adr;
public:
    vect(int);
    ~vect();
    int& operator[](int );
};

vect::vect(int N)
{ cout<<"appel du constructeur adr="<<this<<endl;
  n=N;
  adr=new int[n];
}

vect::~vect()
{ cout<<"appel du destructeur adr="<<this<<endl;
  delete [] adr;
}

int& vect::operator[](int i)
{
  if(i>0&& i<n)
    return adr[i];
}

#endif
