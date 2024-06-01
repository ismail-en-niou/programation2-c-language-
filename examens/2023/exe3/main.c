#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *randomTab(int size)
{
    int *T = (int *)malloc(size * sizeof(int));
    if (T == NULL)
    {
        printf("Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < size; i++)
        T[i] = rand() % 1001;
    for (int i = 0; i < size; i++)
        printf("T[%d] = %d \n", i, T[i]);
    return T; 
}
int main()
{
    int size;
    clock_t debut, fin;
    int i;
    debut = clock();
    printf("Enter the size of the array: ");
    scanf("%d", &size); 
    printf("Generating random array...\n");
    int *result = randomTab(size);

    printf("result = %d", *result);
    free(result);
    fin = clock();
    float difference = (float)(fin - debut) / (float)CLOCKS_PER_SEC;
    printf("Durée : %f secondes\n", difference);

    return 0;
}
