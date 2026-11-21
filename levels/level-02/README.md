# Niveau 2 — Calculatrice

Statut : ✅ VALIDÉ

## Énoncé

Demander deux entiers et afficher leur somme, différence, produit et quotient.

## Code original du joueur

Fichier : `calculatrice-joueur.c`

```c
#include<stdio.h>

int main()
{
    int a,b;
    printf(" Somme : %i\n",somme);
    scanf("%i",&a);
    scanf("%i",&b);
    int somme = a + b;
    int diff = a - b;
    int produit = a * b;
    int quotient = a/b;

    printf(" Somme : %i\n",somme);
    printf(" Différence : %i\n",diff);
    printf(" Produit : %i\n",produit);
    printf(" Quotient : %i\n",quotient);
}
```

## Analyse

Difficulté repérée : `somme` est utilisée dans le premier `printf` avant sa déclaration et son calcul. La saisie des deux valeurs et les calculs sont ensuite structurés correctement.

## Version corrigée

Fichier : `calculatrice.c`

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

## Ce qui a été appris

- opérateurs `+ - * /`
- déclarer une variable avant de l'utiliser
- division entière

## Récompenses

- XP : 100 XP
- Compétences : détail par niveau non conservé
- Fonction d'inventaire : `afficher_calculs` (voir `inventaire/inventaire.md`)
