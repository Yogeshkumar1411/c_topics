//parity
#include"header.h"
int main()
{
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
}
