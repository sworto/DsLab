#include <stdio.h>
#include <stdlib.h>
struct node
{
    int val;
    struct node* next;
};
struct node* dupe(struct node* head,int n)
{
    struct node* ptr;
    struct node* temp;
    int i,num,freq;
    ptr=head;
    while(ptr)
    {
        freq=0;
        temp=ptr;
        num=ptr->val;
        while(temp)
        {
            if(temp->val==num)
            {
                freq++;
            }
            temp=temp->next;
        }
        if(freq>1)
        {
            printf("The number %d is a duplicate.\n",num);
        }
        ptr=ptr->next;
    }
    return head;
}
int main()
{
    int n,i;
    struct node* head;
    struct node* ptr;
    struct node* temp;
    printf("Enter the size of the linked list: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i==1)
        {
            head=(struct node*)malloc(sizeof(struct node));
            ptr=head;
        }
        else
        {
            ptr->next=(struct node*)malloc(sizeof(struct node));
            ptr=ptr->next;
        }
    }
    ptr->next=NULL;
    i=1;
    ptr=head;
    while(ptr)
    {
        printf("Enter the value of the Linked List Node %d: ",i);
        scanf("%d",&ptr->val);
        ptr=ptr->next;
        i++;
    }
    i=1;
    while(ptr)
    {
        printf("The given node is %d and the value at the node is %d\n: ",i,ptr->val);
        i++;
        ptr=ptr->next;
    }
    ptr=head;
    printf("The Duplicate elements are: \n");
    head=dupe(head,n);
    return 0;
}