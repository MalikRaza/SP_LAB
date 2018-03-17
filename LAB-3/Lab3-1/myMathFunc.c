#include<stdio.h>

int isEqual(int first , int second)
{
  if(first=second)
	{
 	  return 1;
	}
   else 
	return -1;
}
 
void Swap(int *first, int *second)
{
       *first=*first+*second;
       *second=*first-*second;
	*first=*first-*second;
        
}
