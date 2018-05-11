#include<stdio.h>
#include <unistd.h> 
#include<fcntl.h>
void main(int argc, char *arg[])
{
char buff[255];
close(2);
int new_error=dup(1);
close(1);
int fd2=open("f3.txt",O_WRONLY);
close(0);
int fd=open("f8.txt",O_RDONLY);
int n=0;
if(fd==-1)
{
perror("file not find");
}
else
{
	while(1)
	{
		n=read(0,buff,255);
		if(n==0)
		{
		break;
		}
		write(1,buff,n);

	}
}

}



