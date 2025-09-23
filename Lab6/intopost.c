#include <stdio.h>
#define MAX 50
int stack[MAX];
int top=-1;
int main()
{
    char infix[MAX];
    char postfix[MAX];
    printf("Enter the expression: ");
    fgets(infix,MAX,stdin);
    int k=0;
    for(int i=0;infix[i]!='\0';i++)
    {
        if(infix[i]!='('||infix[i]!=')'||infix[i]!='+'||infix[i]!='-'||infix[i]!='/'||infix[i]!='*')
        {
            postfix[k];
            k++;
        }
        else if(infix[i]=='('||infix[i]==')'||infix[i]=='+'||infix[i]=='-'||infix[i]=='/'||infix[i]=='*')
        {
            if(infix[i]=='('||infix[i]==')')
            {
                if(infix[i]=='(')
                {
                    
                }
                else
                {

                }
            }

        }
        else
        {
            printf("Invalid string");
            return 0;
        }
    }
    return 0;
}