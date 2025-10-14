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
    int choice=0;
    int value;
    printf("**MENU**\n1. Enqueue\n2. Dequeue\n3. IsEmpty\n4. Traverse\n5. Exit\n");
    beginning:
    printf("Enter the choice: ");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1:
        {
            printf("Enter the value: ");
            scanf("%d",&value);
            if(head==NULL)
            {
                head=(node*)malloc(sizeof(node));
                head->val=value;
                head->next=NULL;
            }
            else
            {
                ptr=head;
                while(ptr->next)
                {
                    ptr=ptr->next;
                }
                node* temp=malloc(sizeof(node));
                temp->val=value;
                temp->next=NULL;
                ptr->next=temp;
            }
            goto beginning;
        }
        case 2:
        {
            ptr=head;
            if(head==NULL||head->next==NULL)
            {
                if(head==NULL)
                {
                    printf("Queue Already Empty\n");
                }
                else
                {
                    head=NULL;
                    free(head);
                }
            }
            else
            {
                ptr=head;
                while(ptr->next->next)
                {
                    ptr=ptr->next;
                }
                free(ptr->next);
                ptr->next=NULL;
            }
            goto beginning;
        }
        case 3:
        {
            if(head==NULL)
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
            goto beginning;
        }
        case 4:
        {
            ptr=head;
            if(head=NULL)
            {
                printf("Empty Queue\n");
            }
            else
            {
                while(ptr)
                {
                    printf("%d->",ptr->val);
                    ptr=ptr->next;
                }
                printf("\n");
            }
            goto beginning;
        }
        default:
        {
            printf("Exiting...\n");
            return 0;
        }
    }
    return 0;
}