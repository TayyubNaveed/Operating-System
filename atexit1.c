#include <stdio.h>
#include <stdlib.h>

void functionA() {

   printf("This is function A\n");
}
int main () {
   /* register the termination function */
   
   int status=atexit(functionA);   // functionA();
   
   printf("reg status value: %d",status);
   
   
   printf("\nStarting  main program...\n");

   printf("Exiting main program...\n");

   return 0;
}