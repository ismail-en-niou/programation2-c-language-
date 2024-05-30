#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randometab(int n) {
    int *tab = (int*)malloc(sizeof(int) * n);

    if (tab == NULL) {
        printf("Erreur d'allocation mémoire.\n");
        exit(EXIT_FAILURE);
    }
    srand(time(NULL));

    for (int i = 0; i < n; ++i) {
        tab[i] = rand() % 100;
    }

    return tab;
}

int main() {
    int n;
    printf("Donner la taille du tableau : ");
    scanf("%d", &n);
    int *tableau = randometab(n);
    printf("Tableau généré : ");
    for (int i = 0; i < n; ++i) {
        printf("%d ", tableau[i]);
    }
    free(tableau);
   

    return 0;
}
