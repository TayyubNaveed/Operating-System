// C program to illustrate atexit() function
#include <stdio.h>
#include <stdlib.h>


// Returns no value, and takes nothing as a parameter
void done()
{
	printf("Exiting Successfully\n"); // Executed second
}
// Driver Code
int main()
{
	int value;
	value = atexit(done);

	if (value != 0) {
		printf("atexit () function registration failed \n");
		exit(1);
	}
	printf("Registration successful \n");// Executed First
	return 0;
}
