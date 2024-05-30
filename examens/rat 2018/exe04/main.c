#include <stdio.h>

// Fonction pour afficher le tableau en mode accordéon
void accordeon(int tab[50][50], int n) {
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            // Affichage dans l'ordre pour les lignes paires
            for (int j = 0; j < n; j++) {
                printf("%d ", tab[i][j]);
            }
        } else {
            // Affichage en ordre inverse pour les lignes impaires
            for (int j = n - 1; j >= 0; j--) {
                printf("%d ", tab[i][j]);
            }
        }
    }
}

int main(int argc, char const *argv[]) {
    int n, tab[50][50];
    printf("Donner la taille de tableau: ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("tab[%d][%d] == ", i, j);
            scanf("%d", &tab[i][j]);
        }
    }
    
    printf("Le résultat est:\n");
    accordeon(tab, n);
    
    return 0;
}
