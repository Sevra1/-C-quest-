#include<stdio.h>

int main()
{
    int n;

    printf("Entrer un entier: ");
    scanf("%i",&n);

    int somme_pair = 0;
    int somme_impair = 0;

    for(int i=1;i<=n;i++)
    {
         int reste = i % 2;
         if(reste == 0)
         {
             somme_pair += i;
             printf("%i est pair\n",i);
         }

         else if(reste != 0)
         {
             somme_impair += i;
             printf("%i est impair\n",i);
         }
    }

    printf("Somme des chiffres pair: %i\n",somme_pair);
    printf("Somme des chiffres impair: %i\n",somme_impair);
}
