# Niveau 1 — Prénom et âge

## Énoncé
Créer un programme qui demande le prénom et l'âge de l'utilisateur, puis les affiche.

## Solution corrigée
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
