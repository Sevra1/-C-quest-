/* Code Quest — inventaire de fonctions débloquées
 * Une fonction gagnée par niveau validé. Voir inventaire.md.
 * Utilisation : #include "inventaire.h" puis compiler avec inventaire.c
 *   gcc mon_programme.c inventaire.c -o mon_programme
 */
#ifndef INVENTAIRE_H
#define INVENTAIRE_H

int  saisir_entier(const char *message);          /* niveau 1 */
void afficher_calculs(int a, int b);              /* niveau 2 */
int  somme_1_a_n(int n);                          /* niveau 3 */
void afficher_table(int n);                       /* niveau 4 */
int  est_pair(int x);                             /* niveau 5 */
int  compter_pairs(int n);                        /* niveau 6 */
void afficher_pyramide(int n);                    /* niveau 7 */
void afficher_tableau(const int t[], int n);      /* niveau 8 */

#endif
