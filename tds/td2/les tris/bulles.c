#include <stdio.h>
void affichage(int T[] , int n ){
    for(int i = 0 ; i < n ; i++){
        printf("%d   " , T[i]);
    }
}
void tri_bulles(int T[],int n){
    for (int  i = 0; i < n; i++)
    {
        for (int  j = i+1; j < n; j++)
        {
            if(T[j] < T[i]){
                int tmp = T[i];
                T[i]= T[j] ;
                T[j] = tmp;
            }
        }
        
    }
    
}
int main(int argc, char const *argv[])
{
    int taille = 6 ;
    int T[] = {20, 12, 10, 35, 25, 0};
    printf("l tri d tableaux T est \n");
    tri_bulles(T , taille);
    affichage(T,taille);
    return 0;
}
