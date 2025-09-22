#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int stack[SIZE];
int top=-1;
int push(int);
int pop();
int isempty();
int traversal();
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
			traversal();
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
	if(top==SIZE-1)
	{
		printf("Stack Overflow\n");
	}
	else
	{
		top++;
		stack[top]=value;
	}
	return 0;
}
int pop()
{
	if(top==-1)
	{
		printf("Stack Underflow\n");
	}
	else
	{
		printf("Popped: %d\n",stack[top]);
		top--;
	}
	return 0;
}
int isempty()
{
	if(top==-1)
	{
		printf("Stack is Empty\n");
	}
	else
	{
		printf("Stack is not Empty\n");
	}
	return 0;
}
int traversal()
{
	if(top==-1)
	{
		printf("Stack is Empty\n");
	}
	else
	{
		int i;
		for(i=0;i<=top;i++)
		{
			printf("%d|",stack[i]);
		}
		printf("\n");
	}
	return 0;
}