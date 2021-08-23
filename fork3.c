#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
    fork();   
    
    fork();
    
    fork();
    
    printf("hello\n");
    
    //printf("The process with the PID=%d\n", getpid());

    return 0;
}
