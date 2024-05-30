#include <stdio.h>
int Un(int n);
int Vn(int n);
int Wn(int n);

int Un(int n)
{
    if (n == 0)
        return 1;
    else
        return(2 * Un(n-1) + 3 *Vn(n-1) + Wn(n-1));
}
int Vn(int n ){
    if( n== 0 )
        return 2 ;
    else 
        return (Un(n-1) + Vn(n-1) + 2 * Wn(n-1));
}
int Wn( int n ){
    if ( n== 0 )
        return 3 ;
    else
        return ( Un(n-1) + 4 * Vn(n-1) + Wn(n-1) );
}

int main() {
    int n;
    printf("Entrez la valeur de n: ");
    scanf("%d", &n);
    
    printf("Un(%d) = %d\n", n, Un(n));
    printf("Vn(%d) = %d\n", n, Vn(n));
    printf("Wn(%d) = %d\n", n, Wn(n));
    
    return 0;
}