# Niveau 6 — Compteur de nombres pairs

## Objectif
Demander n, parcourir les nombres de 1 à n, afficher uniquement les nombres pairs et compter combien de nombres pairs sont présents.

## Récompenses prévues
- XP de base : +100
- Boucle for : +½ ⭐
- Conditions : +½ ⭐
- Modulo : +½ ⭐
- Nouvelle compétence : Compteur ⭐
- Bonus potentiel : variable selon la qualité de la solution

## Exemple de structure attendue
```c
#include <stdio.h>

int main()
{
    int n;
    int compteur = 0;

    printf("Entrez un entier : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
            compteur++;
        }
    }

    printf("Il y a %d nombres pairs de 1 à %d.\n", compteur, n);

    return 0;
}
```
