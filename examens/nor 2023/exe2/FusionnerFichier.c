#include <stdio.h>
void fusionFichier(const char *fichier1, const char *fichier2, const char *fichierSortie)
{
    FILE *f2 = fopen(fichier1, "r");
    FILE *f1 = fopen(fichier2, "r");
    FILE *sortie = fopen(fichierSortie, "w+");
     if (f1 == NULL || f2 == NULL || sortie == NULL) {
        printf("Erreur lors de l'ouverture des fichiers.");
        return;
    }
    int num1, num2;
    int res1 = fscanf(f1, "%d", &num1);
    int res2 = fscanf(f2, "%d", &num2);
    while (res1 == 1 && res2 == 1)
    {
        if (num1 < num2)
        {
            fprintf(sortie, "%d\n", num1);
            res1 = fscanf(f1, "%d", &num1);
        }
        else
        {
            fprintf(sortie, "%d\n", num2);
            res2 = fscanf(f2, "%d", &num2);
        }
    }
    while (res1 == 1)
    {
        fprintf(sortie, "%d\n", num1);
        res1 = fscanf(f1, "%d", &num1);
    }
    while (res2 == 1)
    {
        fprintf(sortie, "%d\n", num2);
        res2 = fscanf(f2, "%d", &num2);
    }
    fclose(f1);
    fclose(f2);
    fclose(sortie);
}
int main()
{
    char fichier1[] = "fichier1.txt";
    char fichier2[] = "fichier2.txt";
    char fichierSortie[] = "fichierSortie.txt";
    fusionFichier(fichier1, fichier2, fichierSortie);
    return 0;
}