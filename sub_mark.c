/*
*Program: subject and mark display using dma, functions, etc.
*Name: Yogeshkumar S
*Date: 20/12/2023
*/
#include"header.h"
int prime(int num)
{
	int count = 0;
	int i;
	if(num==1||num==0)
	{
		count = 1;
	}
	for(i=2;i<num/2;i++)
	{
		if(num%i==0)
		{
			count = 1;
			break;
		}
	}
	if(count==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	
}
int main()
{
	int *mark;
	char **sub_name;
	int tot_sub;
	printf("Enter the tot_sub\n");
	scanf("%d",&tot_sub);
	sub_name = (char**)malloc(tot_sub*sizeof(char*));
	int i,sub_len;
	for(i=0;i<tot_sub;i++)
	{
		printf("Enter the sub_len\n");
		scanf("%d",&sub_len);
		sub_name[i] = (char*)malloc(sub_len*sizeof(char));
	}
	mark = (int*)malloc(tot_sub*sizeof(int));
	for(i=0;i<tot_sub;i++)
	{
		printf("Enter sub_name\n");
		scanf("%s",sub_name[i]);
		printf("Enter mark\n");
		scanf("%d",&mark[i]);
	}
	for(i=0;i<tot_sub;i++)
	{
		if(prime(mark[i]))
		{
			printf("%s %d(prime)\n",sub_name[i],mark[i]);
		}
		else
		{
			printf("%s %d(non_prime)\n",sub_name[i],mark[i]);
		}
		
	}
	for(i=0;i<tot_sub;i++)
	{
		free(sub_name[i]);
	}
	free(mark);
}
