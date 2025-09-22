#include <stdio.h>
#include <stdlib.h>
//Definition of the structure globally
struct node
{
    int value;
    struct node* next;
};
struct node* remove_node(struct node*,int);
struct node* add_node(struct node*,int);
int main()
{
    //Head pointer stores the value for the first node of the linked list.
    //Ptr traverses through the linked list
    struct node* head=NULL;
    struct node* ptr=NULL;
    int n,i;
    printf("Enter the size of the linked list: ");
    scanf("%d",&n);
    int size=n;
    //Creation of the linked list.
    for(i=1;i<=n;i++)
    {
        //Storing the address of the first node in head
        if(i==1) 
        {
            head=(struct node*)malloc(sizeof(struct node));
            ptr=head;
        }
        //subsequent nodes are stored in ptr->next;
        else
        {
            ptr->next=(struct node*)malloc(sizeof(struct node));
            ptr=ptr->next;
        }
    }
    //last next pointer will be initialised as NULL to stop the traversal
    ptr->next=NULL;
    //Initialisation of the value variables of the linked list.
    ptr=head;
    i=0;
    while(ptr)
    {
        ptr->value=i+1;
        ptr=ptr->next;
        i++;
    }
    //Traversal and display
    ptr=head;
    while(ptr)
    {
        printf("The linked list node number is %d and the value stored is %d.\n",ptr->value,ptr->value);
        ptr=ptr->next;
    }
    //Operation menu
    n=1;
    int k;
    printf("Enter the operation:\n1. Removal Of A Node\n2. Addition Of A Node\n");
    scanf("%d",&n);
    if(n==1)
    {
        printf("****Removal of a Node****\n");
        printf("Enter the node to be removed: ");
        scanf("%d",&k);
        if(k>size)
        {
            printf("Requested Index Larger than the List Size.\n");
            return 0;
        }
        else head=remove_node(head,k);
    }
    else if(n==2)
    {
        printf("****Addition of a new Node****\n");
        printf("Enter the position: ");
        scanf("%d",&k);
        if(k>size+1)
        {
            printf("The node will be added at the end of the linked list.\n");
        }
        head=add_node(head,k);
    }
    else
    {
        printf("The selected choice is not valid. Exiting the program.");
        return 0;
    }
    ptr=head;
    //Traversal and display of the linked list after the operation is done.
    i=1;
    while(ptr)
    {
        printf("The linked list node number is %d and the value stored is %d.\n",i,ptr->value);
        ptr=ptr->next;
        i++;
    }
    return 0;
}
//Removal of a Node.
struct node* remove_node(struct node* head,int n)
{
    struct node* ptr=head;
    int i=1;
    struct node* temp;
    if(ptr==NULL)
    {
        printf("Empty Linked List.\n");
        return head;
    }
    //Removal at the beginning.
    if(n==1)
    {
        head=ptr->next;
        free(ptr);
        return head;
    }
    while(ptr->next&&i!=n)
    {
        temp=ptr;
        ptr=ptr->next;
        i++;
    }
    if(ptr->next==NULL)
    {
        temp->next=NULL;
        free(ptr);
    }
    else
    {
        temp->next=ptr->next;
        free(ptr);
    }
    return head;
}
struct node* add_node(struct node* head,int n)
{
    struct node* ptr=head;
    struct node* temp=ptr;
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->value=999;
    int i=1;
    if(n==1)
    {
        newnode->next=head;
        head=newnode;
        return head;
    }
    while(ptr->next&&i!=n)
    {
        temp=ptr;
        ptr=ptr->next;
        i++;
    }
    temp->next=newnode;
    newnode->next=ptr;
    return head;
}
