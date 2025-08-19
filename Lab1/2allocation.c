#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j,n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int* arr=(int*)malloc(n*sizeof(int));
    int sum=0;
    char state;
    for(i=0;i<n;i++)
    {
        state='P';
        printf("Enter the value of the element%d: ",i);
        scanf("%d",&arr[i]);
        for(j=2;j<arr[i];j++)
        {
            if(arr[i]%j==0||(arr[i]<2&&arr[i]>0))
            {
                state='C';
                break;
            }
        }
        if(state=='P')
        {
            sum=sum+arr[i];
        }
    }
    printf("The following array is: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("The sum of all the prime numbers in the given array is: %d",sum);
    free(arr);
    arr=NULL;
    return 0;
}