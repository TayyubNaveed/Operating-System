// Fork code 6
#include <unistd.h>
#include <stdio.h> // For printf()
int main()
{
int p;
printf("Original Process, pid = %d\n", getpid() );
p = fork();
//printf("Child PID = %d, PPID = %d\n", getpid(), getppid() );
//printf("Parent PID = %d, Child ID = %d\n", getpid(), p);

if (p == 0)
{
printf("Child PID = %d, PPID = %d\n", getpid(), getppid() );
sleep(30);
}
else
{
printf("Parent PID = %d, Child ID = %d\n", getpid(), p);
sleep(30);
}
}

