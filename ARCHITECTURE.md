# Architecture de Code Quest

Statut : proposition à valider. Rien ici n'est encore décidé, sauf ce qui figure dans README.md sous « Décisions prises ».

## Modules proposés

1. Arbre de compétences : les notions du C sous forme de nœuds, avec leurs prérequis. Il sera construit à partir des cours de programmation du Drive.
2. Niveaux et exercices : un énoncé, une réponse attendue et une validation par niveau.
3. Correcteur : valide la réponse du joueur (voir CORRECTION.md).
4. XP et progression : gain d'XP à la réussite, déblocage des nœuds de l'arbre.
5. Inventaire de fonctions : les fonctions du C débloquées au fil de la progression.
6. Assistant Tony : aide et indices pendant les niveaux.

## Organisation de fichiers proposée

```
Code Quest/
  README.md
  ARCHITECTURE.md
  CORRECTION.md
  competences/   arbre de compétences (source : cours du Drive)
  niveaux/       énoncés et réponses attendues
  progression/   suivi XP et niveaux validés
```

## Organisation actuelle du dépôt

```
README.md, ARCHITECTURE.md, CORRECTION.md
code-quest/        sauvegarde Code Quest (save, profil, inventaire, historique, cours)
code-quest/inventaire/  code C des fonctions débloquées
levels/, saves/, docs/, notes/   archive de la saison C Quest (niveaux 1 à 8)
```

## Questions ouvertes

- Langage et technologie de l'application unique : à décider.
- Format de sauvegarde de la progression : à décider.
- Contenu de l'arbre de compétences : à extraire des cours du Drive, à valider avant de fixer les niveaux.
