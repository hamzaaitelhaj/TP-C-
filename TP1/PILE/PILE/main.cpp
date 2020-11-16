#include <iostream>
#include"PILE.h"
int main()
{
    Pile p(4);
    p.empiler(0);
    p.empiler(2);
    p.empiler(4);
    p.empiler(5);
    p.afficherPile();
    p.depiler(2);
    p.afficherPile();

}
