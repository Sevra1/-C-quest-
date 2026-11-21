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

Voir le tableau « Organisation du dépôt » dans le `README.md` à la racine.

## Feuille de route (projet verrouillé jusqu'au niveau 15 recommandé)

v0.1 terminal simple · v0.2 profil + XP · v0.3 compétences + étoiles · v0.4 sauvegarde · v0.5 sélection d'exercices · v1.0 version complète.

## Questions ouvertes

- Langage et technologie de l'application unique : à décider.
- Format de sauvegarde de la progression : à décider.
- Contenu de l'arbre de compétences : à extraire des cours du Drive, à valider avant de fixer les niveaux.
