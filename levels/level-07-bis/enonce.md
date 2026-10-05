# Niveau 7-BIS — Triangle avec des étoiles

## Énoncé
Afficher un triangle croissant en utilisant des astérisques `*`.

## Exemple si n = 4 :
```
*
* *
* * *
* * * *
```

## Solution corrigée
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
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
```

## Compétences travaillées
- Boucles imbriquées : +½ ⭐

## XP gagnée
- Base : 150 XP
- Bonus autonomie (sans indice) : 50 XP
- Total : 200 XP

## Statut
✅ VALIDÉ — Autonomie complète

## Note pédagogique
Exercice de consolidation après le Niveau 7. Le joueur a appliqué la logique des boucles imbriquées **sans indice**, démontrant une compréhension réelle de la notion.
