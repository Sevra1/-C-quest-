# inventaire.md - Fonctions débloquées

Règle : à chaque niveau terminé, le joueur gagne une fonction toute faite, réutilisable. Elle est ajoutée ici, et son code est rangé dans `inventaire/`.

## Format d'une entrée

```
### nom_de_la_fonction
- Niveau d'origine : (niveau qui l'a débloquée)
- Prototype : type nom(paramètres)
- Rôle : (ce qu'elle fait, en une phrase)
- Notions du cours liées : (voir cours.md)

(code C complet de la fonction)

Exemple d'utilisation :
(quelques lignes de C)
```

## Fonctions débloquées

### saisir_entier
- Niveau d'origine : niveau 1
- Prototype : int saisir_entier(const char *message)
- Rôle : affiche un message, lit un entier au clavier et le renvoie.
- Notions du cours liées : printf, scanf, int (I1, séance 1). Les fonctions elles-mêmes sont vues plus tard dans le cours d'I1.
- Limite : ne gère pas une saisie invalide (par exemple des lettres au lieu d'un nombre).
- Fichier : `inventaire/saisir_entier.c`

```c
#include <stdio.h>

int saisir_entier(const char *message)
{
    int v;
    printf("%s", message);
    scanf("%i", &v);
    return v;
}
```

Exemple d'utilisation :

```c
int a = saisir_entier("Entrez un entier :\n");
int b = saisir_entier("Entrez un autre entier :\n");
printf("Le produit est %i\n", a * b);
```
