#include <stdio.h>
#include <stdlib.h>
#include <time.h>
char *jour_alea();
int main() {
    printf("Jour aleatoire: %s\n", jour_alea());
    return 0;
}
char *jour_alea() {
    char *jours[] = {"Lundi", "Mardi", "Mercredi", "Jeudi", "Vendredi", "Samedi", "Dimanche"};
    srand(time(NULL));
    int index = rand() % 7;
    return jours[index];
}
