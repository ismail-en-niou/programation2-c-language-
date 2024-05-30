#include <stdio.h>
void tri_rapid(int T[],int bas , int haut){
    if (haut > bas)
    {
        int pi = parition(T, bas  , haut);
        tri_rapid(T,bas, pi-1);
        tri_rapid(T , pi+1 , haut);
    }
    
}
void cha_nger(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int  parition(int T[] , int bas , int haut){
    int pivot = T[haut];
    int i = bas - 1;
    
    for ( int j = bas ; j < haut; j++)
    {
       if (T[j] < pivot)
       {
        i++;
        cha_nger(&T[j],&T[i]);
        
       }
       
    }
    cha_nger(&T[i+1],&T[haut]);
    return (i+1 );
}

void affichage(int T[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d   ", T[i]);
    }
}

int main(int argc, char const *argv[])
{
    int taille = 6 ;
    int T[] = {20, 12, 10, 35, 25, 0};
    printf("l tri d tableaux T est \n");
    tri_rapid(T , 0 , taille - 1);
    affichage(T,taille);
    return 0;
}
