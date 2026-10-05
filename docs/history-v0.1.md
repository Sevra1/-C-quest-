# C Quest — History 0.1

## C QUEST — HISTORY 0.1
Dernière mise à jour : 30 septembre 2026
Niveaux archivés : 1 à 5

### NIVEAU 1 — Prénom et âge
Statut : VALIDÉ

Énoncé :
Créer un programme qui demande le prénom et l'âge de l'utilisateur, puis les affiche.

Code original :
```c
#include<stdio.h>
#include<stdlib.h>

int main()
{
char prenom[50];
int age;
printf("Quel est ton prénom ?\n");
scanf("%s",prenom);
printf("Quel est ton âge ?\n");
scanf("%i",&age);
printf("Bonjour %s, tu as %i ans.", prenom,age);
}
```

Analyse :
Programme fonctionnel. stdlib.h est inutile et return 0 peut être ajouté.

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

### NIVEAU 2 — Calculatrice
Statut : VALIDÉ

Énoncé :
Demander deux entiers et afficher leur somme, différence, produit et quotient.

Code original :
```c
#include<stdio.h>

int main()
{
    int a,b;
    printf(" Somme : %i\n",somme);
    scanf("%i",&a);
    scanf("%i",&b);
    int somme = a + b;
    int diff = a - b;
    int produit = a * b;
    int quotient = a/b;

    printf(" Somme : %i\n",somme);
    printf(" Différence : %i\n",diff);
    printf(" Produit : %i\n",produit);
    printf(" Quotient : %i\n",quotient);
}
```

Analyse :
Le premier printf utilise somme avant sa déclaration. Le reste de la logique de calcul est correct.

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

### NIVEAU 3 — Somme de 1 à n
Statut : VALIDÉ

Code original :
```c
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
```

Analyse :
Boucle et accumulation correctes. somme += i est une écriture plus courte possible.

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
        printf("%i\n", i);
    }

    printf("La somme des nombres allant de 1 jusqu'à %i est : %i\n", n, somme);

    return 0;
}
```

### NIVEAU 4 — Table de multiplication
Statut : VALIDÉ

Code original :
```c
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
```

Analyse :
La boucle est maîtrisée. Petite erreur : départ à 0 au lieu de 1.

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

### NIVEAU 5 — Pair ou impair
Statut : VALIDÉ — DÉFI INTERMÉDIAIRE

Énoncé :
Demander n. Pour chaque nombre de 1 à n, indiquer pair/impair et calculer séparément les sommes paires et impaires.

Code original :
```c
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
```

Analyse :
Programme correct. else if(reste != 0) peut être remplacé par else. Le modulo est correctement utilisé.

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

## PROFIL APRÈS LE NIVEAU 5
- Niveau global : 6
- XP : 650
- Niveau joueur : 2
- Titre : 🧑‍💻 Débutant
- XP vers niveau joueur 3 : 650 / 1200

### Compétences
- Variables ⭐½
- Entrées / sorties ⭐½
- Opérations ⭐⭐
- Boucle for ⭐⭐½
- Conditions ⭐
- Modulo ⭐

### Niveau 6 : en cours

### JSON de sauvegarde
```json
{
  "game_name": "C Quest",
  "meta_prompt_version": "1.1",
  "save_state_version": "0.2",
  "history_version": "0.1",
  "skill_xp_system_version": "0.2",
  "player": {
    "global_level": 6,
    "xp": 650,
    "player_level": 2,
    "player_level_next_threshold": 1200,
    "title": "🧑‍💻 Débutant"
  },
  "skills": {
    "Variables": 1.5,
    "Entrées / sorties": 1.5,
    "Opérations": 2,
    "Boucle for": 2.5,
    "Conditions": 1,
    "Modulo": 1
  },
  "current_level": 6,
  "current_exercise": "Compteur de nombres pairs",
  "planned_rewards": {
    "base_xp": 100,
    "skill_increases": {
      "Boucle for": 0.5,
      "Conditions": 0.5,
      "Modulo": 0.5
    },
    "unlock": "Compteur",
    "bonus": "variable selon la qualité de la solution"
  }
}
```
