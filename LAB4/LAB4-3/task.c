#include<stdio.h>
#include<setjmp.h>
static jmp_buf envbuf;
void FirstSetJump(int* counter)
{
    printf("value of counter : %d\n",*counter);
      *counter+1;
     longjmp(envbuf,5);
}
void haveFun(int* counter)
{
        printf("havefun\n");    
	printf("value of counter : %d\n",*counter);
        *counter++;


}
int main()
{
	int counter;
	counter=setjmp(envbuf);
	if(counter==0)
	{

	 FirstSetJump(&counter);
         }
	else
	haveFun(&counter);
    
      
}

