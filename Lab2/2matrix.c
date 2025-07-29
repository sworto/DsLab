#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int n,i,j;
    printf("Enter the size of the square matrix: ");
    scanf("%d",&n);
    int arr[n][n];
    int nonzero=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            arr[i][j]=rand()%10;
            if(arr[i][j]!=0)
            {
                nonzero=nonzero+1;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    //menu
    int choice;
    printf("****MENU****\n1.NonzeroElements\n2.UpperTriangularMatrix\n3.NonDiagElements\n");
    do
    {
        printf("Enter the choice: ");
        scanf("%d",&choice);
        if(choice==1)
        {
            printf("The number of nonzero elements for the matrix is: %d\n",nonzero);
        }
        else if(choice==2)
        {
            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                {
                    if(j>=i)
                    {
                        printf("%d ",arr[i][j]);
                    }
                    else printf("  ");
                }
                printf("\n");
            }
        }
        else if(choice==3)
        {
            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                {
                    if(j!=i)
                    {
                        printf("%d ",arr[i][j]);
                    }
                    else printf("  ");
                }
                printf("\n");
            }
        }
        else break;
    } while (choice>=1||choice<=3); 
    return 0;
}
