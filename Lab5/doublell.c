#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
	int val;
	struct node* prev;
	struct node* next;
}node;
node* head=NULL;
node* ptr=NULL;
int addnode(int);
int removenode(int);
int main()
{
	//Linked List Creation.
	int n,i;
	printf("Enter the size of the linked list: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i==1)
		{
			head=(node*)malloc(sizeof(node));
			head->val=i;
			ptr=head;
		}
		else
		{
			ptr->next=(node*)malloc(sizeof(node));
			ptr=ptr->next;
			ptr->val=i;
		}
	}
	ptr->next=NULL;
	ptr=head;
	//Menu
	int sel,input;
	printf("***MENU***\n1.Adding a Node.\n2.Removal of a Node.\n3.Traversal.\n4.Exit.\n");
	menu:
	printf("Enter the choice:");
	scanf("%d",&sel);
	if(sel>=1&&sel<=4)
	{
		if(sel==1)
		{
			printf("Enter the node number");
			scanf("%d",&input);
			addnode(input);

		}
		else if(sel==2)
		{
			printf("Enter the node number: ");
			scanf("%d",&input);
		}
		else if(sel==3)
		{
			ptr=head;
			while(ptr)
			{
				printf("%d->",ptr->val);
				ptr=ptr->next;
			}
			printf("\n");
		}
		else if(sel==4)
		{
			printf("Exiting..\n");
			return 0;
		}
		goto menu;
	}
	else
	{
		printf("Enter a valid value.\n");
		goto menu;
	}
	return 0;
}
int addnode(int input)
{
	node* newnode=(node*)malloc(sizeof(node));
	int i=1;
	ptr=head;
	if(head==NULL)
	{
		printf("Empty List.\n");
	}
	else
	{
		while(ptr->next&&i<input)
		{
			ptr=ptr->next;
			i++;
		}
		if(i==input)
		{
			if(ptr->next)
			{
				ptr->next->prev=newnode;
				newnode->next=ptr->next;
				newnode->prev=ptr;
				ptr->next=newnode;
			}
			else
			{
				ptr->next=newnode;
				newnode->next=NULL;
				newnode->prev=ptr;
			}
		}
	}
	return 0;
}
int removenode(int input)
{
	
}