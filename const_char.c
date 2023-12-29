/*
*Program: char *p vs char s[]
*Name: Yogeshkumar S
*Date: 27/12/2023
*/
#include<stdio.h>
int main()
{
 	char *p = "hello";//constant pointer, cannot change anything
 	char s[] = "hello";//normal buffer
 	//p[0] = 'H';//segmentation fault
 	s[0] = 'H';
 	printf("s = %s\n",s);
 	printf("p = %s\n",p);
}
