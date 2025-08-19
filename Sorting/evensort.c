#include <stdio.h>
int main()
{
    int array[12]={9,10,1,21,3,19,15,2,77,34,5,40};
    printf("The given array: ");
    for(int i=0;i<12;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
    //Even Sorting:
    int placeholder;
    for(int i=0;i<12;i=i+2)
    {
        for(int j=i;j<12;j=j+2)
        {
            if(array[i]>array[j])
            {
                placeholder=array[j];
                array[j]=array[i];
                array[i]=placeholder;
            }
        }
    }
    printf("Even sorted array: ");
    for(int i=0;i<12;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
    return 0;
}