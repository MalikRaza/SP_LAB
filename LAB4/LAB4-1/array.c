#include <stdio.h>
#include<stdlib.h>
int main()
{
int *arr=(int*) malloc (sizeof(int) * 10);
printf("Enter numbers:\n");
		for(int i=0;i<5;i++)
		{
		scanf("%d",&arr[i]);
		}
printf("you entered:\n");
		for(int i=0;i<5;i++)
		{
		printf("%d \n",arr[i]);
		}
		arr=(int*)realloc(arr,10);
printf("RESIZED ARRAY:\n");
		for(int i=0;i<10;i++)
		{
		printf("%d \n",arr[i]);
		}
printf("enter data is  ARRAY double the previous array:\n");
		for(int i=0;i<10;i++)
		{
		scanf("%d",&arr[i]);
		}
printf("you entered:\n");

		for(int i=0;i<10;i++)
                  {
         printf("%i \n",arr[i]);
                  }
free(arr);
return 0;
}

