#include<stdio.h>
#include<stdlib.h>

//functions prototypes
 void onexit(void);

int main(void)
{
     
    int counter =1;
    int value=atexit(onexit);
    
    if(value!=0)
    {
    	printf("Failed to register onexit as the termination function\n");
    }
    
    while(1)
    {
    	printf("%d \n",counter);
    	if(counter==10)
    	{
    	   exit(0);
    	}
    	counter++;
    }    
    
 return 0;
}

//  function definitions
void onexit(void)      
{	
    printf("Hi I am called before termination\n");
}
