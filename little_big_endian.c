//little-big endian
#include"header.h"
int main()
{
	unsigned int num = 0x12345678;
	char *ptr = &num;
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
}
