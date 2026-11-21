# Niveau 7 — Pyramide de nombres (boucles imbriquées)

Statut : ✅ VALIDÉ

## Énoncé

Afficher une pyramide de nombres de 1 à n, ligne par ligne, avec un nombre de valeurs qui augmente à chaque ligne.

Exemple avec n = 4 :

```text
1
1 2
1 2 3
1 2 3 4
```

## Travail du joueur

Le code original de chaque brouillon n'a pas été conservé dans les sauvegardes ; seule la version validée est disponible.

## Version corrigée

Fichier : `pyramide-nombres.c`

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

## Consolidation intégrée — triangle avec étoiles

Ancien « 7-BIS ». Selon la règle des consolidations, il fait partie du niveau 7 et n'est plus un niveau séparé.

Le joueur avait reçu l'indice 3 pour la pyramide, puis a réalisé ce triangle **sans indice**.

Fichier : `triangle-etoiles.c`

```c
#include <stdio.h>

int main()
{
    int i, j, n;
    
    printf("Entrez un entier:\n ");
    scanf("%i", &n);
    
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
```

## Comparatif pédagogique

| Travail du joueur | Notion consolidée |
|---|---|
| Première boucle pour les lignes | Répétition extérieure |
| Deuxième boucle pour les valeurs ou étoiles | Répétition intérieure |
| `j <= i` | Nombre de colonnes variable |
| Variation avec `*` sans nouvel indice | Transfert autonome de la notion |

## Ce qui a été appris

- boucle extérieure = lignes, boucle intérieure = colonnes
- `j <= i` : nombre de colonnes variable
- transfert autonome à un nouveau motif (étoiles)

## Récompenses

- XP : 300 XP = pyramide 125 XP (100 + 25 bonus) + consolidation 175 XP
- Compétences : Boucle for +½ ⭐, Boucles imbriquées ⭐½ (débloquée)
- Fonction d'inventaire : `afficher_pyramide` (voir `inventaire/inventaire.md`)
