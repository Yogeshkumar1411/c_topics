/*
*Program: Main function doubly linked list fun_dll.c has all the fun definitions
*Name: Yogeshkumar S
*Date: 20/12/2023
*/
#include "header.h"
#include "fun_dll.c"

int main()
{
	add_at_last(5);
	add_at_last(6);
	add_at_last(7);
	add_at_last(8);
	add_at_last(9);
	print();
	printf("*********\n");
	add_at_beginning(4);
	print();
	printf("*********\n");
	del_last();
	print();
	printf("*********\n");
	del_beginning();
	print();
	printf("*********\n");
	rev_ll_print();
	//print();
	printf("*********\n");
	rev_ll();
	print();
	printf("*********\n");
}
