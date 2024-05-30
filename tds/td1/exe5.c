#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int *a ,*b;
    printf("donner la valeur de a et b ");
    scanf("%d" ,a );
    scanf("%d",b);
    *a = *a +*b;
    *b=*a - *b;
    *a = *a - *b;
    printf("la valeur de a et b sont %d et  %d " , *a ,*b);
    return 0;
    

}

