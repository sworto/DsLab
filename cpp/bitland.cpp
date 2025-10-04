#include <iostream>
int main()
{
    int n;
    int x;
    std::cin>>n;
    std::string operation;
    x=0;
    for(int i=0;i<n;i++)
    {
        std::cin>>operation;
        if(operation[0]=='+'||operation[2]=='+')
        {
            x++;
        }
        else
        {
            x--;
        }
    }
    std::cout<<x;
    return 0;
}