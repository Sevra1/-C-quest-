# Historique — Code Quest

Journal du projet et des parties. Les entrées les plus récentes sont en bas.
Le détail de chaque niveau (énoncé, code original, analyse, correction) est dans `levels/level-XX/`.
L'ancien historique détaillé est conservé dans `docs/archive/history-v0.1.md`.

## Parties

Format : date de sauvegarde | niveau | résultat | XP | fonction d'inventaire

- ≤ 2026-09-30 | 1 Prénom et âge | validé | 100 | `saisir_entier`
- ≤ 2026-09-30 | 2 Calculatrice | validé | 100 | `afficher_calculs`
- ≤ 2026-09-30 | 3 Somme de 1 à n | validé | 100 | `somme_1_a_n`
- ≤ 2026-09-30 | 4 Table de multiplication | validé | 100 | `afficher_table`
- ≤ 2026-09-30 | 5 Pair ou impair 🟡 | validé | 250 | `est_pair`
- ≤ 2026-10-05 | 6 Compteur de nombres pairs | validé | 100 | `compter_pairs`
- ≤ 2026-10-05 | 7 Pyramide de nombres + triangle d'étoiles | validé (indice 3, puis consolidation sans indice) | 300 | `afficher_pyramide`
- ≤ 2026-10-12 | 8 Introduction aux tableaux | validé (premier essai, correction intermédiaire, version finale) | 100 | `afficher_tableau`
- 2026-11-10 | Révision : saisir 2 entiers et afficher leur produit (I1, séance 1) | validé à la 2e soumission | non comptée (révision) | a donné le code de `saisir_entier`
- 2026-11-21 | 9 Recherche d'une valeur dans un tableau | en cours | — | — 

## Projet

- 2026-09-30 → 2026-10-12 : création du dépôt, Meta Prompt v1.1, système XP v0.2, protocole de Tony.
- 2026-11-09 : création des dossiers « Projet personnel » et « Code Quest » dans le Drive.
- 2026-11-10 : C Quest est renommé Code Quest. Nouvelles décisions : inventaire de fonctions, une seule application, arbre de compétences tiré des cours I1/I2, pas d'algorithme avant le code, progression régulière.
- 2026-11-10 : bug signalé : l'ancien correcteur bloquait un niveau à cause d'espaces (`docs/correction.md`).
- 2026-11-10 : la sauvegarde du Drive repartait d'un niveau 1. Décision du 2026-11-21 : on reprend la progression du GitHub au niveau 9 ; la séance du 10/11 est comptée comme une révision.
- 2026-11-21 : remise en ordre du dépôt :
  - Meta Prompt v1.2 (règles fusionnées et nouvelles règles) ; anciennes versions dans `docs/archive/`.
  - Niveaux 1 à 8 au même format (README + code original + corrigé compilable) ; 7-BIS intégré au niveau 7.
  - Inventaire de 8 fonctions (`inventaire/`).
  - XP et niveau de joueur recalculés selon le barème (`profil.md`).
  - `savegame-2026-10-05.json` renommé en `savegame-2026-10-12.json` (date réelle de son contenu).
