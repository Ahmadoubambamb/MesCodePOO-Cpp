#include "chaine.h"
//using namespace std;
int main()
{   char s1[15]="Bamba",s2[15]=" Mboup" ,S1[15]="Bamba Mboup",S2[15]="bamba mboup";
    str st(s1),st1(s2),st3,s4(S1),s5(S2);
    cout<<st;
    st3=st+st1;
    cout<<st3;
    st3=st;
    cout<<st3;
    if(st3==s4)
        cout<<"st3=s4 "<<endl;
      else
          cout<<"st3!=s4 "<<endl;
     if(s5==s4)
        cout<<"s5=s4 "<<endl;
      else
          cout<<"s5!=s4 "<<endl;
    st[5]='x';
    cout<<st;
    s5[11]='M';
    cout<<s5;
    return 0;
}
