#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(void)
{
    int i, pid;
    
    pid= fork();
    
    if(pid > 0)       // Parent
    {

    	sleep(2);
    	exit(0);
    }
    
    else if(pid ==0)     // child
    {
    	for(i=0; i<5; i++)
    	{
    		printf("My parent is %d\n", getppid());
    		sleep(3);
    	}
    }
}

