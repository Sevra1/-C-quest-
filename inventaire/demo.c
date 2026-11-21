/* Démonstration de l'inventaire.
 * Compiler : gcc demo.c inventaire.c -o demo
 */
#include <stdio.h>
#include "inventaire.h"

int main(void)
{
    int a = saisir_entier("Entrez un entier : ");
    int b = saisir_entier("Entrez un autre entier : ");
    afficher_calculs(a, b);

    printf("Somme de 1 à %i : %i\n", a, somme_1_a_n(a));
    printf("%i est %s\n", a, est_pair(a) ? "pair" : "impair");
    printf("Nombres pairs entre 1 et %i : %i\n", a, compter_pairs(a));

    afficher_table(b);
    afficher_pyramide(4);

    int t[] = {3, 8, 1, 6};
    afficher_tableau(t, 4);
    return 0;
}
