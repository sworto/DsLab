#include <stdio.h>
#include <stdlib.h>
int rotate(int*,int,int);
int main()
{
    int i_02,n_02,k_02;
    printf("Enter the size of the array: ");
    scanf("%d",&n_02);
    int *array_02=malloc(n_02*sizeof(int));
    for(i_02=0;i_02<n_02;i_02++)
    {
        printf("Enter the element %d: ",i_02);
        scanf("%d",array_02+i_02);
    }
    printf("Enter the number of positions to rotate by: ");
    scanf("%d",&k_02);
    rotate(array_02,n_02,k_02);
}
int rotate(int* array_02, int n_02,int k_02)
{
    int i_02,j_02,placeholder_02;
    if(k_02==0)
    {
        printf("The array_02 was not rotated.");
        return 0;
    }
    for(i_02=0;i_02<k_02;i_02++)
    {
        placeholder_02=*(array_02+n_02-1);
        for(j_02=n_02-1;j_02>0;j_02--)
        {
            *(array_02+j_02)=*(array_02+j_02-1);
        }
        *array_02=placeholder_02;
    }
    printf("The rotated array is: ");
    for(i_02=0;i_02<n_02;i_02++)
    {
        printf("%d ",*(array_02+i_02));
    }
    printf("\n");
    return 0;
}