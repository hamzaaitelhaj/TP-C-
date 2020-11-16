


class Pile
{
public:
	Pile();
	Pile(int);
	void empiler(int);
	void depiler(int);
	bool pileVide();
	void afficherPile()const;
	~Pile();
private:
	int sommet;
	int *table;
	int taille;
};
