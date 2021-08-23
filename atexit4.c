// C program to illustrate more than one atexit function
#include <stdio.h>
#include<stdlib.h>


// Executed last, in a Reverse manner
void first()
{

	printf("Exit first\n");
}

// Executed third
void second()
{

	printf("Exit Second\n");
}

// Executed Second
void third()
{

	printf("Exit Third\n");
}

// Executed first
void fourth()
{

	printf("Exit Fourth\n");
}
// Driver Code
int main()
{
	int value1, value2, value3, value4;
	value1 = atexit(first);
	value2 = atexit(second);
	value3 = atexit(third);
	value4 = atexit(fourth);
	if ((value1 != 0) || (value2 != 0) ||
		(value3 != 0) || (value4 != 0)) 
	{
		printf("atexit() function registration Failed\n");
		exit(1);
	}
	// Executed at the starting
	printf("Registration successful\n");
	return 0;
}
