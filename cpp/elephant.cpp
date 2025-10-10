#include <iostream>
int main()
{
    int dist;
    std::cin>>dist;
    int count=0;
    while(dist>0)
    {
        if(dist<=5)
        {
            count++;
            break;
        }
        else
        {
            count++;
            dist-=5;
        }
    }
    std::cout<<count;
    return 0;
}