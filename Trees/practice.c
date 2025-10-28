#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
	int val;
	struct node* left;
	struct node* right;
}leaf;
int addelement(leaf** head,int key)
{
	leaf* newnode;
	if(head==NULL)
	{
		(*head)=(leaf*)malloc(sizeof(leaf));
		(*head)->val=key;
		return 0;
	}
	else
	{
		if(key==(*head)->val)
		{
			printf("Element Already Present!\n");
			return 1;
		}
		if((key)>(*head)->val)
		{
			if(&(*head)->right==NULL)
			{
				newnode=(leaf*)malloc(sizeof(leaf));
				newnode->val=key;
				newnode->left=NULL;
				newnode->right=NULL;
				(*head)->right=newnode;
			}
			else addelement(&(*head)->right,key);
		}
		else
		{
			if(&(*head)->left==NULL)
			{
				newnode=(leaf*)malloc(sizeof(leaf));
				newnode->val=key;
				newnode->left=NULL;
				newnode->right=NULL;
				(*head)->left=newnode;
			}
			else addelement(&(*head)->left,key);
		}
	}
}
int main()
{
	int input,key;
	leaf* head=NULL;
	leaf* ptr=NULL;
	printf("**MENU**\n1. Add Element\n2. Remove Element\n3. Preorder\n4. Inorder\n5. Postorder\n6. Exit\n");
	while(1)
	{
		printf("Enter the Choice: ");
		scanf("%d",&input);
		switch(input)
		{
			case 1:
			{
				printf("Enter value: ");
				scanf("%d",&key);
				addelement(&head,key);
				break;
			}
			case 2:
			case 3:
			case 4:
			{
				inorder(&head);
				break;
			}
			case 5:
			case 6:
			{
				printf("Exiting...\n");
				return 0;
			}
			default:
			{
				printf("Enter valid value.\n");
				break;
			}
		}
	}
}