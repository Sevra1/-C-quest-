/* Code Quest — inventaire de fonctions débloquées (voir inventaire.md) */
#include <stdio.h>
#include "inventaire.h"

/* Niveau 1 — affiche un message, lit un entier et le renvoie. */
int saisir_entier(const char *message)
{
    int v;
    printf("%s", message);
    scanf("%i", &v);
    return v;
}

/* Niveau 2 — affiche somme, différence, produit et quotient de a et b. */
void afficher_calculs(int a, int b)
{
    printf("Somme : %i\n", a + b);
    printf("Différence : %i\n", a - b);
    printf("Produit : %i\n", a * b);
    if (b != 0)
        printf("Quotient : %i\n", a / b);
    else
        printf("Quotient : impossible (division par 0)\n");
}

/* Niveau 3 — renvoie 1 + 2 + ... + n. */
int somme_1_a_n(int n)
{
    int somme = 0;
    for (int i = 1; i <= n; i++)
        somme += i;
    return somme;
}

/* Niveau 4 — affiche la table de multiplication de n, de 1 à 10. */
void afficher_table(int n)
{
    for (int i = 1; i <= 10; i++)
        printf("%i * %i = %i\n", n, i, n * i);
}

/* Niveau 5 — renvoie 1 si x est pair, 0 sinon. */
int est_pair(int x)
{
    return x % 2 == 0;
}

/* Niveau 6 — renvoie le nombre de nombres pairs entre 1 et n. */
int compter_pairs(int n)
{
    int compteur = 0;
    for (int i = 1; i <= n; i++)
        if (est_pair(i))
            compteur++;
    return compteur;
}

/* Niveau 7 — affiche la pyramide 1 / 1 2 / ... / 1 2 ... n. */
void afficher_pyramide(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            printf("%i ", j);
        printf("\n");
    }
}

/* Niveau 8 — affiche les n valeurs du tableau t sur une ligne. */
void afficher_tableau(const int t[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%i ", t[i]);
    printf("\n");
}
