/*
*Program: dangling pointer, deallocated memory in DMA is known as dangling pointer, we should assign null pointer to overcome  that
*Name: Yogeshkumar S
*Date: 27/12/2023
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *ptr = (int *)malloc(sizeof(int)*5);
	int i;
	for(i=0;i<5;i++)
	{
		ptr[i] = i;
	}
	for(i=0;i<5;i++)
	{
		printf("%d ",ptr[i]);
	}
	printf("\n");
	free(ptr);
	//ptr became dangling pointer
	printf("after free %d\n",*ptr);
	*ptr = 10;//invalid pointing deallocated memory
	ptr = NULL;	
	printf("after NULL %d\n",*ptr);
}
