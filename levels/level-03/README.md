# Niveau 3 — Somme de 1 à n

Statut : ✅ VALIDÉ

## Énoncé

Demander un entier n et calculer la somme de 1 à n.

## Code original du joueur

Fichier : `somme-1-a-n-joueur.c`

```c
#include<stdio.h>

int main()
{
    int n;
    printf("Bonjour, veuillez saisir une valeur\n");
    scanf("%i",&n);
    int somme = 0;
    int i;
    for(i=1;i<=n;i++)
    {
         somme = somme + i;
         printf("-%i\n",i);
    }
    printf("La somme de tout les chiffre allant de 1 jusqu'à %i est : %i\n",n,somme);
    return 0;
}
```

## Analyse

Comparaison : la logique de somme et la boucle sont correctes. Le joueur affiche également chaque valeur parcourue, ce qui permet de vérifier le déroulement de l'algorithme.

## Version corrigée

Fichier : `somme-1-a-n.c`

```c
#include <stdio.h>

int main()
{
    int n;
    int somme = 0;

    printf("Bonjour, veuillez saisir une valeur : ");
    scanf("%i", &n);

    for(int i = 1; i <= n; i++)
    {
        somme += i;
    }

    printf("La somme des nombres allant de 1 jusqu'à %i est : %i\n", n, somme);

    return 0;
}
```

## Ce qui a été appris

- boucle `for`
- accumulateur `somme += i`

## Récompenses

- XP : 100 XP
- Compétences : détail par niveau non conservé
- Fonction d'inventaire : `somme_1_a_n` (voir `inventaire/inventaire.md`)
