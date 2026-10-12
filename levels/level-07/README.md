# Niveau 7 — Pyramide de nombres et boucles imbriquées

Statut : ✅ VALIDÉ

## Énoncé

Afficher une pyramide de nombres de `1` à `n`, ligne par ligne, avec un nombre de valeurs qui augmente à chaque ligne.

Exemple avec `n = 4` :

```text
1
1 2
1 2 3
1 2 3 4
```

## Travail réalisé avec le joueur

Le joueur a d'abord reçu un indice guidé pour comprendre la logique des boucles imbriquées. Il a ensuite consolidé cette notion avec une variation autonome : un triangle avec des étoiles.

Cette progression a permis de vérifier que la compréhension ne dépendait pas uniquement de la correction fournie.

## Version validée — pyramide de nombres

```c
#include <stdio.h>

int main()
{
    int i, j, n;

    printf("Entrez un entier: ");
    scanf("%i", &n);

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%i ", j);
        }
        printf("\n");
    }

    return 0;
}
```

## Consolidation autonome — triangle avec étoiles

Le joueur a réutilisé la même logique avec deux niveaux de répétition :

- une boucle extérieure pour les lignes ;
- une boucle intérieure pour les caractères affichés sur chaque ligne.

## Comparatif pédagogique

| Travail du joueur | Notion consolidée |
|---|---|
| Première boucle pour les lignes | Répétition extérieure |
| Deuxième boucle pour les valeurs ou étoiles | Répétition intérieure |
| `j <= i` | Nombre de colonnes variable |
| Variation avec `*` sans nouvel indice | Transfert autonome de la notion |

## Ce qui a été appris

- Construire des boucles imbriquées.
- Comprendre le lien entre la ligne courante et le nombre d'éléments affichés.
- Réutiliser une structure algorithmique dans un nouvel exercice.

XP gagnée : 125 XP
Compétences : Boucle `for` +½ ⭐, Boucles imbriquées ⭐

Le niveau 7 est validé.

> Note : ce fichier conserve la trace pédagogique disponible. Les extraits exacts de chaque brouillon intermédiaire ne sont pas reproduits ici lorsqu'ils ne sont pas disponibles dans l'historique actuel du dépôt.
