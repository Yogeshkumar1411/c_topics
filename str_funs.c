/*
*Program: string functions
*Name: Yogeshkumar S
*Date: 27/12/2023
*/
#include<stdio.h>
#include<stdlib.h>
#define STRCAT 1
#define STRCPY 2
#define STRCMP 3

void strCat(char *str, int len)
{
	char str_1[50];
	printf("Enter the string needs to be cat\n");
	scanf("%s",&str_1);
	int i;
	for(i=0;str_1[i]!='\0';i++);
	int len_1 = i;
	for(i=0;i<len_1;i++)
	{
		str[len+i]= str_1[i];
	}
	str[len+i] = '\0';
	printf("strcat = %s\n",str);
}
void strCpy(char *str, char *str_des,int len)
{
	int i;
	for(i=0;i<len;i++)
	{
		str_des[i] = str[i];
	}
	str_des[i] = '\0';
	
}
int strCmp(char *str,char *str_1)
{
	int i;
	for(i=0;str[i]!='\0';i++);
	int len = i;	
	for(i=0;str_1[i]!='\0';i++);
	int len_1 = i;
	if(len==len_1)
	{
		for(i=0;i<len;i++)
		{
			if(str[i]>str_1[i])
			{
				return (int)(str[i]-str_1[i]);
			}
			else if(str[i]<str_1[i])
			{
				return (int)(str_1[i]-str[i]);
			}			
		}
		return 0;
	}
	else
	{
		return -1;
	}
}
int main()
{
	char str[] = "Mirafra Technologies";
	int i;
	for(i=0;str[i]!='\0';i++);
	int len = i;
	int key;
	scanf("%d",&key);
	switch(key)
	{
		case STRCMP:
			printf("strcmp\n");
			char str_1[] = "Mirafra Technologies";
			int res = strCmp(str,str_1);
			if(res==0)
			{
				printf("matched\n");
			}
			else
			{
				printf("Not matched\n");
			}
			break;
		case STRCPY:
			printf("strcpy\n");
			char *str_des = (char*)malloc(len*sizeof(char));
			strCpy(str,str_des,len);
			printf("str_des = %s\n",str_des);
			free(str_des);
			break;
		case STRCAT:
			printf("strcat\n");
			strCat(str,len);
			break;
		default:
			printf("invalid\n");
			break;						
	}
}
