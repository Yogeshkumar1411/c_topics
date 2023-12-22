/*
*Program: declaration of strucure
*Name: Yogeshkumar S
*Date: 21/12/2023
*/
struct node
{
	int data;
	struct node *next;
	struct node *prev;
};
struct node *head;

void add_at_last(int data);
void print();
void add_at_beginning(int data);
void del_last();
void del_beginning();
void rev_ll_print();
void rev_ll();
