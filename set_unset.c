/*
*Program: set and unset 17 and 18 bits, respectively
*Name: Yogeshkumar S
*Date: 20/12/2023
*/
#include"header.h"
int main()
{
	int num = 1<<18;
	printf("num = %d\n",num);
	int set = num|(1<<17);
	printf("set = %d\n",set);
	int unset = set&(~(1<<18));
	printf("unset = %d\n",unset);	
}
