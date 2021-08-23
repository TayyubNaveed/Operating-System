//execDemo.c

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
	
	printf("Hello from execDemo.c\n");

	//A null terminated array of character pointers
	char *args[]={"./EXEC1",NULL};
	
	execvp(args[0],args);
	
	/*All statements are ignored after execvp() call as this whole
	process(execDemo.c) is replaced by another process (EXEC1.c)*/
	printf("Ending-----");
	
	return 0;
}
