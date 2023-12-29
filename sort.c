/*
*Program: Sorting techniques
*Name: Yogeshkumar S
*Date: 27/12/2023
*/
#include<stdio.h>
#define BUBBLE 1
#define SELECTION 2
#define INSERTION 3
#define QUICK 4
#define MERGE 5

void print(int *arr,int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}

void bubble_sort(int *arr,int size)
{
	int i,j;
	for(i=0;i<size-1;i++)
	{
		int flag = 0;
		for(j=0;j<size-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				flag = 1;
			}
			if(flag==0)
			{
				break;
			}
		}
	}
	print(arr,size);
}
//////////////////////////////////////
void selection_sort(int *arr,int size)
{	
	int i,j;
	for(i=0;i<size-1;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[i]>arr[j])
			{
				int temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
	print(arr,size);
}
/////////////////////////////////
void insertion_sort(int *arr,int size)
{
	int i,j,key;
	for(i=1;i<size;i++)
	{
		key = arr[i];
		j = i-1;
		while((j>=0)&&(arr[j]>key))
		{
			arr[j+1] = arr[j];
			j = j-1;			
		}
		arr[j+1] = key;
	}
	print(arr,size); 
}
////////////////////////////////////
int partition(int *arr, int low, int high)
{
	int pivot = arr[high];  
    int i = (low - 1); 
  	int j;
  	for(j=low;j<=high;j++)
  	{
  		if(arr[j]<pivot)
  		{
  			i++;
  			int temp = arr[i];
  			arr[i] = arr[j];
  			arr[j] = temp;
		}
	}
	int temp = arr[i+1];
	arr[i+1] = arr[high];
	arr[high] = temp;
	return (i+1);
}
void quickSort(int *arr,int low,int high)
{
	if(low<high)
	{
		int pi = partition(arr,low,high);
		quickSort(arr, low, pi - 1);  
        quickSort(arr, pi + 1, high); 
	}
	
}

int main()
{
	int arr[] = {10,2,7,3,5,0};
	int size = sizeof(arr)/sizeof(int);
	int type;
	printf("1. Bubble\n2. Selection\n3. Insertion\n4. Quick\n5. Merge\n");
	scanf("%d",&type);
	switch(type)
	{
		case BUBBLE:
			printf("Bubble sort\n");
			bubble_sort(arr,size);
			break;
		case SELECTION:
			printf("Selection sort\n");
			selection_sort(arr,size);
			break;
		case INSERTION:
			printf("Insertion sort\n");
			insertion_sort(arr,size);
			break;
		case QUICK:
			printf("Quick sort\n");
			quickSort(arr,0, size-1); 
			print(arr,size);
			break;
		case MERGE:
			printf("Merge sort\n");
			break;	
		default:
			printf("Invalid\n");
			break;	
				
	}
}
