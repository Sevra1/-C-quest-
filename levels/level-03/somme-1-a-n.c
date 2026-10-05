# Niveau 3 — Somme de 1 à n

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
        printf("%i\n", i);
    }

    printf("La somme des nombres allant de 1 jusqu'à %i est : %i\n", n, somme);

    return 0;
}
```
