
class Temps
{
public:
	Temps();
	Temps(int, int, int);
	void  heureAnglaise()const;
	void heureFrancais()const;
	bool inferieur(const Temps&);
	void compare(int ,int ,int );
	~Temps();
private:
	int heure, minute, seconde;
};

