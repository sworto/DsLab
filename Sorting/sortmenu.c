#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int array[size];
    printf("Array: ");
    for(int i=0;i<size;i++)
    {
        array[i]=rand()%10;
        printf("%d ",array[i]);
    }
    printf("\n");
    int selection;
    printf("****SORTING MENU****\n1. Insertion Sort\n2. Bubble Sort\n");
    while(1)
    {
        printf("Enter the choice: ");
        scanf("%d",&selection);
        int j,temp;
        switch(selection)
        {
            case 1:
            {
                printf("Sorting Begin:\n");
                for(int i=1;i<size;i++)
                {
                    j=i;
                    while(array[j-1]>array[j]&&j>0)
                    {
                        temp=array[j];
                        array[j]=array[j-1];
                        array[j-1]=temp;
                        j--;
                    }
                    for(int k=0;k<size;k++)
                    {
                        printf("%d ",array[k]);
                    }
                    printf("\n");
                }
                printf("\n");
                break;
            }
            case 2:
            {
                printf("Sorting Begin:\n");
                for(int i=0;i<size-1;i++)
                {
                    for(int j=0;j<size-1-i;j++)
                    {
                        if(array[j]>array[j+1])
                        {
                            temp=array[j];
                            array[j]=array[j+1];
                            array[j+1]=temp;
                        }
                    }
                    for(int k=0;k<size;k++)
                    {
                        printf("%d ",array[k]);
                    }
                    printf("\n");
                }
                printf("\n");
                break;  
            }
            default: printf("Exiting the program...\n"); return 0;
        }

    }
    return 0;
}