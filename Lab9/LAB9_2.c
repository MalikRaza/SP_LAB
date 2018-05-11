#include<stdio.h>
#include <unistd.h> 
#include<fcntl.h>
void main(int argc, char *arg[])
{
char buff[255];
close(1);
int fd2=open("error&Output.txt",O_WRONLY|O_CREAT);
int fd=open("for.c",O_RDONLY);
int copy_fd=dup(3);
close(2);
int new_error=dup(fd2);
int n=0;
if(fd==-1)
{
perror("file not find");
}
else
{
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

}


