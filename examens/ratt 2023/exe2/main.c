#include <stdio.h>
#include "suite.h"

int main(){
    int n ;
    printf("donner la valeur de n : ");
    scanf("%d",&n);
    printf("Un(%d) =  %d  \n",n,Un(n));
    printf("Vn(%d)  = %d \n",n, Vn(n));
    return 0 ;
}