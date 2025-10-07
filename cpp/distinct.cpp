#include <iostream>
#include <string>
int main()
{
    std::string name;
    std::cin>>name;
    bool state;
    int count=0;
    for(int i=0;i<name.length();i++)
    {
        state=true;
        for(int j=0;j<name.length();j++)
        {
            if(name[i]==name[j]&&i!=j)
            {
                state=false;
                break;
            }
        }
        if(state==true)
        {
            count++;
            
        }
    }
    if(count%2!=0)
    {
        std::cout<<"CHAT WITH HER!\n";
    }
    else
    {
        std::cout<<"IGNORE HIM!\n";
    }
    return 0;
}
