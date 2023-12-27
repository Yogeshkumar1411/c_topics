/*
*Program: Accessing fixed memory address 
*Name: Yogeshkumar S
*Date: 27/12/2023
*/
#include<stdio.h>
#include<stdint.h>
#define RW_FLAG 0x1FFF7800
int main()
{
	volatile uint32_t *flagAddress = NULL;
	uint32_t readData = 0;
	flagAddress = (volatile uint32_t *)RW_FLAG;
	*flagAddress = 20;
	readData = *flagAddress;
	printf("read_data = %d\n",readData);
}

