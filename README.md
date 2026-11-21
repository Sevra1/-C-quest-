# Code Quest (anciennement C Quest)

Système d'apprentissage progressif du langage C, sous forme de jeu éducatif de type RPG, accompagné par Tony, le coach / assistant IA.

## Décisions prises

- Nom : le projet C Quest est renommé « Code Quest ».
- Concept : jeu éducatif RPG pour apprendre le C progressivement.
- Assistant IA intégré : Tony (protocole : `docs/tony-coach.md`).
- Éléments de jeu : arbre de compétences, XP, inventaire de fonctions.
- Tout doit tenir dans une seule application.
- L'arbre de compétences est optimisé à partir des cours de programmation du Drive (I1 et I2).
- Les fichiers du projet et de la progression sont dans Drive > Projet personnel > Code Quest, puis renvoyés sur ce dépôt.
- Pas d'algorithme demandé avant le code C.
- Méthode de travail : une progression régulière, même courte, plutôt que de longues séances irrégulières.

## Reprendre une partie

Donner à l'IA, dans cet ordre : `code-quest/save.md`, `profil.md`, `inventaire.md`, `historique.md`, `cours.md`. La consigne de reprise est en tête de `save.md`.

## État actuel — Code Quest (depuis le 10 novembre 2026)

- Niveau d'exercice atteint : 1 ✅ (saisir 2 entiers, afficher leur produit — I1, séance 1)
- Niveau en cours : aucun, le niveau 2 reste à concevoir
- Dernière fonction gagnée : `saisir_entier` (`code-quest/inventaire/saisir_entier.c`)
- XP, titres, échelle des étoiles : barème à définir
- Problème connu : le correcteur refuse des réponses à cause des espaces → `CORRECTION.md`

## Saison précédente — C Quest (30 septembre → 12 octobre 2026)

Archivée telle quelle : `levels/`, `saves/`, `docs/`, `notes/`.

- Niveaux validés : 1 à 8 (+ consolidation 7-BIS)
- Niveau 9 commencé : recherche d'une valeur dans un tableau
- XP : 1150 — Niveau joueur 3 — 🔧 Codeur en herbe

1. ✅ Prénom et âge
2. ✅ Calculatrice
3. ✅ Somme de 1 à n
4. ✅ Table de multiplication
5. ✅ Pair ou impair
6. ✅ Compteur de nombres pairs
7. ✅ Pyramide de nombres (boucles imbriquées) + Triangle avec étoiles
8. ✅ Introduction aux tableaux

## Organisation du dépôt

| Chemin | Contenu |
|---|---|
| `ARCHITECTURE.md` | modules et organisation proposés (à valider) |
| `CORRECTION.md` | bug des espaces et normalisation proposée |
| `code-quest/` | sauvegarde Code Quest : save, profil, inventaire, historique, cours |
| `code-quest/inventaire/` | code C des fonctions débloquées |
| `levels/` | énoncés et codes réels de la saison C Quest |
| `saves/` | sauvegardes JSON de la saison C Quest |
| `docs/` | méta-prompt, Tony, système XP, historique de la saison C Quest |

## Propositions à valider

- Organisation de l'application : `ARCHITECTURE.md`.
- Règles de normalisation du correcteur : `CORRECTION.md`.
- Barème d'XP, étoiles, titres, nombre de niveaux.

## Licence

Projet personnel / parcours d'apprentissage.
