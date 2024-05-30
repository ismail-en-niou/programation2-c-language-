#include "bib.h"
int Un(int n)
{
    if (n == 0)
        return 1;
    else
        return(2 * Un(n-1) + 3 *Vn(n-1) + Wn(n-1));
}