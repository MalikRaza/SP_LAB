#include<stdio.h>
#include <unistd.h> 
#include<fcntl.h>
void main()
{
char buff[255];
int fd=open("r.txt",O_RDONLY);
int fd2=open("w.txt",O_WRONLY);
int n=0;
	while(1)
	{
		n=read(fd,buff,255);
		if(n==0)
		{
		break;
		}
		write(fd2,buff,n);

	}

}
