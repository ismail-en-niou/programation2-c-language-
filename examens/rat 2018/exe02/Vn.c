#include "bib.h"
int Vn(int n ){
    if( n== 0 )
        return 2 ;
    else 
        return (Un(n-1) + Vn(n-1) + 2 * Wn(n-1));
}