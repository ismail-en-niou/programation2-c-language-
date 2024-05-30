#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    FILE *file1;
    char str[100];
    file1 = fopen("info.txt", "r");
    if (file1 == NULL) {
        perror("Error opening file");
        return 1;
    }
    FILE *file2 = fopen("copier.txt", "w");
    if (file2 == NULL) {
        perror("Error creating file");
        return 1;
    }
    while (fgets(str, sizeof(str), file1) != NULL) {
        printf("%s", str);
    }
    fprintf(file2,str);
    fclose(file1);
    fclose(file2);
    
    return 0;
}
