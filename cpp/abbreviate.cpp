#include <iostream>
#include <vector>
#include <string>
typedef struct inputstrings
{
    std::string input;
}array;
int main()
{
    int val;
    std::string temp="";
    std::string temp2;
    std::cin>>val;
    std::vector<array> inputvalues(val);
    for(int i=0;i<val;i++)
    {
        std::cin>>inputvalues[i].input;
        if(inputvalues[i].input.length()>10)
        {
            temp="";
            temp=temp+inputvalues[i].input[0];
            temp2=std::to_string(inputvalues[i].input.length()-2);
            temp.append(temp2);
            temp=temp+(inputvalues[i].input[inputvalues[i].input.length()-1]);
            inputvalues[i].input=temp;
        }
    }
    for(int i=0;i<val;i++)
    {
        std::cout<<inputvalues[i].input<<"\n";
    }
}