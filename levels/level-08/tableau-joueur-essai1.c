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
