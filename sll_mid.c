/*
*Program: single linked list: mid node finding
*Name: Yogeshkumar S
*Date: 21/12/2023
*/
#include"header.h"
struct node
{
	int data;
	struct node *next;
};

struct node *head;

void add_last(int data)
{
	struct node *ptr = malloc(sizeof(struct node));
	ptr->data = data;
	ptr->next = NULL;
	
	if(head==NULL)
	{
		head = ptr;
	}
	else
	{
		struct node *p = head;
		while(p->next!=NULL)
		{
			p=p->next;
		}
		p->next = ptr;
		
	}
}
////////////////////////////////////
void print()
{
	struct node *ptr = head;
	while(ptr)
	{
		printf("data = %d\n",ptr->data);
		ptr = ptr->next;
	}
}
///////////////////////////////////////
void find_mid()
{
/*	struct node *ptr = head;
	int count = 0;
	while(ptr)
	{
		count++;
		ptr=ptr->next;
	}
	int i;
	ptr = head;
	for(i=0;i<count/2;i++)
	{
		ptr = ptr->next;
	}
	
	printf("mid_data  = %d\n",ptr->data);*/
	struct node *ptr = head; 
    struct node *ptr1 = head; 
 
    if (head!=NULL) 
    { 
        while (ptr1 != NULL && ptr1->next != NULL) 
        { 
            ptr1 = ptr1->next->next; 
            ptr = ptr->next; 
        } 
        printf("mid data = %d\n",ptr->data); 
    } 
}

int main()
{
	add_last(10);
	add_last(15);
	add_last(20);
	add_last(25);
	add_last(30);
	print();
	printf("*******\n");
	find_mid();
	
	
	
	free(head);
	head = NULL;
	
}

