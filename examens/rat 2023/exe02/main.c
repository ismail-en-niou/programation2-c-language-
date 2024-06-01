#include <stdio.h>
#include "fonctions.h"

int main() {
    int n;
    printf("Entrez un entier n : ");
    scanf("%d", &n);
    printf("U(%d) = %d\n", n, u(n));
    printf("V(%d) = %d\n", n, v(n));
    return 0;
}
