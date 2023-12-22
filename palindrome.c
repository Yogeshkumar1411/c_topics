/*
*Program: Palindrome check
*Name: Yogeshkumar S
*Date: 21/12/2023
*/
#include"header.h"
int main()
{
	int num = 1510;
	int res = 0;
	int temp = num;
	while(temp)
	{
		int rem = temp%10;
		res = rem+(res*10);
		temp = temp/10;
	}
	if(num==res)
	{
		printf("Palindrome\n");
	}
	else
	{
		printf("Not Palindrome\n");
	}
}
