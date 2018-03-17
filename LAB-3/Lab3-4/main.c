#include<stdio.h>
#include"myMath.h"
int main()
{
int first=5;
int second=2;
int result;
result=isEqual(first,second);
printf("%d \n",result);
Swap(&first,&second);
printf("first number is %d and second number is %d \n",first,second);

}
