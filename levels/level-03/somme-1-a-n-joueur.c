#include<stdio.h>

int main()
{
    int n;
    printf("Bonjour, veuillez saisir une valeur\n");
    scanf("%i",&n);
    int somme = 0;
    int i;
    for(i=1;i<=n;i++)
    {
         somme = somme + i;
         printf("-%i\n",i);
    }
    printf("La somme de tout les chiffre allant de 1 jusqu'à %i est : %i\n",n,somme);
    return 0;
}
