#include <stdio.h>

int main()
{
    int i, j, n;
    
    printf("Entrez un entier: ");
    scanf("%i", &n);
    
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%i ", j);
        }
        printf("\n");
    }
    
    return 0;
}
