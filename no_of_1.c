/*
*Program: number of 1's in given number
*Name: Yogeshkumar S
*Date: 21/12/2023
*/
#include"header.h"
int main()
{
	int num = 8624;
	int count = 0;
	while(num)
	{
		if(num&1)
		{
			count++;
		}
		num>>=1;
	}
	printf("count = %d\n",count);
}
