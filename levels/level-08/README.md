# Niveau 8 — Introduction aux tableaux

Statut : ✅ VALIDÉ

## Objectif

Demander une taille `n`, remplir un tableau avec `n` entiers, afficher le tableau, puis afficher sa première et sa dernière valeur.

## Travail réel du joueur

### Premier essai

Fichier : `tableau-joueur-essai1.c`

```c
#include <stdio.h>

int main()
{
    int i,n;
    int t[n];
    printf("Entrez la taille du tableau : ");
    scanf("%i",&n);
    printf("Entrez les valeurs du tableau :\n");
    for(i=0;i<n;i++)
    {
        scanf("%i",&t[i]);
        printf("La valeur %i est : %i\n", i+1, t[i]);
    }
    printf("Tableau : %i\n", t[n]);
}
```

### Difficultés identifiées

- `n` devait être lu avant la déclaration de `t[n]`.
- `t[n]` est hors limites ; la dernière case est `t[n - 1]`.
- Une deuxième boucle était nécessaire pour afficher toutes les valeurs.

### Correction intermédiaire du joueur

```c
#include <stdio.h>

int main()
{
    int i,n;

    printf("Entrez la taille du tableau : ");
    scanf("%i",&n);

    int t[n];

    printf("Entrez les valeurs du tableau :\n");

    for(i=0;i<n;i++)
    {
        scanf("%i",&t[i]);
        printf("La valeur %i est : %i\n", i+1, t[i]);
    }

    printf("Tableau : ");

    for (i=0;i<n;i++)
    {
        printf("%i, ",t[i]);
    }
}
```

### Version finale du joueur

Fichier : `tableau-joueur.c`

```c
#include <stdio.h>

int main()
{
    int i,n;

    printf("Entrez la taille du tableau : ");
    scanf("%i",&n);

    int t[n];

    printf("Entrez les valeurs du tableau :\n");

    for(i=0;i<n;i++)
    {
        scanf("%i",&t[i]);
    }

    printf("Tableau : ");

    for (i=0;i<n;i++)
    {
        printf("%i, ",t[i]);
    }

    printf("\n");

    for (i=0;i<n;i++)
    {
        if(i==0)
        {
            printf("La première valeur du tableau est : %i\n",t[0]);
        }

        if(i==n-1)
        {
            printf("La dernière valeur du tableau est : %i\n",t[i]);
        }
    }
}
```

## Correction de référence

Fichier complet : `tableau.c`

La version finale du joueur est fonctionnelle. On peut toutefois afficher les deux extrémités plus directement après la boucle :

```c
printf("Première valeur : %i\n", t[0]);
printf("Dernière valeur : %i\n", t[n - 1]);
```

## Ce qui a été appris

- Les indices commencent à `0`.
- Pour `n` cases, le dernier indice est `n - 1`.
- Un tableau doit être déclaré avec une taille connue.
- Une boucle peut remplir le tableau.
- Une autre boucle peut l'afficher.

## Récompenses

- XP : 100 XP
- Compétences : Tableau ⭐ (débloquée), Boucle for +½ ⭐
- Fonction d'inventaire : `afficher_tableau` (voir `inventaire/inventaire.md`)

Le niveau 8 est validé. Les essais et corrections restent regroupés dans ce fichier ; aucun niveau 8-BIS n'est créé.
