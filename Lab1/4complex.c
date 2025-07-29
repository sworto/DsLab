#include <stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter the real counterpart of number 1: ");
    scanf("%d",&a);
    printf("Enter the imaginary counterpart of number 2: ");
    scanf("%d",&b);
    printf("Enter the real counterpart of number 2: ");
    scanf("%d",&c);
    printf("Enter the imaginary counterpart of number 2: ");
    scanf("%d",&d);
    printf("The numbers are:\n1.%d+(%d)i\n2.%d+(%d)i\n",a,b,c,d);
    printf("****MENU****\n1.Sum\n2.Product\n");
    int choice,placeholder;
    do{
        printf("Enter the choice: ");
        scanf("%d",&choice);
        if(choice==1)
        {
            a=a+c;
            b=b+d;
            printf("The sum of the two imaginary numbers is: %d+(%d)i\n",a,b);
        }
        else if(choice==2)
        {
            placeholder=a;
            a=a*c-b*d;
            b=placeholder*d+b*c;
            printf("The product of the two imaginary numbers is: %d+(%d)i\n",a,b);
        }
    }
    while(choice==1||choice==2&&choice<=2&&choice>0);
    return 0;
}