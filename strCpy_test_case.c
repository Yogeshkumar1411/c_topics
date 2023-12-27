/*
*Program: Testcases for copying one string to another with start and end index 
*Name: Yogeshkumar S
*Date: 27/12/2023
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void strCpy(char *dest,const char *src,int startIndex,int endIndex)
{
	int i,j;
	if(*dest)
	{
		printf("dest is not empty\n");
		exit(1);
	}
	else
	{
		for(i=startIndex,j=0;i<endIndex;i++,j++)
		{
			dest[j] = src[i];
		}
		dest[j] = '\0';
	}

}

void basic_test_case()
{
	const char src[6]  = "Hello";
	char dest[6] = {'\0'};
	strCpy(dest,src,0,5);
	if(strcmp(dest,src))
	{
		printf("basic_test_case Error\n");
		exit(1);
	}
	else
	{
		printf("basic_test_case passed\n");
	}
}

void mid_to_end()
{
	const char src[6]  = "Hello";
	char dest[3] = {'\0'};
	strCpy(dest,src,2,5);
	if(strcmp(dest,"llo"))
	{
		printf("mid_to_end Error\n");
		exit(1);
	}
	else
	{
		printf("mid_to_end passed\n");
	}
}

void start_to_mid()
{
	const char src[6]  = "Hello";
	char dest[3] = {'\0'};
	strCpy(dest,src,0,3);
	if(strcmp(dest,"Hel"))
	{
		printf("start_to_mid Error\n");
		exit(1);
	}
	else
	{
		printf("start_to_mid passed\n");
	}
}
int main()
{
	basic_test_case();
	mid_to_end();
	start_to_mid();
}
