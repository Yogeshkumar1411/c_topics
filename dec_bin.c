/*
*Program: decimal to binary 	
*Name: Yogeshkumar S
*Date: 27/12/2023
*/
#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	int i=0;
	int temp = num;
	int count=0;
	while(temp)
	{
		count++;
		temp=temp/2;
		printf("temp = %d\n",temp);
	}
	printf("Count = %d\n",count);
	int arr[count];
	printf("size = %d\n",sizeof(arr));
	while(num)
	{
		arr[count-1] = num%2;
		num = num/2;
		count--;
	}
	for(i=0;i<sizeof(arr)/sizeof(int);i++)
	{
		printf("%d\n",arr[i]);
	}
}
