# Inventaire — fonctions débloquées

Règle : à chaque niveau validé, le joueur gagne une fonction toute faite, réutilisable.
Le code est dans `inventaire.c`, les prototypes dans `inventaire.h`, un exemple dans `demo.c`.

```
gcc mon_programme.c inventaire.c -o mon_programme
```

Les fonctions des niveaux 1 à 8 ont été attribuées le 2026-11-21, lors du passage aux règles Code Quest, à partir de ce qui a été appris dans chaque niveau. Les fonctions en C (définir, appeler, `return`, paramètres) sont vues plus tard dans le cours d'I1 : l'inventaire sert d'outil prêt à l'emploi en attendant de les étudier.

| Niveau | Fonction | Prototype | Rôle |
|---|---|---|---|
| 1 | `saisir_entier` | `int saisir_entier(const char *message)` | affiche un message, lit un entier et le renvoie |
| 2 | `afficher_calculs` | `void afficher_calculs(int a, int b)` | affiche somme, différence, produit, quotient (protège la division par 0) |
| 3 | `somme_1_a_n` | `int somme_1_a_n(int n)` | renvoie 1 + 2 + … + n |
| 4 | `afficher_table` | `void afficher_table(int n)` | affiche la table de n, de 1 à 10 |
| 5 | `est_pair` | `int est_pair(int x)` | renvoie 1 si x est pair, 0 sinon |
| 6 | `compter_pairs` | `int compter_pairs(int n)` | nombre de nombres pairs entre 1 et n |
| 7 | `afficher_pyramide` | `void afficher_pyramide(int n)` | affiche la pyramide de nombres de hauteur n |
| 8 | `afficher_tableau` | `void afficher_tableau(const int t[], int n)` | affiche les n valeurs d'un tableau |

## Limites connues

- `saisir_entier` ne gère pas une saisie invalide (des lettres au lieu d'un nombre).
- `afficher_tableau` suppose que `n` ne dépasse pas la taille réelle du tableau.

## Format d'une nouvelle entrée

1. Ajouter le prototype dans `inventaire.h` avec le numéro du niveau.
2. Ajouter le code commenté dans `inventaire.c`.
3. Ajouter une ligne dans le tableau ci-dessus.
4. Vérifier : `gcc -Wall -Wextra demo.c inventaire.c -o demo`.
