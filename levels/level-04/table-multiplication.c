# Niveau 4 — Table de multiplication

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
