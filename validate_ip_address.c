//validate ip address
#include"header.h"
int check_ip(char *ip)
{
	int i=0;
	int count = 0;
	int val[3];
	while(*ip)
	{
		
		if( (((*ip)<48) || ((*ip)>57)) && (*ip)!='.')
		{	
			return 0;
		}
		val[i] = (*ip)-'0';
		
		i++;
		if(*ip=='.')
		{
			int j,sum = 0;
			for(j=0;j<i-1;j++)
			{
				sum = sum*10+val[j];
			}
			if(sum>255)
			{
				return 0;
			}
			for(j=0;j<i;j++)
			{
				val[i] = 0;
			}
			sum = 0;
			i = 0;
			count++;
			if(count>3)
			{
				return 0;
			}
		}
		ip++;
	}
	if(*ip=='\0')
	{
		return 1;
	}
}
int main()
{
	char address[15] = "192.255.1.156.1";
	if(check_ip(address))
	{
		printf("Valid\n");
	}
	else
	{
		printf("Not valid\n");
	}
}
