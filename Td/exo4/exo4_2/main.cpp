#include "cercle1.h"
int main()
{Cercle c2(1,2,5),c1(2,2,4) ,c3(0,2,7);
    Centre C={0,2};
   c2.afficher();
   cout<<"le rayon  de C2="<<c2.GetRayon()<<endl;
   afficher_centre(c2.GetCentre());
   cout<<endl<<"le perimetre de c2 et c1 est resp :"<<c2.perimetre()<<" "<<c1.perimetre()<<endl;
   cout<<"la surface de c2 :"<<c2.surface()<<"et surface de c1 est : "<<c1.surface()<<endl;
   c1.SetRayon(3); c2.SetRayon(1);
    cout<<"le nouveau rayon  de C2 est :"<<c2.GetRayon()<<endl;
     cout<<"le nouveau rayon  de C1 est:"<<c1.GetRayon()<<endl;
     c1.SetCentre(C); c2.SetCentre(C);
      cout<<"le nouveau centre de c2:";
      afficher_centre(c2.GetCentre());
      cout<<endl;
      cout<<"le nouveau centre de c1:";
      afficher_centre(c1.GetCentre());
      cout<<endl;
      if(c1.comparer(c3))
        cout<<"alors c1==c3"<<endl;
      else
        cout<<"c1!=c3"<<endl;
    return 0;
}
