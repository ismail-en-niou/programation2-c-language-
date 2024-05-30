#include <stdio.h>
void triFusion(int tab[], int g, int d)
{
    if (d > g)
    {
        int m = (g + d) / 2;
        triFusion(tab, g, m);
        triFusion(tab, m + 1, d);
        fusion(tab, g, m, d);
    }
}
void fusion(int tab[], int g, int m, int d)
{
    int i, j, k;
    int n1 = m - g + 1;
    int n2 = d - m;
    int tg[n1], td[n2];
    for (i = 0; i < n1; i++)
        tg[i] = tab[g + i];
    for (j = 0; j < n2; j++)
        td[j] = tab[m + 1 + j];
    i = 0;
    j = 0;
    k = g;
    while (i < n1 && j < n2)
    {
        if (tg[i] <= td[j]) // Corrected comparison here
        {
            tab[k] = tg[i];
            i++;
        }
        else
        {
            tab[k] = td[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
       tab[k]= tg[i];
       i++;
       k++;
    }
    while (j < n2)
    {
        tab[k] = td[j];
        j++;
        k++;
    }
}

affichage(int tab[] , int taille){
     for (int i = 0; i < taille; i++)
    {
        printf("%d \n", tab[i]);
    }
}
int main()
{
    int taille = 6;
    int tab[] = {20, 12, 10, 35, 25, 0};
    triFusion(tab, 0, taille - 1);
    printf("tableau trie : \n");
    affichage(tab, taille);
}