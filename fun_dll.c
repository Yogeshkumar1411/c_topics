/*
*Program: function definitions
*Name: Yogeshkumar S
*Date: 21/12/2023
*/
#include "struct_node.h"
void add_at_last(int data)
{
	struct node *ptr = malloc(sizeof(struct node));
	ptr->data = data;
	ptr->next=NULL;
	ptr->prev=NULL;
	if(head==NULL)
	{

		head=ptr;
	}
	else
	{
		struct node *p = head;
		while(p->next!=NULL)
		{
			p=p->next;
		}
		
		p->next=ptr;
		ptr->prev = p;
	}
}
////////////////////////////////////////////////////////////
void print()
{
	struct node *ptr = head;
	while(ptr)
	{
		printf("Data = %d\n",ptr->data);
		ptr=ptr->next;
	}
}
////////////////////////////////////////////////////
void add_at_beginning(int data)
{
	struct node *ptr = malloc(sizeof(struct node));
	ptr->data = data;
	ptr->next = NULL;
	ptr->prev = NULL;
	
	ptr->next = head;
	head->prev = ptr;
	
	
	head = ptr;
}
//////////////////////////////////////////////////
void del_last()
{
	struct node *ptr = head;
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
	}
	ptr->prev->next=NULL;
	free(ptr);
	ptr=NULL;
}
///////////////////////////////////////////////////
void del_beginning()
{
	struct node *ptr = head;
	head = ptr->next;
	head->prev = NULL;
	free(ptr);
	ptr = NULL;
}
//////////////////////////////////////////////////
void rev_ll_print()
{
	struct node *ptr = head;
	while(ptr->next!=NULL)
	{
		ptr = ptr->next;		
	}
	while(ptr)
	{
		printf("rev_data = %d\n",ptr->data);
		ptr=ptr->prev;
	}
}
/////////////////////////////////////////////////////
void rev_ll()
{
	struct node *ptr = head,*ptr1;
	while(ptr!=NULL)
	{
		ptr1 = ptr->prev;
		ptr->prev = ptr->next;
		ptr->next = ptr1;
		ptr = ptr->prev;
	}
	
	if(ptr1!=NULL)
	{
		head = ptr1->prev;		
	}
}
