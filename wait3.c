#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include<sys/wait.h>
int main()
{

int pid;
pid = fork();

if(pid==0)
{
	printf("Child is running...\n");
}

else
{
	printf("Parent is running...\n");
	wait(NULL);
	printf("Child terminated\n");
}

printf("Done\n");

return 0;

}
