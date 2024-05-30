#include <stdio.h>
#include <stdlib.h>
int sommePremierCarres(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n * n + sommePremierCarres(n - 1);
    }
}
int fibinotchi(int n) {
    if (n <= 2) {
        return 1;
    } else {
        return fibinotchi(n - 1) + fibinotchi(n - 2);
    }
}
int fct1(int size, int tab[]) {
    int x = -1;
    if (size == 1) {
        return tab[0];
    } else {
        x = fct1(size - 1, tab);
        if (x > tab[size - 1]) {
            return x;
        } else {
            return tab[size - 1];
        }
    }
}
int main() {
    int n;
    printf("Donner la valeur de n pour que le programme puisse démarrer: ");
    scanf("%d", &n);
    int *tab;
    int size;
    printf("Donner la taille du tableau: ");
    scanf("%d", &size);

    tab = (int *)malloc(sizeof(int) * size);
    
    if (tab == NULL) {
        printf("Erreur d'allocation de mémoire");
        return 1;
    } else {
        for (int i = 0; i < size; i++) {
            printf("Tab[%d] = ", i + 1);
            scanf("%d", &tab[i]);
        }
    }
    printf("Somme des premiers carrés jusqu'à %d: %d\n", n, sommePremierCarres(n));
    printf("Fibonacci de %d: %d\n", n, fibinotchi(n));
    printf("Maximum dans le tableau: %d\n", fct1(size, tab));
    free(tab);
    return 0;
}
