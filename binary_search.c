/*
*Program: Binary search
*Name: Yogeshkumar S
*Date: 27/12/2023
*/
#include<stdio.h>
int binary_search(int *arr,int key,int size)
{
	int end = size-1;
	int beg = 0,mid;
	int count = 0;
	while(arr[mid]!=key)
	{
		mid = beg+(end-beg)/2;
		if(arr[mid]==key)
		{
			return mid;
		}		
		if(arr[mid]>key)
		{
			end = mid-1;
		}
		else
		{
			beg = mid+1;
		}
	}
	return -1;
}

int main()
{
	int arr[] = {10,20,30,40,50,60};
	int size = sizeof(arr)/sizeof(int);
	int key,pos;
	scanf("%d",&key);
	pos = binary_search(arr,key,size);
	if(pos==-1)
	{
		printf("Not found\n");
	}
	else
	{
		printf("%d\n",pos);
	}
	
}
