/*
*Program: pointer to pointer
*Name: Yogeshkumar S
*Date: 27/12/2023
*/
#include<stdio.h>
int main()
{
	int num = 10;
	int *ptr_1 = &num;
	int **ptr_2 = &ptr_1;
	**ptr_2 = 100;
	printf("num = %d\n",num);
}

