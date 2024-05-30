#include <time.h> 
int main() 
{ 
 clock_t debut, fin; 
 int i; 

 debut=clock(); 
 for (i=0;i<999999999;i++); 
 fin=clock(); 
 
 float difference = (float)(fin-debut)/(float)CLOCKS_PER_SEC; 
 printf("Durée : %f secondes\n", difference); 

 return 0; 
} 

