# Niveau 1 — Prénom et âge

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
