#include <iostream>
#include <vector>
#include <string>
int main()
{
    std::vector<std::string> inputvalues;
    int val;
    std::cin>>val;
    for(i=0;i<val;i++)
    {
        std::string temp;
        std::cin>>inputvalues[i];
        if(inputvalues[i].length()>10)
        {
            temp=inputvalues[i][0];
            temp.append(std::string(inputvalues[i].length()-3));
            temp.append(inputvalues[i][inputvalues[i].length()-1]);
            inputvalues
        }
    }
}