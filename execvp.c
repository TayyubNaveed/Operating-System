#include <unistd.h>
#include <stdio.h>
int main()
{

printf("X\n");

char *av[] = {"ls","-al","/",0};     

//char *x  ----> A character pointer is essentially a string

execvp("ls",av);       // Here ls is the name of the program


printf("X\n");

}

