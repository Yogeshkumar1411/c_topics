/*
*Program: size of structure without sizeof
*Name: Yogeshkumar S
*Date: 27/12/2023
*/
#include<stdio.h>

struct employee
{
	int id;
	char name[20];
	char dept[15];
	int level;
};
int main()
{
	struct employee em_1;
	struct employee *ptr = &em_1;
	struct employee *ptr_next = ptr+1;
	int size = (char*)ptr_next-(char*)ptr;
	printf("size = %d\n",size);
}
