#include "chaine.h"
//using namespace std;
str::str()
 { cout<<"appel du constructeur adr="<<this<<endl;
   lenght=0;
   ch=NULL;
 }
 str::str(char* car)
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
{  cout<<"appel du constructeur de copie: adr="<<this<<endl;
    lenght=s.lenght;
    ch=new char[lenght+1];
   int i=0;
   while(s.ch[i]!='\0')
   {ch[i]=s.ch[i];
        i++;
  }
}

str::~str()
{cout<<"appel du destructeur adr="<<this<<endl;
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

ostream& operator<<(ostream& sortie,const str& s)
{
    sortie<<"la longueur de la chaine :"<<s.lenght<<" et la chaine est :";
    int i=0;
    while(i<s.lenght)
       // sortie<<"ch"<<i<<s.ch[i++]<<endl;
        sortie<<s.ch[i++];
    sortie<<endl;
    return sortie;
}

/*str::str()
 {lenght=0;
   ch=new char[1];
    ch[0]='\0';
 }
 str::str(char* car)
     {lenght=strlen(car);
         ch=new char[lenght];
         strcpy(ch,car);
     }

str::str(const str& s)
{ lenght=s.lenght;
    ch=new char[lenght+1];
    strcpy(ch,s.ch);
}

str::~str()
{cout<<"appel du destructeur"<<endl;
    if(ch) delete ch;}

str& str::operator=(const str& s)
{ if(this==&s)
     return (*this);
         delete this->ch;
          this->lenght=s.lenght;
          ch=new char[lenght+1];
          strcpy(ch,s.ch);
          return (*this);
}

bool str::operator==(const str& s)
{
    return (strcmp(ch,s.ch)==0);
}

str str::operator+(const str& s)
{ char *new_ch=new char[lenght+s.lenght+1];
    strcpy(new_ch,ch);
    strcat(new_ch,s.ch);
     str st(new_ch);
      return st;
}

char& str::operator[](int i)
{
    return ch[i];
}

ostream& operator<<(ostream& sortie,const str& s)
{
    sortie<<"la longueur de la chaine :"<<s.lenght<<" et la chaine est :"<<s.ch<<endl;
    return sortie;
}*/
