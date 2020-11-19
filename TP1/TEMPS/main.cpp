#include<iostream>
#include"TEMPS.h"
using namespace std;

int main() {
	int h, m, s;
	do {
		cout << "donnez l horraire represente par :  hh:mm:s  :"; cin >> h >> m >> s;
	} while (h > 24, m> 60, s > 60);
	Temps t(h, m, s);
	char cas;

		cout << "pour afficher l heure Anglaise  tapez 'A' ou l heure francaise tapez 'F' :"; cin >> cas;
	switch (cas)
	case 'A':
		t.heureAnglaise();
		break;
	case 'F':
		t.heureFrancais();
		break;
	default:
		cout << "choix invalide!" << endl;
	}

	t.compare(13, 25,30);

	t.~Temps();
	return 0;
	}
