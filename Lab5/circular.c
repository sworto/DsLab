#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int val;
    struct node* next;
}node;
node* head=NULL;
node* ptr=NULL;
int main()
{
    int n;
    printf("Enter the size of the circular linked list: ");
    scanf("%d",&n);
    int i;
    for(i=1;i<=n;i++)
    {
        if(i==1)
        {
            head=(node*)malloc(sizeof(node));
            ptr=head;
            ptr->val=i;
        }
        else
        {
            ptr->next=(node*)malloc(sizeof(node));
            ptr=ptr->next;
            ptr->val=i;
        }
    }
    ptr->next=head;
    ptr=head;
    //Traversal
    do
    {
        printf("%d->",ptr->val);
        ptr=ptr->next;
    }while(ptr!=head);
    return 0;
}