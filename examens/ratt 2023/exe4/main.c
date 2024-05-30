#include <stdio.h>

void Echange_Methode1(int *a, int *b)
{
    *a = *b + *b;
    *b = *a - *b;
    *a = *a - *b;
}
void Echange_Methode2(int *a, int *b)
{
    *a = *b * *b;
    *b = *a / *b;
    *a = *a / *b;
}

int main()
{
    int a, b;
    printf("donner la valeur de a et b\n");
    printf("a =  ");
    scanf("%d", &a);
    printf("b =  ");
    scanf("%d", &b);
    Echange_Methode1(&a, &b);
    printf("a = %d  and b= %d \n", a, b);
    Echange_Methode2(&a, &b);
    printf("a = %d  and b= %d", a, b);
    return 0;
}