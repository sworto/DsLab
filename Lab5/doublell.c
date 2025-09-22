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
node* temp=NULL;
int addnode(int,int);
int removenode(int);
int main()
{
	//Linked List Creation.
	int n,i;
	int value;
	printf("Enter the size of the linked list: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i==1)
		{
			head=(node*)malloc(sizeof(node));
			head->val=i;
			ptr=head;
			ptr->prev=NULL;
		}
		else
		{
			ptr->next=(node*)malloc(sizeof(node));
			temp=ptr;
			ptr=ptr->next;
			ptr->val=i;
			ptr->prev=temp;
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
			printf("Enter the node number: ");
			scanf("%d",&input);
			printf("Enter the value: ");
			scanf("%d",&value);
			addnode(input,value);
		}
		else if(sel==2)
		{
			printf("Enter the node number: ");
			scanf("%d",&input);
			removenode(input);
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
int addnode(int input, int value)
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
			else if(ptr->next==NULL)
			{
				ptr->next=newnode;
				newnode->next=NULL;
				newnode->prev=ptr;
			}
			else printf("Enter a valid value.\n");
		}
	}
	return 0;
}
int removenode(int input)
{
	ptr=head;
	int i=1;
	if(head==NULL)
	{
		printf("Empty List\n");
		return 0;
	}
	if(i==1)
	{
		ptr=head;
		head=head->next;
		head->prev=NULL;
		free(ptr);
	}
	else
	{
		while(ptr->next&&i<input)
		{
			temp=ptr;
			ptr=ptr->next;
			i++;
		}
		if(i==input)
		{
			if(ptr->next)
			{
				temp->next=ptr->next;
				ptr->next->prev=temp;
				free(ptr);
			}
			else
			{
				temp->next=NULL;
				free(ptr);
			}	
		}
	}
	return 0;
}