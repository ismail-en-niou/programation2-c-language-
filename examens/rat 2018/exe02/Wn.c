#include "bib.h"
int Wn( int n ){
    if ( n== 0 )
        return 3 ;
    else
        return ( Un(n-1) + 4 * Vn(n-1) + Wn(n-1) );
}
