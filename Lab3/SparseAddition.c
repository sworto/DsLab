#include <stdio.h>
int main()
{
    int matrix1[5][3]={{4,5,4},{0,3,30},{1,1,10},{2,3,40},{3,4,21}};
    int matrix2[5][3]={{4,5,4},{0,2,65},{1,1,12},{2,3,45},{3,3,71}};
    int i,j;
    printf("The first Matrix: \n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",matrix1[i][j]);
        }
        printf("\n");
    }
    printf("The second Matrix: \n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",matrix2[i][j]);
        }
        printf("\n");
    }
    return 0;
}
