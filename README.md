# Code Quest (anciennement C Quest)

Jeu d'apprentissage progressif du langage C, façon RPG, avec Tony comme coach : niveaux, XP, compétences en étoiles et inventaire de fonctions réutilisables. Les exercices s'appuient sur les cours, TD et TP d'I1 et d'I2.

## État actuel

| | |
|---|---|
| Niveau d'exercice | **9 — Recherche d'une valeur dans un tableau** (en cours) |
| Niveaux validés | 1 à 8 |
| XP | 1150 |
| Niveau de joueur | 2 (1150 / 1200 vers le niveau 3) |
| Titre | 🧑‍💻 Débutant |
| Inventaire | 8 fonctions |
| Prochain palier | Niveau 10 : 🔴 défi difficile |

## Reprendre une partie

Donner `save.md` à l'IA : la consigne de reprise et la liste des autres fichiers à lire sont dedans.

## Niveaux

| # | Niveau | XP | Fonction gagnée |
|---|---|---|---|
| 1 | ✅ [Prénom et âge](levels/level-01/) | 100 | `saisir_entier` |
| 2 | ✅ [Calculatrice](levels/level-02/) | 100 | `afficher_calculs` |
| 3 | ✅ [Somme de 1 à n](levels/level-03/) | 100 | `somme_1_a_n` |
| 4 | ✅ [Table de multiplication](levels/level-04/) | 100 | `afficher_table` |
| 5 | ✅ [Pair ou impair](levels/level-05/) 🟡 | 250 | `est_pair` |
| 6 | ✅ [Compteur de nombres pairs](levels/level-06/) | 100 | `compter_pairs` |
| 7 | ✅ [Pyramide de nombres + triangle d'étoiles](levels/level-07/) | 300 | `afficher_pyramide` |
| 8 | ✅ [Introduction aux tableaux](levels/level-08/) | 100 | `afficher_tableau` |
| 9 | 🔄 [Recherche d'une valeur dans un tableau](levels/level-09/) | +100 prévus | `rechercher_valeur` |
| 10 | 🔒 Défi difficile 🔴 | +500 | |

## Règles principales (détail : `docs/meta-prompt-v1.2.md`)

- Un exercice à la fois, sans sauter de niveau ; les consolidations restent dans le niveau (pas de « BIS »).
- Pas d'algorithme demandé avant le code C.
- Validation sur le comportement du programme : une différence d'espaces ne bloque jamais un niveau.
- Chaque niveau validé donne de l'XP, des étoiles de compétence et une fonction d'inventaire.
- Progression régulière, même courte.
- Programmer Code Quest (une seule application) : 🔒 verrouillé jusqu'au niveau 15 recommandé.

## Organisation du dépôt

| Chemin | Contenu |
|---|---|
| `save.md` | point d'entrée : consigne de reprise pour Tony + état courant |
| `profil.md` | XP, niveau de joueur, titre, compétences, détail de l'XP |
| `historique.md` | journal des parties et des décisions |
| `levels/level-XX/` | `README.md` (énoncé, analyse, récompenses), `*-joueur.c` (code original), `*.c` (corrigé) |
| `inventaire/` | fonctions débloquées : `inventaire.md`, `inventaire.h`, `inventaire.c`, `demo.c` |
| `docs/meta-prompt-v1.2.md` | règles du jeu (XP, niveaux, titres, étoiles, correction) |
| `docs/tony-coach.md` | protocole du coach Tony |
| `docs/cours.md` | index des cours, TD et TP d'I1 et d'I2 |
| `docs/architecture.md`, `docs/correction.md` | future application et correcteur |
| `docs/archive/` | anciennes versions des règles, sauvegarde et historique |
| `saves/` | instantanés JSON datés |

## Compiler

```
gcc levels/level-08/tableau.c -o tableau
gcc inventaire/demo.c inventaire/inventaire.c -o demo
```

## Licence

Projet personnel / parcours d'apprentissage.
