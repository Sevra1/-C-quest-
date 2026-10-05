# C Quest

Projet de jeu d'entraînement progressif pour apprendre le langage C.

## État actuel
- Niveau global : 6
- XP totale : 650
- Niveau de joueur : 2
- Titre : 🧑‍💻 Débutant
- Prochain exercice : Niveau 6 — Compteur de nombres pairs

## Structure du dépôt
- `docs/` : documents de design, historique, progression, compétences
- `src/` : exemples et solutions C

## Règles du jeu
- Un seul exercice à la fois
- Progression infinie
- Maîtrise suffisante → niveau suivant
- Maîtrise insuffisante → nouvel exercice ciblé au même niveau
- Révisions régulières des anciennes notions

## Début du projet
Le projet a été initialement modelé selon les éléments fournis dans le prompt historique :
- niveau 1 à 5 validés
- système d'XP et titres
- compétences dynamiques
- save state
- historique

## Prochain objectif
Reprendre le niveau 6 :

"Demander n, parcourir les nombres de 1 à n, afficher uniquement les nombres pairs et compter combien de nombres pairs sont présents."

## Fichiers clés
- `docs/C-QUEST-meta-prompt-v1.1.md`
- `docs/C-QUEST-save-state-0.2.md`
- `docs/C-QUEST-history-0.1.md`
- `docs/C-QUEST-skill-xp-system-v0.2.md`
- `src/niveau6_compteur_pairs.c`
