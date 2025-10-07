#include <iostream>
#include <string>
#include <vector>
int main()
{
    int n,k;
    std::cin>>n>>k;
    std::vector<int> inputval(n);
    for(int i=0;i<n;i++)
    {
        std::cin>>inputval[i];
    }
    int i;
    int count=0;
    for(i=0;i<n;i++)
    {
        if(inputval[i]>=inputval[k-1]&&inputval[i]!=0)
        {
            count++;
        }
        else
        {
            break;
        }
    }
    std::cout<<count;
    return 0;
}