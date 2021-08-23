// C program to illustrate
//atexit() function when it throws an exception.
#include <stdio.h>
#include<stdlib.h>

void shows_Exception()
{
	int y = 50, z = 0;
	// Program will terminate here
	int x = y / z;

	// Cannot get printed as the program
	// has terminated
	printf("Divided by zero\n");
}
// Driver Code
int main()
{
	int value;
	value = atexit(shows_Exception);
	if (value != 0) {
		printf("atexit() function registration failed\n");
		exit(1);
	}

	// Executed at the starting
	printf("Registration successful\n");
	return 0;
}
