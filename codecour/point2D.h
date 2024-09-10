#ifndef POINT2D_H_
#define POINT2D_H_
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <math.h>
#include <string>
using namespace std;


class point {
private :
  int mx;
  int my;
public:
  point(int ,int );
  ~point();
  void afficher();
};

class pointcol :public point
{private:
 string m_couleur;
public:
  pointcol(int ,int ,const string& );
  ~pointcol();
  void afficher();
};
/*class point2D
{private:
    double x;
    double y;
public:
    point2D(double,double);// le constructeur
  // ~point2D();
    void affiche();
};
class point
{private:
   double m_x;
   double m_y;
public:
  void initialise(double abs,double ord );
  void affiche();
  void deplace(double dx, double dy);
};

class tabAleatoire
{ int nbval;
  int *val;
public:
   tabAleatoire(int,int);
  ~tabAleatoire();
   void affiche();
};


class vecteur
{private:
  double m_x;
  double m_y;
  double m_z;
public:
  vecteur(double c1=0,double c2=0,double c3=0);
  double produit(const vecteur& );
  vecteur somme(const vecteur& );
  double norme();
  void afficher();
  friend int coincide(const vecteur&,const vecteur&);
};*/

/*
class vecteur
{
private :
  int dim;
  float *m_x;
public:
  vecteur(int b)
  { cout<<"appel du constructeur:"<<endl;
    dim=b;
    m_x=new float[dim];
    for(int i=0;i<dim;i++)
      m_x[i]=0.0;
  };
  vecteur(const vecteur& v)
  {cout<<"appel du constructeur de copie:"<<endl;
    dim=v.dim;
    m_x=new float[dim];
     for(int i=0;i<dim;i++)
       m_x[i]=v.m_x[i];
  };
  ~vecteur(){delete m_x;};
  int dimension(){return dim;};
  int composante(int i){return m_x[i];};
  void composante(int i,float x){m_x[i]=x;};
 // void operator =(const vecteur&);
  vecteur& operator=(const vecteur&);

};
void affiche_vect(vecteur);*/

// Heritage


#endif
