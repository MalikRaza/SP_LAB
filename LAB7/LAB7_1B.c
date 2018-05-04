#include<stdio.h>
#include <unistd.h> 
#include<fcntl.h>
void main(int argc, char *arg[])
{
char buff[255];
if (argc==3)
{
int fd=open(arg[2],O_WRONLY);
int fd2=open(arg[1],O_RDONLY);
int n=0;

	while(1)
	{
		n=read(fd2,buff,255);
		if(n==0)
		{
		break;
		}
		write(fd,buff,n);

	}
unlink(arg[1]);
}

}
