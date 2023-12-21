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
int main() {
#if 0
//2d_array
    int *ptr;
    int row = 3,i;
    int column = 3;
    ptr = (int *)malloc((row*column)*sizeof(int));
    int *ptr1 = ptr;
    printf("Enter the values..\n");
    for(i=0;i<(row*column);i++)
    {
        scanf("%d",(ptr++));
    }
    printf("the values..\n");
    for(i=0;i<row;i++)
    {
    	int j;
    	for(j=0;j<column;j++)
    	{
			printf("%d",*(ptr1++));
		}
        printf("\n");
    } 
	free(ptr);
#endif
#if 0
//2d_array double pointer
	int **ptr;
	int row = 3,column = 3, count = 0,i,j;
	ptr = (int **)malloc(row*sizeof(int*));
	for(i=0;i<column;i++)
	{
		ptr[i] = (int*)malloc(column*sizeof(int));
	}
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			ptr[i][j] = count++;
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			printf("%d ",ptr[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<column;i++)
	{
		free(ptr[i]);
	}

#endif
#if 0
//sub mark
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
#endif
#if 0
//set/unset
	int num = 1<<18;
	printf("num = %d\n",num);
	int set = num|(1<<17);
	printf("set = %d\n",set);
	int unset = set&(~(1<<18));
	printf("unset = %d\n",unset);
#endif
#if 0
//little-big endian
	unsigned int num = 0x12345678;
	char *ptr = &num;
	printf("%x\n",*ptr);
	if(*ptr)
	{
		printf("Little Endian\n");
	}
	else
	{
		printf("Big Endian\n");
	}
	unsigned int fil = 0xff;
	int res = 0,mov = 24;
	while(num)
	{
		res|=(num&fil)<<mov;
		num>>=8;
		mov-=8;
	}
	printf("res = %x",res);
#endif
#if 0
//parity
	int num = 7;
	int parity = 0;
	while(num)
	{
		parity = !parity;
		num = num&(num-1);
	}
	if(parity==1)
	{
		printf("odd\n");
	}
	else
	{
		printf("even\n");
	}
#endif
#if 0
//reverse bits
	unsigned int num = 2147483648,res = 0;
	int i;
	for(i=31;i>=0,num;i--)
	{
		res|=(num&1)<<i;
		printf("i = %d\n",i);
		printf("num = %u\n",num);
		printf("res = %u\n",res);
		num>>=1;
		
	}
	printf("%u",res);
#endif
#if 0
//swap 7 and 8
	int n = 256;
	int res = 0;
	int fil = n&(1<<7);
	res = fil<<1;	
	fil = n&(1<<8);
	printf("fil = %d\n",fil);
	res|=fil>>1;
	printf("res = %d",res);	
#endif
#if 0
//validate ip address
	char address[15] = "192.255.1.156.1";
	if(check_ip(address))
	{
		printf("Valid\n");
	}
	else
	{
		printf("Not valid\n");
	}
#endif
#if 0
//no of 1's
	int num = 8624;
	int count = 0;
	while(num)
	{
		if(num&1)
		{
			count++;
		}
		num>>=1;
	}
	printf("count = %d\n",count);
#endif
#if 1
//toggle bits in a range
	int num = 253;
	int pos1 = 1;
	int pos2 = 4;
	int res = 0;
	while(pos1!=(pos2+1))
	{
		num = num^(1<<pos1);
		pos1++;
	}
	printf("%d",num);
#endif

    return 0;
}



/*
n = 5;
n = n&(n-1);
n = 5&4;

	101
	010
	000
	
	111
	110
	110	
	
	1000=>8
	0111=>7
	0000
	
	1010=>10	
	1001=>9
	1000
	
	0111
	0110
	0110
	
	0101=>5
	0100=>4&
	0100=>4
	0011=>3&
	0000
	
*/
