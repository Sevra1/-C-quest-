# Niveau 7 — Pyramide de nombres

## Énoncé
Afficher une pyramide de nombres de 1 à n, en ligne par ligne, avec le nombre de colonnes qui augmente à chaque ligne.

## Exemple si n = 4 :
```
1
1 2
1 2 3
1 2 3 4
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
            printf("%i ", j);
        }
        printf("\n");
    }
    
    return 0;
}
```

## Compétences travaillées
- Boucle for : +½ ⭐
- Boucles imbriquées : ⭐ (nouvelle)

## XP gagnée
- Base : 100 XP
- Bonus autonomie : 25 XP
- Total : 125 XP

## Statut
✅ VALIDÉ
