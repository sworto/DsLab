#include <iostream>
int main()
{
    int n,x,y,z;
    int count=0;
    std::cin>>n;
    for(int i=0;i<n;i++)
    {
        std::cin>>x>>y>>z;
        if(x+y+z>=2&&x+y+z<=3)
        {
            count++;
        }
    }
    std::cout<<count;
    return 0;
}