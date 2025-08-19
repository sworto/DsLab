#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *text=fopen("binarreeee.txt","w+");
    if(text==NULL)
    {
        perror("Failed to open or create the file.");
        return 1;
    }
    //input string
    int i;
    char messagebinary[400];
    int messagegray[400];
    printf("Enter the binary: ");
    fgets(messagebinary,sizeof(messagebinary),stdin);
    //Gray Code conversion.
    i=0;
    int k;
    while(messagebinary[i]!='\0')
    {
        if(messagebinary[i]=='n')
        {
            messagebinary[i]='\0';
        }
        for(k=0;k<8;k++)
        {
            if(k!=0)
            {
                messagegray[k+i]=(messagebinary[k+i]-'0')^(messagebinary[k+i-1]-'0');
            }
            else messagegray[k+i]=messagebinary[k+i]-'0';
        }
        i=i+8;
    }
    fprintf(text,"The message in gray is: ");
    for(i=0;messagebinary[i]!=0;i++)
    {
        fprintf(text,"%d",messagegray[i]);
    }
    return 0;
}