/*
*Program: remove vowels form the string
*Name: Yogeshkumar S
*Date: 27/12/2023
*/
#include<stdio.h>
#include<string.h>

void remove_vowel(char *str,int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
		{
			int j;
			for(j=i;j<size-1;j++)
			{
				str[j] = str[j+1];
			}
			str[j]='\0';
			i--;
			size--;
		}
	}
	printf("%s\n",str);
}


int main()
{
	char str[] = "Embedded";
	remove_vowel(str,strlen(str));
}
