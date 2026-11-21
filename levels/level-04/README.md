# Niveau 4 — Table de multiplication

Statut : ✅ VALIDÉ

## Énoncé

Demander un entier n puis afficher sa table de multiplication de 1 à 10.

## Code original du joueur

Fichier : `table-multiplication-joueur.c`

```c
#include<stdio.h>

int main()
{
    int n;
    printf("Bonjour, veuillez saisir une valeur\n");
    scanf("%i",&n);
    int i;
    printf("Voici la table des %i :\n",n);
    for(i=0;i<=10;i++)
    {
         printf("- %i * %i = %i\n",n,i,i*n);
    }
}
```

## Analyse

Comparaison : la table est calculée correctement. Le parcours commence à `0`, donc la sortie inclut `n × 0`; la correction de référence commence à `1` pour suivre l'exercice classique de table de multiplication.

## Version corrigée

Fichier : `table-multiplication.c`

```c
#include <stdio.h>

int main()
{
    int n;

    printf("Bonjour, veuillez saisir une valeur : ");
    scanf("%i", &n);

    printf("Voici la table de %i :\n", n);

    for(int i = 1; i <= 10; i++)
    {
        printf("%i * %i = %i\n", n, i, n * i);
    }

    return 0;
}
```

## Ce qui a été appris

- bornes d'une boucle `for` (commencer à 1, finir à 10)

## Récompenses

- XP : 100 XP
- Compétences : détail par niveau non conservé
- Fonction d'inventaire : `afficher_table` (voir `inventaire/inventaire.md`)
