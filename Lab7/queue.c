#include <stdio.h>
int main()
{
    int size;
    int front=0;
    int rear=-1;
    int val;
    printf("Enter the size of the queue: ");
    scanf("%d",&size);
    int queue[size];
    int choice=0;
    printf("**MENU**\n1. Enqueue\n2. Dequeue\n3. IsEmpty\n4. IsFull\n5.Traverse\n6. Exit\n");
    beginning:
    printf("Enter the choice: ");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1:
        {
            printf("Enter the value: ");
            scanf("%d",&val);
            if(rear<size-1)
            {
                rear++;
                queue[rear]=val;
            }
            else
            {
                printf("Full Queue Cant Enqueue\n");
            }
            goto beginning;
        }
        case 2:
        {
            if(rear==0||rear==-1)
            {
                if(rear==0)
                {
                    rear--;
                }
                else
                {
                    printf("Empty Queue Cant Deque.\n");
                }
            }
            else
            {
                for(int i=0;i<rear;i++)
                {
                    queue[i]=queue[i+1];
                }
                rear--;
            }
            goto beginning;
        }
        case 3:
        {
            if(rear==-1)
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
            if(rear==size-1)
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
            goto beginning;
        }
        case 5:
        {
            if(rear!=-1)
            {
                for(int i=0;i<=rear;i++)
                {
                    printf("%d ",queue[i]);
                }
                printf("\n");
            }
            else
            {
                printf("Empty Queue\n");
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