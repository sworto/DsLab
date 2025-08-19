#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int n,i,j,value,choice;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements for the given array: \n");
    for(i=0;i<n;i++)
    {
        printf("Enter the element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("********MENU********\n1.Insert\n2.Delete\n3.LinearSearch\n4.Traverse\n5.Exit\n");
    while(choice!=5&&choice<100&&choice<0)
    {
        printf("Enter the choice: ");
        scanf("%d",&choice);
        if(choice==1)
        {
            printf("Enter the index: ");
            scanf("%d",&j);
            printf("Enter the value: ");
            scanf("%d",&value);
            for(i=n-1;i>=j;i--)
            {
                arr[i+1]=arr[i];
            }
            arr[j]=value;
            n=n+1;
        }
        else if(choice==2)
        {
            printf("Enter the index:");
            scanf("%d",&j);
            for(i=j;i<n;i++)
            {
                arr[i+1]=arr[i];
            }
            n=n-1;
            printf("Enter the choice: ");
            scanf("%d",&choice);
        }
        else if(choice==3)
        {
            printf("Enter the element: ");
            scanf("%d",&value);
            j=1;
            for(i=0;i<n;i++)
            {
                if(arr[i]==value)
                {
                    printf("The element %d is present at index %d\n",value,i);
                    j=0;
                    break;
                }
            }
            if(j!=0)
            {
                printf("The element is not present in the array\n");
                break;
            }
        }
        else if(choice==4)
        {
            printf("Array: ");
            for(i=0;i<n;i++)
            {
                printf("%d ",arr[i]);
            }
            printf("\n");
        }
        else if(choice==5||choice<1||choice>5)
        {
            break;
        }
    }
    return 0;
}