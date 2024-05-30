#include <stdio.h>

char *ft_strcpy ( char *destination, char *source){
    while (*source != '\0')
    {
        *destination = *source ;
        source++;
        destination++;
    }
    *destination = '\0';
    return destination ;
}
int main(int argc, char const *argv[])
{
    char source[]="test test test test  test test test test ";
    char destination[20];
    ft_strcpy(destination , source);
    printf("%s",destination);    
    return 0;
}
