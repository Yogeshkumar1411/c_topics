/*
*Program: swap 7th and 8th bits in a given number
*Name: Yogeshkumar S
*Date: 20/12/2023
*/
#include"header.h"
int main()
{
	int n = 256;
	int res = 0;
	int fil = n&(1<<7);
	res = fil<<1;	
	fil = n&(1<<8);
	printf("fil = %d\n",fil);
	res|=fil>>1;
	printf("res = %d",res);	
}
