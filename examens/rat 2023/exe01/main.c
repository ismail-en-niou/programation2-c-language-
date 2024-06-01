#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **rechercher_mots_fichier(FILE *fichier, char lettre, int *nbMots);

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <nom_fichier> <lettre>\n", argv[0]);
        return 1;
    }

    FILE *fichier = fopen(argv[1], "r");
    if (!fichier) {
        printf("Impossible d'ouvrir le fichier %s.\n", argv[1]);
        return 1;
    }

    char lettre = argv[2][0];
    int nbMots = 0;
    char **mots = rechercher_mots_fichier(fichier, lettre, &nbMots);

    fclose(fichier);

    printf("Mots commencant par '%c':\n", lettre);
    for (int i = 0; i < nbMots; i++) {
        printf("%s\n", mots[i]);
        free(mots[i]);
    }
    free(mots);

    return 0;
}

char **rechercher_mots_fichier(FILE *fichier, char lettre, int *nbMots) {
    char **mots = NULL;
    char mot[100]; // Taille maximale du mot
    *nbMots = 0;

    while (fscanf(fichier, "%s", mot) != EOF) {
        if (mot[0] == lettre) {
            (*nbMots)++;
            mots = (char **)realloc(mots, (*nbMots) * sizeof(char *));
            if (!mots) {
                printf("Erreur lors de l'allocation de memoire.\n");
                exit(1);
            }
            mots[*nbMots - 1] = (char *)malloc(strlen(mot) + 1);
            if (!mots[*nbMots - 1]) {
                printf("Erreur lors de l'allocation de memoire.\n");
                exit(1);
            }
            strcpy(mots[*nbMots - 1], mot);
        }
    }

    return mots;
}
