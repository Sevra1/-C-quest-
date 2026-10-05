# Niveau 2 — Calculatrice

## Énoncé
Demander deux entiers et afficher leur somme, différence, produit et quotient.

## Solution corrigée
```c
#include <stdio.h>

int main()
{
    int a, b;

    printf("Entrez le premier entier : ");
    scanf("%i", &a);

    printf("Entrez le deuxième entier : ");
    scanf("%i", &b);

    int somme = a + b;
    int diff = a - b;
    int produit = a * b;
    int quotient = a / b;

    printf("Somme : %i\n", somme);
    printf("Différence : %i\n", diff);
    printf("Produit : %i\n", produit);
    printf("Quotient : %i\n", quotient);

    return 0;
}
```
