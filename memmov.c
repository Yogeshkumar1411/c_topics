/*
*Program: copy data, when memory overlapping
*Name: Yogeshkumar S
*Date: 27/12/2023
*/
#include<stdio.h>
#include<string.h>
void copyData(void *dest, const void *src, int size)
{
	//printf("%d",size);
	char *temp = (char *)malloc(size*sizeof(char));
	char *dest1 = (char*)dest;
	const char *src1 = (char *)src;
	int i;
	for(i=0;i<size;i++)
	{
		temp[i] = src1[i];
	}
	temp[i] = '\0';
	for(i=0;i<size;i++)
	{
		dest1[i] = temp[i];
	}
	dest1[i] = '\0';
	free(temp);
}

int main()
{
	const char src[25] = "Mirafra Technologies";
	char dest[20] = {'\0'};
	copyData(dest,src,strlen(src));
	printf("dest = %s\n",dest);
}
