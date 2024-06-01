#include "fonctions.h"

int u(int n) {
    if (n == 0)
        return 1;
    else
        return u(n - 1) + v(n - 1);
}

int v(int n) {
    if (n == 0)
        return 0;
    else
        return 2 * u(n - 1) + v(n - 1);
}
