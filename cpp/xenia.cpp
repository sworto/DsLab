#include <iostream>
#include <string>
int main()
{
    std::string inputstring;
    char temp;
    std::cin>>inputstring;
    for(int i=0;i<inputstring.length();i+=2)
    {
        for(int j=i+2;j<inputstring.length();j+=2)
        {
            if(inputstring[i]>inputstring[j])
            {
                temp=inputstring[i];
                inputstring[i]=inputstring[j];
                inputstring[j]=temp;
            }
        }
    }
    std::cout<<inputstring;
}