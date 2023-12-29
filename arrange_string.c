/*
*Program: arrange alphabet in a string
*Name: Yogeshkumar S
*Date: 27/12/2023
*/
#include<stdio.h>
#include<string.h>
void arrange(char *str,int size)
{
	int i,j;
	for(i=0;i<size-1;i++)
	{
		
		for(j=0;j<size-i-1;j++)
		{
			if(str[j]>str[j+1])
			{
				char temp = str[j];
				str[j] = str[j+1];
				str[j+1] = temp;
			}
		}
	}
	
	printf("%s\n",str);
}
int main()
{
	char str[] = "Embedded";
	arrange(str,strlen(str));
}
