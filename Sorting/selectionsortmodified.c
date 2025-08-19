#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    //array generation
    srand(time(NULL));
    int n,i;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("The array:        [ ");
    for(i=0;i<n;i++)
    {
        arr[i]=rand()%100;
        printf("%d ",arr[i]);
    }
    printf("]\n");
    //sorting
    int placeholder;
    for(i=0;i<n;i++)
    {
        //instead of j=i use j=i+1. This ensures checking one less element.
        for(int j=i+1;j<n;j++)
        {
            //using a min variable to find the smallest element ensures running two statements only instead of three.
            //Also the assignment will not be instantaneous.
            if(arr[i]>=arr[j])
            {
                placeholder=arr[i];
                arr[i]=arr[j];
                arr[j]=placeholder;
            }
        }
    }
    //printing
    printf("The sorted array: [ ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("]\n");
    return 0;
}