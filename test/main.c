#include <stdio.h>
#include <stdbool.h>

// Fonction pour calculer le nombre de mots dans un fichier
int compte_m(FILE *f) {
    int res = 0;
    char c;
    bool in_word = false;

    while ((c = fgetc(f)) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (in_word) {
                in_word = false;
                res++;
            }
        } else {
            in_word = true;
        }
    }
    if (in_word) {
        res++;
    }
    return res;
}

// Fonction pour calculer la longueur du fichier en caractères
int compte_l(FILE *f) {
    int res = 0;
    while (fgetc(f) != EOF) {
        res++;
    }
    return res;
}

// Fonction pour calculer le nombre de lignes dans un fichier
int compte_L(FILE *f) {
    int res = 0;
    char c;
    while ((c = fgetc(f)) != EOF) {
        if (c == '\n') {
            res++;
        }
    }
    return res;
}

int main(int argc, char const *argv[]) {
    FILE *f = fopen("test.txt", "r");
    if (f == NULL) {
        perror("Erreur d'ouverture de fichier");
        return 1;
    }

    // Calcul du nombre de mots
    rewind(f); // Remet le pointeur de fichier au début
    int nombre_mots = compte_m(f);
    printf("Le nombre de mots dans le fichier est: %d\n", nombre_mots);

    // Calcul de la longueur du fichier
    rewind(f); // Remet le pointeur de fichier au début
    int longueur_fichier = compte_l(f);
    printf("La longueur du fichier en caractères est: %d\n", longueur_fichier);

    // Calcul du nombre de lignes
    rewind(f); // Remet le pointeur de fichier au début
    int nombre_lignes = compte_L(f);
    printf("Le nombre de lignes dans le fichier est: %d\n", nombre_lignes);

    fclose(f);
    return 0;
}
