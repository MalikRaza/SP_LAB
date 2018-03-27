#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
int main()
{
	int *a1, *a2, *a3;
	printf("sbrk(0) before malloc(4): 0x%x\n", sbrk(0));
	a1 = (int *) malloc( sizeof(int)* 1);
	printf("sbrk(0) after `a1 = (int *) malloc(4)': 0x%x\n",sbrk(0));
	a2 = (int *) malloc(4);
	printf("sbrk(0) after `a2 = (int *) malloc(4)': 0x%x\n",sbrk(0));
	a3 = (int *) malloc(4);
	printf("sbrk(0) after `a3 = (int *) malloc(4)': 0x%x\n",sbrk(0));

	printf("a1 = 0x%x, a2 = 0x%x , a3 = 0x%x\n", a1, a2,a3);

	free(a1);
	free(a2);
	free(a3);

	return 0;



}
