#include <stdio.h>
int main ()
{
    //Initialising A Sparse Matrix
    printf("The following Sparse Matrix has to be converted into a 3 Tuple: \n");
    int sparse[4][5]={{0,0,33,0,0},{0,17,0,0,0},{0,0,0,46,0},{0,0,0,0,51}};
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<5;j++)
        {
            printf("%d ",sparse[i][j]);
        }
        printf("\n");
    }
    //Making a New 3 tuple Matrix
    int compact[5][3];
    compact[0][0]=4;
    compact[0][1]=5;
    compact[0][2]=4;
    int i,j;
    int k,l;
    k=1;
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            if(sparse[i][j]!=0)
            {
                l=0;
                compact[k][l]=i;
                l=l+1;
                compact[k][l]=j;
                l=l+1;
                compact[k][l]=sparse[i][j];
                k=k+1;
            }
        }
    }
    printf("The compact matrix is: \n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",compact[i][j]);
        }
        printf("\n");
    }
    //Transpose of compact
    int placeholder;
    for(i=0;i<5;i++)
    {
        placeholder=compact[i][0];
        compact[i][0]=compact[i][1];
        compact[i][1]=placeholder;
    }
    printf("Transpose: \n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",compact[i][j]);
        }
        printf("\n");
    }
    //Sorting
    int placeholder2,placeholder3;
    for(i=1;i<5;i++)
    {
        for(j=i;j<5;j++)
        {
            if(compact[i][0]>compact[j][0])
            {
                //The whole row is exchanged upon discovering a larger element.
                placeholder=compact[i][0];
                compact[i][0]=compact[j][0];
                compact[j][0]=placeholder;
                placeholder2=compact[i][1];
                compact[i][1]=compact[j][1];
                compact[j][1]=placeholder2;
                placeholder3=compact[i][2];
                compact[i][2]=compact[j][2];
                compact[j][2]=placeholder3;
            }
        }
    }
    //Printing the Sorted Matrix:
    printf("Sorted Transposed Matrix Tuple: \n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",compact[i][j]);
        }
        printf("\n");
    }
    //Transpose of matrix
    int transpose[5][4]={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
    for(i=1;i<5;i++)
    {
        transpose[compact[i][0]][compact[i][1]]=compact[i][2];
    }
    printf("Transpose Matrix: \n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}