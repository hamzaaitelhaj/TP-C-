#include "PILE.h"
#include<iostream>
using namespace std;


Pile::Pile()
{
	table = 0;
	sommet = -1;
	taille = 0;
}

Pile::Pile(int taille)
{
	this->taille = taille;
	table = new int[taille];
	sommet = -1;
}

void Pile::empiler(int valeur)
{
	int i = sommet+1;
	if (pileVide()) {
	table[i] =valeur;
	sommet++;
	}
	else
		cout << "La pile est pleine!"<<endl;
}

void Pile::depiler(int valeur)
{

	if (sommet > 0) {
		do {

			if (table[sommet] == valeur) {
				cout << table[sommet]<< endl;
                table[sommet]=table[sommet+1];
                taille--;
                break;
			}
			sommet--;
		} while (sommet!=-1);
	}
}

bool Pile::pileVide()
{
	if(sommet>=0)
		return true;

}

void Pile::afficherPile() const
{
    cout << "-------------------"<< endl;

	for (int i = 0; i <taille; i++) {

	cout << table[i]<< endl;
	}

	cout << "-------------------"<< endl;
}
Pile::~Pile(){
	delete [] table;
}
