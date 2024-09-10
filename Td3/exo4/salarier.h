#ifndef SALARIER_H_
#define SALARIER_H_

class salarie
{
	private:
		char* nom;
		char* prenom;
	public:
		salarie(const char*,const char*);
		salarie(salarie&);
		~salarie();
		char* get_nom()const;
		char* get_prenom()const;
		salarie& operator=(salarie&);
		void afficher(); // typage statique
};
#endif
