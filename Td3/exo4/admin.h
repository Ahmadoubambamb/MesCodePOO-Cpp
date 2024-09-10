#ifndef ADMIN_H_
#define ADMIN_H_
using namespace std;

class administratif:public salarie
{
	private:
		char* fonction;
	public:
		administratif(const char*,const char*,const char*);
		administratif (administratif& a);
		administratif& operator=(administratif&);
		~administratif();
		char* get_fonction();
		void afficher();
};
#endif
