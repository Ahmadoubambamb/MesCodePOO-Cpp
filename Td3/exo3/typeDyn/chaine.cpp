#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include "chaine.h"
using namespace std;
str::str()
 { cout<<"appel du constructeur par defaut de la class de base adr="<<this<<endl<<endl;
   lenght=0;
   ch=NULL;
 }
 str::str(const char* car)
{   int i=0; lenght=0;
    while(car[lenght]!='\0')
        lenght++;
    ch=new char[lenght+1];
    while(car[i]!='\0')
    {ch[i]=car[i];
      i++;
    }
}

str::str(const str& s)
{  cout<<"appel du constructeur de copie de la class de base: adr="<<this<<endl<<endl;
    lenght=s.lenght;
    ch=new char[lenght+1];
   int i=0;
   while(s.ch[i]!='\0')
   {ch[i]=s.ch[i];
        i++;
  }
}

str::~str()
{cout<<"appel du destructeur de la class de base adr="<<this<<endl<<endl;
    if(ch) delete ch;
}

str& str::operator=(const str& s)
{ if(this==&s)
     return (*this);
         delete this->ch;
          this->lenght=s.lenght;
          ch=new char[lenght+1];
         int i=0;
    while(s.ch[i]!='\0')
   {ch[i]=s.ch[i];
        i++;
   }
          return (*this);
}

bool str::operator==(const str& s)
{ int i=0;
    if(lenght!=s.lenght)
        return  false;
        while( i<lenght && ch[i]==s.ch[i])
            i++;
   return (i==lenght);
}

str str::operator+(const str& s)
{ char *new_ch=new char[lenght+s.lenght+1];
        int i=0,j=0;
   while(ch[i]!='\0')
   {new_ch[i]=ch[i];
       i++;
   }
    while(s.ch[j]!='\0')
    {new_ch[i]=s.ch[j];
        i++;
        j++;
    }
     str st(new_ch);
      return st;
}

char& str::operator[](int i)
{ // ch=(char*)realloc(ch,2*sizeof(char));
    return ch[i];
}

void str::afficher()
{
    cout<<ch;
}
