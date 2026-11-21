# Système de correction

## Problème constaté

Le correcteur refuse de valider un niveau, donc bloque le passage au suivant, à cause de simples différences d'espaces.

## Cause probable

Comparaison caractère par caractère entre la réponse du joueur et la réponse attendue. À confirmer en relisant la fonction de comparaison.

## Proposition à valider

Normaliser les deux côtés avant de comparer :

- Convertir les fins de ligne (`\r\n` vers `\n`).
- Supprimer les espaces et tabulations en début et fin de ligne.
- Réduire les suites d'espaces ou de tabulations à un seul espace.
- Ignorer les lignes vides en trop.

Point d'attention : ne pas supprimer tous les espaces, car `a b` et `ab` doivent rester différents.

Pour du code source en C, la méthode la plus fiable est de compiler et d'exécuter le code du joueur, puis de comparer la sortie normalisée, plutôt que de comparer le texte du code.

## À faire

- Récupérer la fonction de comparaison actuelle pour appliquer la correction.
