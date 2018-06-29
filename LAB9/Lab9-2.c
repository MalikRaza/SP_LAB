#include<signal.h>
#include<stdio.h>
#include<sys/types.h>
int main()
{
pid_t cpid=fork();
	if(cpid==0)
	{
		while(1)
		{
			printf("child process \n");
			sleep(1);		
		}
	}
	else
	{
		
		printf("parent");
		sleep(1);
		kill(cpid,SIGINT);
	}
}
