#include <stdio.h>

void affichage(int T[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d   ", T[i]);
    }
}

void cha_nger(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void tri_par_permutation(int T[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (T[j] < T[min_index]) {
                min_index = j;
            }
        }
        cha_nger(&T[min_index], &T[i]);
    }
}

int main(int argc, char const *argv[]) {
    int taille = 6;
    int T[] = {20, 12, 10, 35, 25, 0};
    printf("Le tri du tableau T est :\n");
    tri_par_permutation(T, taille);
    affichage(T, taille);
    return 0;
}
