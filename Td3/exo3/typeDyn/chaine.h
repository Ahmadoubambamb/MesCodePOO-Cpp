#ifndef CHAINE_H_
#define CHAINE_H_

class str
{private :
    unsigned int lenght;
    char* ch;
public:
     str();
     str(const char*);
     str(const str&);
     virtual ~str();
     str& operator=(const str&);
     bool operator==(const str&);
     str operator+(const str&);
     char& operator[](int);
  // friend ostream& operator<<(ostream& ,const str& );
    virtual void afficher();
};

#endif
