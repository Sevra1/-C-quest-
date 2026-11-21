#include <stdio.h>

int main()
{
    int n, compteur = 0;

    printf("Entrez un entier : ");
    scanf("%i", &n);

    printf("Nombres pairs : ");
    for(int i = 1; i <= n; i++)
    {
        if(i % 2 == 0)
        {
            printf("%i ", i);
            compteur++;
        }
    }

    printf("\nTotal de nombres pairs : %i\n", compteur);

    return 0;
}
