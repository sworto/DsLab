#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char stack[50];
int top_02=-1;
void push(char c)
{
    if(top_02==50-1)
    {
        printf("StackOverFlow\n");
        return;
    }
    else
    {
        top_02++;
        stack[top_02]=c;
    }
}
char pop()
{
    if(top_02<=-1)
    {
        printf("StackUnderFlow\n");
        return 0;
    }
    else
    {
        top_02--;
        return stack[top_02+1];
    }
}
int isempty()
{
    if(top_02==-1)
    {
        return 1;
    }
    else return 0;
}
int main()
{
    char string_02[50];
    printf("Enter the expression: ");
    gets(string_02);
    for(int i=0;i<=strlen(string_02)-1;i++)
    {
        if(string_02[i]=='['||string_02[i]=='('||string_02[i]=='{')
        {
            push(string_02[i]);
        }
        else if((string_02[i]==']'&&stack[top_02]=='[')
                ||(string_02[i]==')'&&stack[top_02]=='(')
                ||(string_02[i]=='}'&&stack[top_02]=='{'))
        {
            pop();
        }
    }
    if(isempty()==1)
    {
        printf("Balanced Equation\n");
    }
    else if(isempty()==0) printf("Unbalanced Equation\n");
//Determining the number of insertion and deletions required to make it balanced: 
    int  count_02=0;
    char value;
    if(top_02!=-1)
    {
        printf("The following Equation needs the following brackets closed for the following characters to be complete: ");
        while(top_02>-1)
        {
            value=pop();
            printf("%c ",value);
             count_02++;
        }
    }
    return 0;
}