#include<signal.h>
#include<stdio.h>
#include<sys/types.h>
void mySignalHandler(int n)
{
  
  printf("i have got signal no : %d \n\n",n);
  sleep(1);
}
int main()
{
signal(SIGINT,&mySignalHandler);
signal(SIGFPE,&mySignalHandler);
signal(SIGQUIT,&mySignalHandler);
//signal(SIGSTP,&mySignalHandler);
signal(SIGKILL,&mySignalHandler);
signal(SIGHUP,&mySignalHandler);
while(1)
{
	printf("im in an infinite loop \n");
	sleep(1);
}
}
