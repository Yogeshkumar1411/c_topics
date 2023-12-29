/*
*Program: Armstrong number 	
*Name: Yogeshkumar S
*Date: 27/12/2023
*/
#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	int sum = 0;
	int temp = num;
	while(num)
	{
		sum = sum + ((num%10)*(num%10)*(num%10));
		num = num/10;
	}
	if(sum==temp)
	{
		printf("Armstrong\n");
	}
	else
	{
		printf("Not\n");
	}
}
