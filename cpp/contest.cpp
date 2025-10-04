#include <iostream>
int main()
{
    int n,k;
    int count=0;
    std::string stringinput;
    std::cin>>n >>k;
    std::cin>>std::endl;
    std::getline(std::cin,stringinput);
    for(int i=0;i<n*2;i=i+2)
    {
        if(stringinput[i]>=k)
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