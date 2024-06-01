#include "suite.h"
#include <stdio.h>
int Un(int n){
    if (n == 1)
    return 1;
    else
    return Un(n-1) + 1;
}
