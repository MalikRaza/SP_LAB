#include<stdio.h>
#include <unistd.h> 
#include<fcntl.h>
void main(int argc, char *arg[])
{
char buff[255];
int fd=1;
if(argc > 1)
{
close(1);
fd=open(arg[1],O_WRONLY);
}
printf("hello");
int fd2=open("w.txt",O_RDONLY);
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
printf("hello");

}
