# Niveau 5 — Pair ou impair — DÉFI INTERMÉDIAIRE 🟡

Statut : ✅ VALIDÉ

## Énoncé

Demander n. Pour chaque nombre de 1 à n, indiquer pair/impair et calculer séparément les sommes paires et impaires.

## Code original du joueur

Fichier : `pair-ou-impair-joueur.c`

```c
#include<stdio.h>

int main()
{
    int n;

    printf("Entrer un entier: ");
    scanf("%i",&n);

    int somme_pair = 0;
    int somme_impair = 0;

    for(int i=1;i<=n;i++)
    {
         int reste = i % 2;
         if(reste == 0)
         {
             somme_pair += i;
             printf("%i est pair\n",i);
         }

         else if(reste != 0)
         {
             somme_impair += i;
             printf("%i est impair\n",i);
         }
    }

    printf("Somme des chiffres pair: %i\n",somme_pair);
    printf("Somme des chiffres impair: %i\n",somme_impair);
}
```

## Analyse

Comparaison : la logique est correcte. Le joueur a explicitement stocké le reste du modulo dans `reste`. Le `else if(reste != 0)` fonctionne ici ; un `else` simple aurait toutefois suffi puisque le seul autre cas après `reste == 0` est un reste différent de zéro.

## Version corrigée

Fichier : `pair-ou-impair.c`

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

## Ce qui a été appris

- modulo `%`
- `if` / `else`
- deux accumulateurs dans une même boucle

## Récompenses

- XP : 250 XP (palier niveau 5)
- Compétences : Conditions +½ ⭐, Modulo +½ ⭐
- Fonction d'inventaire : `est_pair` (voir `inventaire/inventaire.md`)
