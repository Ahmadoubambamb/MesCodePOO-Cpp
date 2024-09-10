#ifndef VECTB_H_
#define VECTB_H_

class vectb:public vect
{   int inf;
    int sup;
public:
    vectb(int,int);
    ~vectb();
    int& operator[](int);
}

#endif
