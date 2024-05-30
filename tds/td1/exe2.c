#include <stdio.h>

int main(){
    int tab[70] , x , n ;
    int *p1 , *p2;
    printf("donner la taille du tableaux ");
    scanf("%d",&n);
    for (int  i = 0; i < n; i++)
    {
        printf("Tab[%d] = " , i+1);
        scanf("%d",&tab[i]);
    }
    printf("donner la vleur de x que vous vouller suprimer de ce cas ");
    scanf("%d",&x);
     p1 = tab;
    while (p1 != tab + n) {
        if (*p1 == x) {
            for (p2 = p1; p2 != tab + n - 1; ++p2) {
                *p2 = *(p2 + 1);
            }
            --n;
        } else {
            ++p1;
        }
    }
    // affichage   
    for (int i = 0; i < n; i++)
    {
        printf("%d \n", tab[i]);
    }
    
    
    
    return 0 ; 
}