#include <stdio.h>
#include <string.h>

int main(){
    char ch[50];
    int contAperCase = 0 ; 
    printf("donner la chaine de caractére");
    scanf("%s",ch);
    char *p ;
    p = ch  ;
    while (*p != '\0' )
    {
        if(*p <= 'Z' && *p >= 'A'){
            contAperCase ++ ; 
        }
        p++;
    } 
    printf("les lettres Majusqule sont %d" ,contAperCase );
    return 0;
}