#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main(void)
{

int i;
//printf("\nProcess PID %6d \t PPID %6d \n",getpid(), getppid());

for (i = 0; i<3; ++i)
{
	if (fork()!=0)
	{
	
	printf("\nProcess PID %6d \t PPID %6d \n",getpid(), getppid());
	
	//printf("\nI in child %6d \n",i);

	}
	
}

return 0;

}
