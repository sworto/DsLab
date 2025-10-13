#include <stdio.h>
#include <math.h>
double max(double a, double b)
{
    if(a>b)
    {
        return a;
    }
    else return b;
}
double min(double a, double b)
{
    if(a<b)
    {
        return a;
    }  
    else return b; 
}
int main()
{
    double area=0;
    double maxlim=5,minlim=-5;
    printf("***Normal Distribution Calculator***\n");
    printf("Enter the (max,min) limits(Leave min blank for CDF): ");
    scanf("%lf,%lf",&maxlim,&minlim);
    for(double i=minlim;i<maxlim;i+=0.01)
    {
        area+=((1/pow((1.4142136*3.141593),0.5))*pow(2.718282,(-i*i)/2));
    }
    printf("Area: %lf",area);
    return 0;
}

