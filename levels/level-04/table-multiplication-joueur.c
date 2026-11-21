#include<stdio.h>

int main()
{
    int n;
    printf("Bonjour, veuillez saisir une valeur\n");
    scanf("%i",&n);
    int i;
    printf("Voici la table des %i :\n",n);
    for(i=0;i<=10;i++)
    {
         printf("- %i * %i = %i\n",n,i,i*n);
    }
}
