#include <stdio.h>
#include <string.h>

int coder(int Deplacement, char *NomFichier1, char *NomFichier2) {
    char ch;
    FILE *f1 = fopen(NomFichier1, "r");
    FILE *f2 = fopen(NomFichier2, "w+");
    if (f1 == NULL || f2 == NULL) {
        perror("Error");
        return 1;
    }
    while ((ch = fgetc(f1)) != EOF) {
        printf("%c", ch);
        ch = (ch + Deplacement) % 256;
        printf("==> %c " , ch);
        fputc(ch, f2); 
    }
    fclose(f1);
    fclose(f2);
    return 0;
}

int main(int argc, char const *argv[]) {
    printf("Affichage ***** \n");
    coder(2, "f1.txt", "f2.txt");
    return 0;
}

 