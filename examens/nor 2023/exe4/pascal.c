#include <stdio.h>

int main()
{
    int n;
    printf("donner la valeur de n ");
    scanf("%d", &n);
    int M[n+1][n+1];
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            if (j == 0 || j == i)
            {
                M[i][j] = 1;
            }
            else
            {
                M[i][j] = M[i - 1][j] + M[i - 1][j - 1];
            }
        }
    }
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }

    return 0;
}
