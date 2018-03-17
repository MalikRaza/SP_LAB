#include<stdio.h>
int Palindrome(char *arr,int size)
{
    int mid=0;
    int flag=0;
  for(int start=0,end=size-1;start<=size/2;start++,end--)
	{
           if(arr[start]!=arr[end])
         	{
		flag=1;
		break;
		}

	
	}
    if (flag == 0)
     return 1;
    else 
   return -1; 
        
     
 }

