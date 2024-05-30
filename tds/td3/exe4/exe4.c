#include <stdio.h>
#include <stdlib.h>
char cesar(int k, char c)
{
    if (c >= 'a' && c <= 'z')
    {
        return 'a' + (c - 'a' + k) % 26;
    }
    else if (c >= 'A' && c <= 'Z')
    {
        return 'A' + (c - 'A' + k) % 26;
    }
    else
    {
        return c;
    }
}
int main(int argc, char **argv)
{
    FILE *fichier1, *fichier2;
    char c;
    int decalage = 0;
    printf("\nCodage de Cesar ...\n");
    printf("Saisir le decalage : ");
    scanf("%d", &decalage);
    fichier1 = fopen("message.txt", "r");
    if (!fichier1)
    {
        printf("%s\t", "fichier sourceinexistant\n");
        exit(-1);
    }
    fichier2 = fopen("message_crypte.txt", "w");
    if (!fichier2)
    {
        printf("%s\t", "fichier destination inexistant\n");
        exit(-1);
    }
    while ((c = (char)getc(fichier1)) != EOF)
        fprintf(fichier2, "%c", cesar(decalage, c));
    printf("............");
    printf("\n\tCodage Cesar de %s\t===>\t%s est reussi\n", fichier1, fichier2);
    fclose(fichier1);
    fclose(fichier2);
    return 0;
}