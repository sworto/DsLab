#include <stdio.h>
int main()
{
    int p1,p2,j;
    //Array 1 Initialisation.
    printf("Enter the order of the polynomial 1: ");
    scanf("%d",&p1);
    int pol1[p1+1];
    for(int i=0;i<=p1;i++)
    {
        printf("Enter the coefficient of x^%d: ",i);
        scanf("%d",&pol1[i]);
    }
    //Array 2 Initialisation.
    printf("Enter the order of the polynomial 2: ");
    scanf("%d",&p2);
    int pol2[p2+1];
    for(int i=0;i<=p2;i++)
    {
        printf("Enter the coefficient of x^%d: ",i);
        scanf("%d",&pol2[i]);
    }
    //Printing both of the arrays.
    printf("Polynomial 1: ");
    for(int i=p1;i>=0;i--)
    {
        if(i==p1)
        {
            printf("(%d)x^%d",pol1[i],i);
        }
        else if(i==0)
        {
            printf("+%d",pol1[i]);
        }
        else printf("+(%d)x^%d",pol1[i],i);
    }
    printf("\n");
    printf("Polynomial 2: ");
    for(int i=p2;i>=0;i--)
    {
        if(i==p2)
        {
            printf("(%d)x^%d",pol2[i],i);
        }
        else if(i==0)
        {
            printf("+%d",pol2[i]);
        }
        else printf("+(%d)x^%d",pol2[i],i);
    }
    printf("\n");
    //Addition.
    int size;
    if(p1>p2)
    {
        size=p1;
    }
    else 
    {
        size=p2;
    }
    int i=0;
    int sump[size+1];
    while(i<=p2&&i<=p1)
    {
        sump[i]=pol1[i]+pol2[i];
        i++;
    }
    while(i<=p2||i<=p1)
    {
        if(p2>p1)
        {
            sump[i]=pol2[i];
        }
        else sump[i]=pol1[i];
        i++;
    }
    printf("Sum of both polynomials: \n");
    for(i=size;i>=0;i--)
    {
        if(i==p2)
        {
            printf("(%d)x^%d",sump[i],i);
        }
        else if(i==0)
        {
            printf("+%d",sump[i]);
        }
        else printf("+(%d)x^%d",sump[i],i);
    }
    printf("\n");
    //Product of both the arrays:
    size=p1+p2+1;
    int prod[size];
    for(i=0;i<=size;i++)
    {
        prod[i]=0;
    }
    for(i=0;i<=p1;i++)
    {
        for(j=0;j<=p2;j++)
        {
            prod[i+j]=prod[i+j]+pol1[i]*pol2[j];
        }
    }
    printf("Product of both polynomials: \n");
    for(i=size-1;i>=0;i--)
    {
        if(i==size-1)
        {
            printf("(%d)x^%d",prod[i],i);
        }
        else if(i==0)
        {
            printf("+%d",prod[i]);
        }
        else printf("+(%d)x^%d",prod[i],i);
    }
    return 0;
}