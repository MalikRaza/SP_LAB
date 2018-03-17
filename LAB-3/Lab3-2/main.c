#include<stdio.h>
#include<mySTR.h>
int main()
{
char *r="abba";
int size=4;
int result=Palindrome(r,size);
if (result=1)
printf("%s \n","is palindrome");
else
printf("%s \n","not palindrome");

}

