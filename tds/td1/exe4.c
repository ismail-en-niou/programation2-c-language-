#include <stdio.h>
void inverseElement(int T[], int n)
{
    int *p1, *p2;
    for (p1 = T, p2 = T + n - 1; (p1 - T) < (p2 - T); p1++, p2--)
    {
        int temp = *p1;
        *p1 = *p2;
        *p2 = temp;
    }
    for (int i = 0; i < n; i++)
    {
        printf("T[%d]  = %d \n", i + 1, T[i]);
    }
};
int main(int argc, char const *argv[])
{
    int T[50];
    int n;
    printf("donner la taille de tableaux ");
    scanf("%d", &n);
    printf("donner la valeur de Tableaux \n ");
    for (int i = 0; i < n; i++)
    {
        printf("T[%d]  = ", i + 1);
        scanf("%d", &T[i]);
    }

    inverseElement(T, n);
    return 0;
}
