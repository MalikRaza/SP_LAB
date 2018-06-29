#include<signal.h>
#include<stdio.h>
#include<sys/types.h>
int main()
{
sigset_t newset ,oldset;
sigemptyset(&newset);
sigaddset(&newset,SIGINT);
sigaddset(&newset,SIGFPE);
sigaddset(&newset,SIGQUIT);
sigaddset(&newset,SIGHUP);

sigprocmask(SIG_SETMASK,&newset,&oldset);
for(int i=0;i<10;i++)
	{
		printf("currently signals are blocked; \n");
		sleep(1);	
	}
sigprocmask(SIG_SETMASK,&oldset,NULL);
for(int i=0;i<10;i++)
	{
		printf("signals are unblocked; \n");
		sleep(1);	
	}
}
