#include<stdio.h>
#include"myMath.h"
#include"mySTR.h"
int main()
{
int first=5;
int second=2;
int result;
result=isEqual(first,second);
printf("%d \n",result);
Swap(&first,&second);
printf("first number is %d and second number is %d \n",first,second);

char *r="abba";
int size=4;
int res=Palindrome(r,size);
if (res=1)
printf("%s \n","is palindrome");
else
printf("%s \n","not palindrome");
}
