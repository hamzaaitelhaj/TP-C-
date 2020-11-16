

class Compte
{
public:
	Compte();
	Compte(int, const char*, float);
	bool retirerArgent(float);
	Compte deposerArgent(float);
	void consulterSolde() ;
	Compte transfererArgent(float,const Compte&);
	~Compte();
private:
	int numCompte;
	char* nomProprietaire;
	float solde;
};
