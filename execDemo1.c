//execDemo1.c
#include <unistd.h>
#include <stdio.h>
#include<stdlib.h>
int main()
{

	printf("Hello from execDemo1.c\n");

	//A null terminated array of character pointers
	char *args[]={"./EXEC2",NULL};
	
	execv(args[0],args);
	
	/*All statements are ignored after execv() call as this whole
	process(execDemo1.c) is replaced by another process (EXEC2.c)*/
	printf("Ending-----");

}