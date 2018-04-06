#include<stdio.h>
#include<stdlib.h>
void main()
{
int status;
int pid=fork();
if(pid!=-1)
{
 if(pid==0)
   {
     exit(-1);
     printf("child's pid: %d\n",(long)getpid());
	printf("child's ppid: %d\n",(long)getppid());
	
   }
else
   {
    wait(&status);
    if(WIFEXITED(status)!=-1)
	{
	     printf("exit status: %d\n",WEXITSTATUS(status));

	}
     printf("parent's pid: %d\n",(long)getpid());
	printf("parent's ppid: %d\n",(long)getppid());

   }
}
else
{
printf("Error while creating child");
}
}
