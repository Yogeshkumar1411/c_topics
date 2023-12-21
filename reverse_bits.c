//reverse bits
#include"header.h"
int main()
{
	unsigned int num = 10,res = 0;
	int i;
	for(i=31;i>=0,num;i--)
	{
		res|=(num&1)<<i;
		num>>=1;
		
	}
	printf("%u",res);
}
