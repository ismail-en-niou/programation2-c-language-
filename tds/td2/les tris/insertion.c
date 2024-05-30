#include <stdio.h>
void tri_insertion(int T[] , int n){
    for(int i = 1 ; i < n ; i++){
        int tmp = T[i];
        int j = i - 1;
        while (tmp < T[j] && j  >= 0)
        {
           T[j+1] = T[j];
           T[j]=tmp;
           j--;
        }
        
    }
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
    printf("le tri d tableaux T est \n");
    tri_insertion(T , taille);
    affichage(T,taille);
    return 0;
    return 0;
}
