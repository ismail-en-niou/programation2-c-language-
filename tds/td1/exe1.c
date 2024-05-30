#include <stdio.h>

int main(int argc ,char **argv){
    int i ;
    printf("le nombre des argument passer a ce programme est : %d \n " , argc);
    for(i=0 ; i < argc ; i++ ){
        printf("argv[%d] = %s \n " , argc , argv[i]);
    }
 return 0 ; 
}