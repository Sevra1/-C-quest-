# C Quest

C Quest est un petit jeu d'entraînement en C conçu comme un parcours progressif, inspiré d'un système RPG, pour apprendre progressivement les bases du langage C.

## Objectif

Chaque niveau propose un exercice guidé, avec :
- énoncé
- code original
- analyse des erreurs
- version corrigée
- progression XP / compétences
- progression du joueur

## Structure du projet

```text
C-Quest/
├── README.md
├── .gitignore
├── docs/
│   ├── meta-prompt-v1.1.md
│   ├── save-state-v0.2.md
│   ├── skill-xp-system-v0.2.md
│   └── history-v0.1.md
├── levels/
│   ├── level-01/
│   │   ├── enonce.md
│   │   └── prenom-age.c
│   ├── level-02/
│   │   ├── enonce.md
│   │   └── calculatrice.c
│   ├── level-03/
│   │   ├── enonce.md
│   │   └── somme-1-a-n.c
│   ├── level-04/
│   │   ├── enonce.md
│   │   └── table-multiplication.c
│   ├── level-05/
│   │   ├── enonce.md
│   │   └── pair-ou-impair.c
│   └── level-06/
│       ├── enonce.md
│       └── compteur-nombres-pairs.md
├── saves/
│   └── savegame-2026-09-30.json
└── notes/
    └── progression.md
```

## État actuel

- Niveaux archivés : 1 à 5
- Niveau courant : 6
- Statut : en cours
- Niveau global : 6
- XP : 650
- Niveau joueur : 2
- Titre : 🧑‍💻 Débutant

## Historique des niveaux validés

1. Prénom et âge
2. Calculatrice
3. Somme de 1 à n
4. Table de multiplication
5. Pair ou impair

## Niveau 6 : exercice en cours

Objectif :
Demander n, parcourir les nombres de 1 à n, afficher uniquement les nombres pairs et compter combien de nombres pairs sont présents.

## Remarques

Ce dépôt contient la version documentée du jeu et la sauvegarde de progression telle qu'elle a été générée par l'IA.

Il peut ensuite être étendu vers une version plus complète avec :
- interface texte
- sélection de niveaux
- sauvegarde persistante
- système XP plus avancé
- progression automatique
- bonus de difficulté

## Licence

Projet personnel / parcours d'apprentissage.
