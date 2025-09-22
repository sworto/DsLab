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
int main()
{
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
	while(ptr)
	{
		printf("%d->",ptr->val);
		ptr=ptr->next;
	}
	return 0;
}