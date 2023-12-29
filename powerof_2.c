/*
*Program: power of 2
*Name: Yogeshkumar S
*Date: 27/12/2023
*/
#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	if((num&(num-1))==0)
	{
		printf("powerof 2\n");
	}
	else
	{
		printf("No\n");
	}
	
}

/*
128 64 32 16 8 4 2 1
0    0  1 0  0 1 0 0
0    0  1 0  0 0 1 1


0    0  1 0  0 0 0 0
0    0  0 1  1 1 1 1*/
