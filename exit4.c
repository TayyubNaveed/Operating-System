
#include<stdio.h>
#include<stdlib.h>


int main()
{
    int num;
    void anotherExit(void);  // function prototype
    
    printf("Enter a number: ");
    scanf("%d", &num);
   
    
    if (num>25)
    {
    	printf("Exit 1\n");
    	exit(1);	
    }
    
    else
	
	anotherExit();
}

void anotherExit()      //  function definition
{	
	printf("Exit 2\n");
	
    	exit(1);
}
