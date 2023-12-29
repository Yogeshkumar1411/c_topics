/*
*Program: Count the number of bits set using recursion 	
*Name: Yogeshkumar S
*Date: 27/12/2023
*/
#include<stdio.h>
int set_bit(int num)
{
	if(num==0)
	{
		return 0;
	}
	else
	{
		return (num&1)+set_bit(num>>1);
	}
}
int main(){
	int num;
	scanf("%d",&num);
	int count = set_bit(num);
	printf("set_bits = %d\n",count);
}
