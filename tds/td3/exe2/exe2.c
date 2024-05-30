#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fichier1, *fichier2;
    int code;
    char c;
    fichier1 = fopen("info.txt", "r");
    if (fichier1 == NULL)
    {
        printf("Erreur: Impossible d'ouvrir le fichier source.\n");
        return EXIT_FAILURE;
    }
    fichier2 = fopen("copier.txt", "w");
    if (fichier2 == NULL)
    {
        printf("Erreur: Impossible d'ouvrir le fichier destination.\n");
        fclose(fichier1);
        return EXIT_FAILURE;
    }
    printf("Donnez le code PIN : ");
    scanf("%d", &code);
    c = fgetc(fichier1);
    while (c != EOF)
    {
        fputc(c + code, fichier2);
        c = fgetc(fichier1);
    }
    fclose(fichier1);
    printf("\nCodage réussi.\n");
    printf("\ndecodage .... \n");
    fichier2 = fopen("copier.txt", "r");
    if (fichier2 == NULL)
    {
        printf("Erreur: Impossible d'ouvrir le fichier de destination pour le décodage.\n");
        return EXIT_FAILURE;
    }
    int codesub;
    printf("donner le code pin de dechifrrement ");
    scanf("%d", &codesub);
    if (codesub == code)
    {
        FILE *fichier3;
        fichier3 = fopen("decoded.txt", "w");
        if (fichier3 == NULL)
        {
            printf("Erreur: Impossible d'ouvrir le fichier pour le décodage.\n");
            fclose(fichier2);
            return EXIT_FAILURE;
        }
        c = fgetc(fichier2);
        while (c != EOF)
        {
            fputc(c - code, fichier3);
            c = fgetc(fichier2);
        }
        printf("\n Decodage réussi.\n");
        fclose(fichier2);
        fclose(fichier3);
    }
    else
    {
        printf("Code PIN incorrect pour le décodage.\n");
        fclose(fichier2);
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
