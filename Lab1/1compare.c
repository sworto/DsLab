#include <stdio.h>
void larger(int* a, int* b)
{
    if(*a>*b)
    {
        printf("%d is larger than %d.\n",*a,*b);
    }
    else if(*a==*b)
    {
        printf("%d is equal to %d.\n",*a,*b);
    }

    else printf("%d is smaller than %d.\n",*a,*b);
}
int main()
{
    int a,b;
    printf("Enter the number 1: ");
    scanf("%d",&a);
    printf("Enter the number 2: ");
    scanf("%d",&b);
    larger(&a,&b);
    return 0;
}
