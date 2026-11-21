#include <stdio.h>

int main()
{
    int i, n;

    printf("Entrez la taille du tableau : ");
    scanf("%i", &n);

    int t[n];

    printf("Entrez les valeurs du tableau :\n");
    for (i = 0; i < n; i++)
    {
        scanf("%i", &t[i]);
    }

    printf("Tableau : ");
    for (i = 0; i < n; i++)
    {
        printf("%i ", t[i]);
    }
    printf("\n");

    printf("Première valeur : %i\n", t[0]);
    printf("Dernière valeur : %i\n", t[n - 1]);

    return 0;
}
