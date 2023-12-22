/*
*Program: Factorial recusrion
*Name: Yogeshkumar S
*Date: 21/12/2023
*/
#include"header.h"
int fact(int num)
{
	if(num==0)
	{
		return 1;
	}
	else
	{
		return num*fact(num-1);
	}
}


int main()
{
	int num = 5;
	printf("%d\n",fact(num));
	return 0;
}
