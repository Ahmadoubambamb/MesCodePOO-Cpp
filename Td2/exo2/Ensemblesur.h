 #ifndef ENSEMBLESUR_H_
#define ENSEMBLESUR_H_
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

class ensemble
{private:
    int max;
    int card;
    int courant;
    int *element;
public:
    ensemble(int=0);
    ensemble(const ensemble&);
    int cardinal() const;
    ensemble& operator<<(int);
    ensemble& operator>>(int);
    int operator%(int);
    ~ensemble();
    void afficher() const;
    friend void f_que_les_pair(ensemble);
    ensemble& operator=(const ensemble&);
    ensemble operator+(const ensemble&);
    ensemble operator*(const ensemble&);

    void init();
    bool existe();
    int prochain();
    int somme();
};
//int traiter(int(*f)(int));
//ensemble f_que_les_pair(const ensemble );
#endif
