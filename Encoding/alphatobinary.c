#include <stdio.h>
#include <string.h>
int main()
{
    //Filecreation
    FILE *text=fopen("output.txt","w+");
    if(text==NULL)
    {
        perror("Failed to open or create the file.");
        return 1;
    }
    //Input
    char message[50];
    unsigned int messagedecimal[50];
    printf("Enter the message: ");
    fgets(message,sizeof(message),stdin);
    message[strcspn(message, "\n")]='\0';
    fprintf(text,"Message: ");
    fputs(message,text);
    fprintf(text,"\n");
    //Input and Storing as ASCII decimal.
    int i;
    for(i=0;message[i]!='\0';i++)
    {
        messagedecimal[i]=message[i];
    }
    fprintf(text,"ASCII: ");
    i=0;
    while(message[i]!='\0')
    {
        fprintf(text,"%u ",messagedecimal[i]);
        i++;
    }
    //Converting it to a set of Binary Strings.
    char messagebinary[50*8+1];
    i=0;
    int k,j;
    j=0;
    while(message[i]!='\0')
    {
        for(k=0;k<8;k++)
        {
            messagebinary[j+k]=(messagedecimal[i]%2)+'0';
            messagedecimal[i]=messagedecimal[i]/2;
        }
        j=j+8;
        i++;
    }
    messagebinary[j]='\0';
    //printing the binary.
    fprintf(text,"Binary: ");
    fputs(messagebinary,text);
    return 0;
}