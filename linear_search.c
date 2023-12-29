/*
*Program: Linear search
*Name: Yogeshkumar S
*Date: 27/12/2023
*/
#include<stdio.h>
int linear_search(int key,int *arr,int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		if(key==arr[i])
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	int arr[] = {40,56,67,23,89,13};
	int i,key,pos;
	scanf("%d",&key);
	pos = linear_search(key,arr,sizeof(arr)/sizeof(int));
	if(pos==-1)
	{
		printf("Not found\n");
	}
	else
	{
		printf("Pos is %d\n",pos);
	}
}
