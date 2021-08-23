/*C program to get Process Id and Parent Process Id in Linux.*/
 
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
 
int main()

{
    int p_id , p_pid;
     
    p_id = getpid();  /*process id*/
    
    p_pid = getppid(); /*parent process id*/
    
     
    printf("Process ID: %d \n", p_id);
    
    printf("Parent Process ID: %d \n", p_pid);
   
    system("pstree -p | grep 3187");
    
    printf("Process PID %d \t PPID %d \n", getpid(), getppid());
 
    return 0;
}
