#include <stdio.h>

//called function
void f(){

    printf("Executing f\n");
    return;
}

int main(){

    f();  // calling function
    
    printf("Back from f\n");
}