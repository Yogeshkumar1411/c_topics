/*
*Program: convert endianness using union
*Name: Yogeshkumar S
*Date: 27/12/2023
*/
#include<stdio.h>
union endianness
{
	unsigned int value;
	char bytes[4];
};
int main()
{
	union endianness convert;
	convert.value = 0x12345678;
	printf("before %x\n",convert.value);
	int i;
	for(i=0;i<2;i++)
	{
		char temp = convert.bytes[i];
		convert.bytes[i] = convert.bytes[3-i];
		convert.bytes[3-i] = temp;
	}
	printf("after %x\n",convert.value);
}
