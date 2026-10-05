# Niveau 5 — Pair ou impair

## Énoncé
Demander n. Pour chaque nombre de 1 à n, indiquer pair/impair et calculer séparément les sommes paires et impaires.

## Solution corrigée
```c
#include <stdio.h>

int main()
{
    int n;
    int somme_pair = 0;
    int somme_impair = 0;

    printf("Entrer un entier : ");
    scanf("%i", &n);

    for(int i = 1; i <= n; i++)
    {
        if(i % 2 == 0)
        {
            somme_pair += i;
            printf("%i est pair\n", i);
        }
        else
        {
            somme_impair += i;
            printf("%i est impair\n", i);
        }
    }

    printf("Somme des nombres pairs : %i\n", somme_pair);
    printf("Somme des nombres impairs : %i\n", somme_impair);

    return 0;
}
```
