#include<signal.h>
#include<stdio.h>
int main()
{
signal(SIGINT,SIG_IGN);
signal(SIGFPE,SIG_IGN);
signal(SIGQUIT,SIG_IGN);
signal(SIGSTP,SIG_IGN);
signal(SIGHUP,SIG_IGN);
while(1)
{
printf("Im in an infinite loop :) \n");
}

}
