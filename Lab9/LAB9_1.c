#include<stdio.h>
#include <unistd.h> 
#include<fcntl.h>
void main(int argc, char *arg[])
{
char buff[255];

int fd=open("fork.c",O_RDONLY);
int copy_fd=dup(3);
int n=0;

	while(1)
	{
		n=read(copy_fd,buff,255);
		if(n==0)
		{
		break;
		}
		write(1,buff,n);

	}
}


