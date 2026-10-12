# Niveau 6 — Compteur de nombres pairs

Statut : ✅ VALIDÉ

## Énoncé

Demander un entier `n`, parcourir les nombres de `1` à `n`, afficher uniquement les nombres pairs et compter combien de nombres pairs sont présents.

## Travail réalisé avec le joueur

Le joueur a travaillé sur :

- une boucle `for` parcourant les valeurs de `1` à `n` ;
- le test de parité avec le modulo `%` ;
- un compteur incrémenté lorsqu'un nombre pair est trouvé ;
- l'affichage des nombres pairs et du total.

## Version validée

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

- Utiliser le modulo pour reconnaître les nombres pairs.
- Combiner une condition et une boucle.
- Maintenir un compteur pendant un parcours.

XP gagnée : 100 XP
Compétence : Compteur ⭐

Le niveau 6 est validé.

> Note : ce fichier conserve la trace pédagogique disponible. Les extraits exacts de chaque brouillon intermédiaire ne sont pas reproduits ici lorsqu'ils ne sont pas disponibles dans l'historique actuel du dépôt.
