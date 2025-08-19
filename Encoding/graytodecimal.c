#include <stdio.h>
#include <math.h>
int main()
{
    FILE *fptr=fopen("decimalconv.txt","w+");
    if(fptr==NULL)
    {
        printf("Error Opening File");
        return 1;
    }
    char gray[400];
    char binary[400];
    int i,j;
    printf("Enter the gray code: ");
    fgets(gray,sizeof(gray),stdin);
    for(i=0;gray[i]!='\0';i++)
    {
        if(i%8==0)
        {
            binary[i]=gray[i]-'0';
        }
        else
        {
            binary[i]=((int)(binary[i-1]-'0'))^gray[i];
        }
    }
    int decimal[50];
    for(i=0;i<50;i++)
    {
        decimal[i]=0;
    }
    binary[i]='\0';
    fprintf(fptr,"The Binary To Gray: ");
    fprintf(fptr,binary);
    for(i=0;binary[i]!='\0';i++)
    {
        for(i=0;binary[i]!='\0';i++)
        {
            for(j=7;j>=0;j--)
            {
                binary[i+j]=binary[i+j]*pow(2,j);
                decimal[i]=decimal[i]+(binary[i+j]+'0');
            }
        }
    }
    decimal[i]=binary[i];
    fprintf(fptr,"\n");
    fprintf(fptr,"The Decimal Code: ");
    for(i=0;decimal[i]!='\0';i++)
    {
        fprintf(fptr,decimal[i]+'0');
    }
    return 0;
}