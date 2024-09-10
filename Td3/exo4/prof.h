#ifndef PROF_H_
#define PROF_H_

class professeur : public salarie
{
	private:
		char* diplome;
		char* matiere[10];
		int n;
	public:
		professeur(const char*,const char*,const char*);
		professeur(professeur& p);
		~professeur();
		char* get_diplome();
		char* get_matiere(int);
		void ajout_matiere(const char*);
		professeur& operator=(professeur&);
		void afficher();
};
#endif
