# Niveau 1 — Prénom et âge

Statut : ✅ VALIDÉ

## Énoncé

Créer un programme qui demande le prénom et l'âge de l'utilisateur, puis les affiche.

## Code original du joueur

Fichier : `prenom-age-joueur.c`

```c
#include<stdio.h>

int main()
{
    char prenom[50];
    int age;
    printf("Quel est ton prénom ?\n");
    scanf("%s",prenom);
    printf("Quel est ton âge ?\n");
    scanf("%i",&age);
    printf("Bonjour %s, tu as %i ans.", prenom,age);
}
```

## Analyse

Comparaison : le code remplit correctement l'objectif. La correction de référence ajoute principalement `return 0;` et une fin de ligne dans le dernier affichage.

## Version corrigée

Fichier : `prenom-age.c`

```c
#include <stdio.h>

int main()
{
    char prenom[50];
    int age;

    printf("Quel est ton prénom ?\n");
    scanf("%s", prenom);

    printf("Quel est ton âge ?\n");
    scanf("%i", &age);

    printf("Bonjour %s, tu as %i ans.\n", prenom, age);

    return 0;
}
```

## Ce qui a été appris

- `printf` / `scanf`
- variables `int` et chaîne `char[]`
- `%s` et `%i`

## Récompenses

- XP : 100 XP
- Compétences : détail par niveau non conservé (voir bilan après le niveau 5 dans `profil.md`)
- Fonction d'inventaire : `saisir_entier` (voir `inventaire/inventaire.md`)
