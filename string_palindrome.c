/*
*Program: String palindrome
*Name: Yogeshkumar S
*Date: 27/12/2023
*/
#include<stdio.h>
#include<string.h>
int palindrome(char *str,int size)
{
	int i;
	for(i=0;i<size/2;i++)
	{
		if(str[i]!=str[size-i-1])
		{			
			return 0;
		}
	}
	return 1;
}
int main()
{
	char str[] = "malayalam";
	if(palindrome(str,strlen(str)))
	{
		printf("palindrome\n");
	}
	else
	{
		printf("Not a palindrome\n");
	}
	
}
