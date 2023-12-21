#include"header.h"
int main()
{
	int n = 0x12345678;
	char *ptr = &n;
	int i = 3;
	int j = 0;
	while(j<2)
	{
		char temp = *(ptr+j);
		*(ptr+j)	= *(ptr+i);
		*(ptr+i) = temp;
		i--;
		j++;
	}
	
	printf("%x",n);
}
