#include <stdio.h>
char caesar_shift(char c, int shift) {
    if (c >= 'a' && c <= 'z') {
        return 'a' + (c - 'a' + shift) % 26;
    } else if (c >= 'A' && c <= 'Z') {
        return 'A' + (c - 'A' + shift) % 26;
    } else {
        return c;
    }
}
int main(int argc, char const *argv[]) {
    FILE *file1 = fopen("file1.txt", "r");
    FILE *file2 = fopen("file2.txt", "w+");
    if (file1 == NULL) {
        perror("Erreur d'ouverture de file1.txt");
        return 1;
    }
    if (file2 == NULL) {
        perror("Erreur d'ouverture de file2.txt");
        fclose(file1);
        return 1;
    }
    char doda;
    printf("Traitement en cours...................................................................................................................\n");
    while ((doda = fgetc(file1)) != EOF) {
        char shifted = caesar_shift(doda, 3);
        fputc(shifted, file2);
    }
    fclose(file1);
    fclose(file2);
    printf("Traitement terminé.\n");
    return 0;
}