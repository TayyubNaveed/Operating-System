// Fork code 2
#include <unistd.h>
#include <stdio.h> // For printf()
int main()
{
int newly_created;

newly_created = fork();      //pid = fork(); 

if(newly_created == 0)
{
printf("Child PID = %d\n", newly_created);
printf("I am the Child with PID = %d\n", getpid());
}
else if(newly_created==-1)
{
printf("Error");
}

else
{
printf("Parent of = %d\n", newly_created);
printf("I am the Parent with PPID = %d\n",getppid());
}
}