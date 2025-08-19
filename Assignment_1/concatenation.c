#include <stdio.h>
#include <stdlib.h>
//Prototype Declaration of Concatenate Function. main() only contains array declaration and initialisation.
//Please skip to concatenate() for logic.
int concatenate(int*,int*,int,int);
int main()
{
    //Declaration and initialisation of the two arrays.
    int n1_02,n2_02;
    printf("Enter the size of the first array: ");
    scanf("%d",&n1_02);
    int *array1_02=malloc(n1_02*sizeof(int));
    for(int i_02=0;i_02<n1_02;i_02++)
    {
        printf("Enter the array element %d: ",i_02);
        scanf("%d",array1_02+i_02);
    }
    printf("Enter the size of the second array: ");
    scanf("%d",&n2_02);
    int *array2_02=malloc(n2_02*sizeof(int));
    for(int i_02=0;i_02<n2_02;i_02++)
    {
        printf("Enter the array element %d: ",i_02);
        scanf("%d",array2_02+i_02);
    }
    printf("Array 1: ");
    for(int i_02=0;i_02<n1_02;i_02++)
    {
        printf("%d ",*(array1_02+i_02));
    }
    printf("\nArray 2: ");
    for(int i_02=0;i_02<n2_02;i_02++)
    {
        printf("%d ",*(array2_02+i_02));
    }
    printf("\n");
    concatenate(array1_02,array2_02,n1_02,n2_02);
    return 0;
}
//The concatenate function merges both arrays and removes duplicate.
int concatenate(int* array1_02, int* array2_02, int n1_02, int n2_02)
{
    int i_02,j_02,k_02;
    //check_02 for similar values
    for(i_02=0;i_02<n1_02;i_02++)
    {
        for(j_02=0;j_02<n2_02;j_02++)
        {
            if(*(array1_02+i_02)==*(array2_02+j_02))
            {
                k_02=j_02;
                while(k_02<n2_02-1)
                {
                    *(array2_02+k_02)=*(array2_02+k_02+1);          //elimination of similar array elements from the second array.
                    k_02++;
                }
                n2_02--; ///decrement of array size_02 integer.
            }
        }
    }
    int size_02=n1_02+n2_02;
    int *array3_02=malloc(size_02*sizeof(int)); //declaration of an array of new size_02.
    for(i_02=0;i_02<size_02;i_02++)
    {
        if(i_02<n1_02)
        {
            *(array3_02+i_02)=*(array1_02+i_02);
        }
        else *(array3_02+i_02)=*(array2_02+i_02-n1_02);
    }
    printf("Array 3: ");
    for(i_02=0;i_02<size_02;i_02++)
    {
        printf("%d ",*(array3_02+i_02));
    }
    printf("\n");
    free(array1_02);
    free(array2_02);
    free(array3_02);
    return 0;
}