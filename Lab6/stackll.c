#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
	int val;
	struct node* next;
}node;
node* top=NULL;
int push(int);
int pop();
int isempty();
int traverse();
int main()
{
	int sel,value;
	printf("***MENU***\n1.Push\n2.Pop\n3.IsEmpty\n4.Traverse\n5.Exit\n");
	menu:
	printf("Enter the choice: ");
	scanf("%d",&sel);
	if(sel>=1 && sel<=5)
	{
		if(sel==1)
		{
			printf("Enter the value: ");
			scanf("%d",&value);
			push(value);
		}
		else if(sel==2)
		{
			pop();
		}
		else if(sel==3)
		{
			isempty();
		}
		else if(sel==4)
		{
			traverse();
		}
		else if(sel==5)
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
int push(int value)
{
	node* newnode=(node*)malloc(sizeof(node));
	if(newnode==NULL)
	{
		printf("Memory Allocation Failed\n");
		return 0;
	}
	newnode->val=value;
	newnode->next=top;
	top=newnode;
	return 0;
}
int pop()
{
	if(top==NULL)
	{
		printf("Stack Underflow\n");
	}
	else
	{
		node* temp=top;
		printf("Popped: %d\n",temp->val);
		top=top->next;
		free(temp);
	}
	return 0;
}
int isempty()
{
	if(top==NULL)
	{
		printf("Stack is Empty\n");
	}
	else
	{
		printf("Stack is not Empty\n");
	}
	return 0;
}
int traverse()
{
	if(top==NULL)
	{
		printf("Stack is Empty\n");
	}
	else
	{
		node* ptr=top;
		while(ptr)
		{
			printf("%d<-",ptr->val);
			ptr=ptr->next;
		}
        printf("\n");
	}
	return 0;
}