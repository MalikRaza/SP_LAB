#include<stdio.h>
void main()
{
int pid=fork();
if(pid!=-1)
{
 if(pid==0)
   {
     printf("child's pid: %d\n",(long)getpid());
	printf("child's ppid: %d\n",(long)getppid());
	exit();
   }
else
   {
     printf("parent's pid: %d\n",(long)getpid());
	printf("parent's ppid: %d\n",(long)getppid());

   }
}
else
{
printf("Error while creating child");
}
}
