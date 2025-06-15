#include <iostream>
using namespace std;
struct noeud{
    int row;
    int column;
    int value;
    noeud *suivant;
};

class MatriceCreuse{
private :
    noeud * tete;
public:
    MatriceCreuse();
    ~MatriceCreuse();
    void ajouter(int,int,int);
    noeud * getTete() ;
    void afficher() const;
    MatriceCreuse(const MatriceCreuse&);
    MatriceCreuse& operator = (const MatriceCreuse&);
};


int main(){
    return 0;
}

MatriceCreuse::MatriceCreuse(){
    tete = nullptr;
}

MatriceCreuse::~MatriceCreuse()
{ noeud *p1 , *p2 = tete;
    while(p2 != nullptr){
        p1 = p2->suivant;
        delete p2;
        p2 = p1;
    }
    tete = nullptr;
}

void MatriceCreuse::ajouter(int l , int c , int val){
    noeud *m = new noeud;
    m->row = l;
    m->column = c;
    m->value = val;
    m->suivant = nullptr;
    if(tete == nullptr) tete = m;
    else{
        noeud *courant = tete;
         while(courant->suivant != nullptr){
             courant = courant->suivant;
        }
        courant->suivant = m;
    }
}

noeud *MatriceCreuse::getTete(){
    return tete;
}

void MatriceCreuse::afficher() const{
    noeud *tmp;
    while(tmp->suivant!=nullptr){
        cout<<"["<<tmp->row<<","<<tmp->column<<","<<tmp->value<<"]"<<"->";
        tmp=tmp->suivant;
    }
    cout<<"["<<tmp->row<<","<<tmp->column<<","<<tmp->value<<"]"<<endl;
}


MatriceCreuse::MatriceCreuse(const MatriceCreuse& other){
    noeud* temp = other.tete ;
    while(temp){
        this->ajouter(temp->column, temp->row, temp->value);
        temp = temp->suivant;
        // if(tete == nullptr)
        //  tete = temp;
        //  else{
        //     noeud * courant = tete;
        //     while(courant->suivant)
        //      courant = courant->suivant;
        //      courant->suivant = temp;
        //  }
      
    }
}

MatriceCreuse& MatriceCreuse::operator=(const MatriceCreuse& other){
    if(this == &other) return (*this);
    noeud *p1 , *p2 = tete;
    while(p2){
        p1 = p2->suivant;
        delete p2;
        p2 = p1; 
    }
    tete = nullptr;
    noeud *temp = other.tete;
    while(temp){
        this->ajouter(temp->column, temp->row, temp->value);
        temp = temp->suivant;
        // if(tete == nullptr)
        //   tete = temp;
        //   else{
        //     noeud *courant = tete;
        //     while(courant->suivant)
        //      courant = courant->suivant;
        //      courant->suivant = temp;
        //   }
        //   temp = temp->suivant;
    }
    return (*this);
}