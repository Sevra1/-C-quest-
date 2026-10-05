# C Quest — History 0.1

Dernière mise à jour : 5 octobre 2026

## NIVEAU 1 — Prénom et âge
Statut : ✅ VALIDÉ

Énoncé :
Créer un programme qui demande le prénom et l'âge de l'utilisateur, puis les affiche.

Version corrigée :
```c
#include <stdio.h>

int main()
{
    char prenom[50];
    int age;

    printf("Quel est ton prénom ?\n");
    scanf("%s", prenom);

    printf("Quel est ton âge ?\n");
    scanf("%i", &age);

    printf("Bonjour %s, tu as %i ans.\n", prenom, age);

    return 0;
}
```

---

## NIVEAU 2 — Calculatrice
Statut : ✅ VALIDÉ

Énoncé :
Demander deux entiers et afficher leur somme, différence, produit et quotient.

Version corrigée :
```c
#include <stdio.h>

int main()
{
    int a, b;

    printf("Entrez le premier entier : ");
    scanf("%i", &a);

    printf("Entrez le deuxième entier : ");
    scanf("%i", &b);

    int somme = a + b;
    int diff = a - b;
    int produit = a * b;
    int quotient = a / b;

    printf("Somme : %i\n", somme);
    printf("Différence : %i\n", diff);
    printf("Produit : %i\n", produit);
    printf("Quotient : %i\n", quotient);

    return 0;
}
```

---

## NIVEAU 3 — Somme de 1 à n
Statut : ✅ VALIDÉ

Énoncé :
Demander n et calculer la somme de tous les nombres de 1 à n.

Version corrigée :
```c
#include <stdio.h>

int main()
{
    int n;
    int somme = 0;

    printf("Bonjour, veuillez saisir une valeur : ");
    scanf("%i", &n);

    for(int i = 1; i <= n; i++)
    {
        somme += i;
    }

    printf("La somme des nombres allant de 1 jusqu'à %i est : %i\n", n, somme);

    return 0;
}
```

---

## NIVEAU 4 — Table de multiplication
Statut : ✅ VALIDÉ

Énoncé :
Demander n et afficher la table de multiplication de n.

Version corrigée :
```c
#include <stdio.h>

int main()
{
    int n;

    printf("Bonjour, veuillez saisir une valeur : ");
    scanf("%i", &n);

    printf("Voici la table de %i :\n", n);

    for(int i = 1; i <= 10; i++)
    {
        printf("%i * %i = %i\n", n, i, n * i);
    }

    return 0;
}
```

---

## NIVEAU 5 — Pair ou impair
Statut : ✅ VALIDÉ — DÉFI INTERMÉDIAIRE 🟡

Énoncé :
Demander n. Pour chaque nombre de 1 à n, indiquer pair/impair et calculer séparément les sommes paires et impaires.

Version corrigée :
```c
#include <stdio.h>

int main()
{
    int n;
    int somme_pair = 0;
    int somme_impair = 0;

    printf("Entrer un entier : ");
    scanf("%i", &n);

    for(int i = 1; i <= n; i++)
    {
        if(i % 2 == 0)
        {
            somme_pair += i;
            printf("%i est pair\n", i);
        }
        else
        {
            somme_impair += i;
            printf("%i est impair\n", i);
        }
    }

    printf("Somme des nombres pairs : %i\n", somme_pair);
    printf("Somme des nombres impairs : %i\n", somme_impair);

    return 0;
}
```

XP gagnée : 150 XP
Compétences : Conditions +½ ⭐, Modulo +½ ⭐

---

## NIVEAU 6 — Compteur de nombres pairs
Statut : ✅ VALIDÉ

Énoncé :
Demander n, parcourir les nombres de 1 à n, afficher uniquement les nombres pairs et compter combien de nombres pairs sont présents.

Version corrigée :
```c
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
```

XP gagnée : 100 XP
Compétences : Compteur ⭐

---

## NIVEAU 7 — Pyramide de nombres
Statut : ✅ VALIDÉ

Énoncé :
Afficher une pyramide de nombres de 1 à n, en ligne par ligne, avec le nombre de colonnes qui augmente à chaque ligne.

Exemple si n = 4 :
```
1 
1 2 
1 2 3 
1 2 3 4 
```

Version corrigée :
```c
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
```

XP gagnée : 125 XP (base 100 + bonus autonomie)
Compétences : Boucle for +½ ⭐, Boucles imbriquées ⭐ (nouvelle)

**Note pédagogique :** Le joueur a d'abord reçu un indice (indice 3) pour comprendre la logique des boucles imbriquées. Ensuite, il a consolidé sa compréhension avec un exercice de variation (Triangle avec étoiles) sans indice, démontrant la maîtrise réelle de la notion. Cette approche d'apprentissage guidé → consolidation autonome a été efficace.

---

## PROFIL ACTUEL
- Niveau global : 8
- XP totale : 1050 XP
- Niveau joueur : 3
- Progression vers niveau 4 : 1050 / 1200 XP (87.5%)
- Titre : 🔧 Codeur en herbe

## Compétences débloquées
- Variables ⭐½
- Entrées / sorties ⭐½
- Opérations ⭐⭐
- Boucle for ⭐⭐⭐½
- Conditions ⭐½
- Modulo ⭐½
- Compteur ⭐
- Boucles imbriquées ⭐½

## Paliers atteints
- ✅ Niveau 5 : 🟡 Défi intermédiaire
- 🔄 Niveau 8 : En cours (Introduction aux tableaux)

## Prochain exercice
Niveau 8 : Introduction aux tableaux
