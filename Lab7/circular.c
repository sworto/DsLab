#include <stdio.h>
int main()
{
    int size;
    int front=-1;
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
            if((front==0 && rear==size-1) || ((rear+1)%size==front))
            {
                printf("Full Queue Cant Enqueue\n");
            }
            else
            {
                if(front==-1)
                {
                    front=0;
                }
                rear=(rear+1)%size;
                queue[rear]=val;
            }
            goto beginning;
        }
        case 2:
        {
            if(front==-1)
            {
                printf("Empty Queue Cant Deque.\n");
            }
            else if(front==rear)
            {
                front=-1;
                rear=-1;
            }
            else
            {
                front=(front+1)%size;
            }
            goto beginning;
        }
        case 3:
        {
            if(front==-1)
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
            if((front==0 && rear==size-1) || ((rear+1)%size==front))
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
            if(front==-1)
            {
                printf("Empty Queue\n");
            }
            else
            {
                int i=front;
                while(1)
                {
                    printf("%d ",queue[i]);
                    if(i==rear)
                    {
                        break;
                    }
                    i=(i+1)%size;
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
