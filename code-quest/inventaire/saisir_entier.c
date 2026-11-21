/* Code Quest - inventaire : saisir_entier (débloquée au niveau 1) */
#include <stdio.h>

int saisir_entier(const char *message)
{
    int v;
    printf("%s", message);
    scanf("%i", &v);
    return v;
}

/* Exemple d'utilisation (niveau 1 : produit de deux entiers) */
int main(void)
{
    int a = saisir_entier("Entrez un entier :\n");
    int b = saisir_entier("Entrez un autre entier :\n");
    printf("Le produit est %i\n", a * b);
    return 0;
}
