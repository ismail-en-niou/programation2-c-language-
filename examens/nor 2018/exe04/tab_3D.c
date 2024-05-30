#include <stdio.h>
#include <stdlib.h>

// Fonction pour allouer un tableau 3D
int ***alloue_tableau_3D(int longueur, int largeur, int hauteur) {
    int ***tableau = (int ***)malloc(longueur * sizeof(int **));
    if (tableau == NULL) {
        printf("Erreur d'allocation de mémoire pour le tableau 3D\n");
        return NULL;
    }

    for (int i = 0; i < longueur; i++) {
        tableau[i] = (int **)malloc(largeur * sizeof(int *));
        if (tableau[i] == NULL) {
            printf("Erreur d'allocation de mémoire pour le tableau 3D\n");
            return NULL;
        }

        for (int j = 0; j < largeur; j++) {
            tableau[i][j] = (int *)malloc(hauteur * sizeof(int));
            if (tableau[i][j] == NULL) {
                printf("Erreur d'allocation de mémoire pour le tableau 3D\n");
                return NULL;
            }
        }
    }

    return tableau;
}
// Fonction pour libérer un tableau 3D
void libere_tableau_3D(int ***tableau_3D, int longueur, int largeur) {
    if (tableau_3D == NULL) {
        return;
    }

    for (int i = 0; i < longueur; i++) {
        for (int j = 0; j < largeur; j++) {
            free(tableau_3D[i][j]);
        }
        free(tableau_3D[i]);
    }
    free(tableau_3D);
}
// Fonction pour afficher un tableau 3D
void affiche_tableau_3D(int ***tableau_3D, int longueur, int largeur, int hauteur) {
    for (int i = 0; i < longueur; i++) {
        for (int j = 0; j < largeur; j++) {
            for (int k = 0; k < hauteur; k++) {
                printf("tableau[%d][%d][%d] = %d\n", i, j, k, tableau_3D[i][j][k]);
            }
        }
    }
}
int main() {
    int longueur = 3, largeur = 3, hauteur = 3;

    int ***tableau_3D = alloue_tableau_3D(longueur, largeur, hauteur);
    if (tableau_3D == NULL) {
        return 1;
    }

    // Remplir le tableau avec des valeurs pour tester
    for (int i = 0; i < longueur; i++) {
        for (int j = 0; j < largeur; j++) {
            for (int k = 0; k < hauteur; k++) {
                tableau_3D[i][j][k] = i * largeur * hauteur + j * hauteur + k;
            }
        }
    }

    // Afficher le tableau
    affiche_tableau_3D(tableau_3D, longueur, largeur, hauteur);

    // Libérer la mémoire allouée
    libere_tableau_3D(tableau_3D, longueur, largeur);

    return 0;
}
