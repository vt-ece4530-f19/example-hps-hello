#include <stdio.h>
#include <stdlib.h>

#define BOUND 250000000

int a[BOUND];

int main() {
   unsigned i;
   printf("Hello, World\n");
   for (i=0; i<BOUND; i++)
   	a[i] = i;
   while (1) ;
   return 0;
}
 
