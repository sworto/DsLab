#include <iostream>
#include <vector>
int main()
{
    int n;
    std::cin>>n;
    std::vector<char> colors(n);
    for(int i=0;i<n;i++)
    {
        std::cin>>colors[i];
    }
    int count=0;
    if(n==1||n==0)
    {
        std::cout<<count;
        return 0;
    }
    else
    {
        for(int i=0;(i+1)<n;i++)
        {
            if(colors[i]==colors[i+1])
            {
                count++;
            }
        }
    }
    std::cout<<count;
    return 0;
}