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
