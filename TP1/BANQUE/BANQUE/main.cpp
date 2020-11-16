#include <iostream>
#include"BANQUE.cpp"

using namespace std;
int main()
{
    Compte A(5000, "Ahmed Amine", 8050.175);
    // consulter le soldes
    A.consulterSolde();/

    // ajouter un solde

    A.deposerArgent(12000);
    A.consulterSolde();

    // transferer une somme

    Compte B(01552, "HAMZA AITELHAJ", 0000);
    B=A.transfererArgent(100, B);
    B.consulterSolde();

    // retirer une somme;
    cout << B.retirerArgent(200);
}
