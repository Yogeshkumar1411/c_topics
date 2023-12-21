//set/unset
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
