#include "suite.h"
int Vn(int n){
    if(n == 1 )
        return 1;
    else
        return 2 * Vn(n-1) + 1 ;
}