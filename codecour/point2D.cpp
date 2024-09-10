#include "point2D.h"
 point::point(int x ,int y)
  {
    mx=y; my=x;
  }

void point::afficher()
{
cout<<"("<<mx<<","<<my<<")";
}

 pointcol::pointcol(int x ,int y ,const string& c):point(x,y){
    m_couleur=c;
  }

  void pointcol::afficher(){
    point::afficher();
    cout<<"-"<<m_couleur<<endl;
  }
/*void point::initialise(double abs,double ord)
  {
    m_x=abs;
    m_y=ord;
  }
    void point::affiche()
    {
        cout<<"("<<m_x<<","<<m_y<<")"<<endl;
    }
void point::deplace(double dx,double dy)
{
  m_x+=dx;
  m_y+=dy;
}
tabAleatoire::tabAleatoire(int max,int nb)
{ int i;
  cout<<"apelle du constructeur !"<<endl;
  val=new int[nbval=nb];
  for(i=0;i<nb;i++)
    val[i]=rand()%10+1;
}

void tabAleatoire::affiche()
{int i;
  for(i=0;i<nbval;i++)
    cout<<val[i]<<"  ";
}

tabAleatoire::~tabAleatoire()
{
  cout<<"apelle du destructeur !"<<endl;
  delete val;
}

  vecteur::vecteur(double c1,double c2,double c3)
  { cout<<"appel du constructeur !"<<endl;
    m_x=c1; m_y=c2; m_z=c3;
  }
double vecteur::produit(const vecteur& v2)
{
  return(m_x*v2.m_x+m_y*v2.m_y+m_z*v2.m_z);
}
vecteur vecteur::somme(const vecteur& v2)
{ vecteur v;
  v.m_x=m_x+v2.m_x;
  v.m_y=m_y+v2.m_y;
  v.m_z=m_z+v2.m_z;
  return v;
}
double vecteur::norme()
{
  double n;
  n=pow(m_x,2)+pow(m_y,2)+pow(m_z,2);
  return (sqrt(n));
}
void vecteur::afficher()
{
  cout<<"("<<m_x<<","<<m_y<<","<<m_z<<")"<<endl;
}
int coincide(const vecteur&v1,const vecteur&v2)
{
  if((v1.m_x==v2.m_x)&&(v1.m_y==v2.m_y)&&(v1.m_z==v2.m_z)) return 1;
  else return 0;
}
*/
  //void affiche_vect(vecteur w)
  //{ cout<<"(";
    //for(int i=0;i<w.dimension();i++)
    //{ cout<<w.composante(i);
       //if(i!=w.dimension()-1)
         //cout<<",";
    //}
    //cout<<")"<<endl;
  //}
 /* void vecteur::operator =(const vecteur& w)
  {delete m_x;
    dim=w.dim;
    m_x=new float[dim];
    for(int i=0;i<dim;i++)
        m_x[i]=w.m_x[i];
  }

  vecteur& vecteur::operator=(const vecteur& w)
  {if(this==&w) return (*this);
     delete m_x;
     dim=w.dim;
      m_x=new float[dim];
    for(int i=0;i<dim;i++)
        m_x[i]=w.m_x[i];
    return (*this);
  }
*//*
 vecteur& vecteur::operator=(const vecteur& w)
  {if(this==&w) return (*this);
     delete this->m_x;
     this->dim=w.dim;
      m_x=new float[this->dim];
    for(int i=0;i<this->dim;i++)
        this->m_x[i]=w.m_x[i];
    return (*this);
  }*/
