/* exit example */
#include <stdio.h>
#include <stdlib.h>

int main ()
{
FILE * pFile;  //  pointer of type file

pFile = fopen ("myfile.txt", "r");  //opening the file in read-only mode

if (pFile == NULL)
{
	printf ("Error opening file \n");
	exit(1);
}

else
{
	/* file operations here */
	printf("File is Opening here...\n");
	//exit (0);		
}

printf("process is terminating here\n");
return 0;
}
