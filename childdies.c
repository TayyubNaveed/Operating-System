#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(void)
{
    int i, pid;

    
    pid= fork();
    
    if(pid> 0)          //Parent
    {
    	sleep(60);
    }
    
    else if(pid ==0)    //child
    {
    	exit(0);
    }
}