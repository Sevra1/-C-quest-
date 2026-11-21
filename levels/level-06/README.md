# Niveau 6 — Compteur de nombres pairs

Statut : ✅ VALIDÉ

## Énoncé

Demander un entier n, parcourir les nombres de 1 à n, afficher uniquement les nombres pairs et compter combien de nombres pairs sont présents.

## Travail du joueur

Le code original de chaque brouillon n'a pas été conservé dans les sauvegardes ; seule la version validée est disponible.

## Version corrigée

Fichier : `compteur-nombres-pairs.c`

```c
#include <stdio.h>

int main()
{
    int n, compteur = 0;

    printf("Entrez un entier : ");
    scanf("%i", &n);

    printf("Nombres pairs : ");
    for(int i = 1; i <= n; i++)
    {
        if(i % 2 == 0)
        {
            printf("%i ", i);
            compteur++;
        }
    }

    printf("\nTotal de nombres pairs : %i\n", compteur);

    return 0;
}
```

## Comparatif pédagogique

| Travail du joueur | Notion consolidée |
|---|---|
| Parcours de `1` à `n` | Boucle `for` |
| Test `i % 2 == 0` | Modulo et condition |
| `compteur++` | Comptage |
| Affichage du total | Résultat calculé |

## Ce qui a été appris

- modulo pour reconnaître un nombre pair
- combiner condition et boucle
- compteur `compteur++`

## Récompenses

- XP : 100 XP
- Compétences : Boucle for +½ ⭐, Conditions +½ ⭐, Modulo +½ ⭐, Compteur ⭐ (débloquée)
- Fonction d'inventaire : `compter_pairs` (voir `inventaire/inventaire.md`)
