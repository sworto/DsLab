#include <iostream>
int main()
{
    int a,b;
    std::cin>>a>>b;
    int i=0;
    while(a<=b)
    {
        a=a*3;
        b=b*2;
        i++;
    }
    std::cout<<i;
    return 0;
}