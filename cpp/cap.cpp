#include <iostream>
#include <string>
int main()
{
    std::string word;
    std::cin>>word;
    if(word[0]>=97&&word[0]<=122)
    {
        word[0]=word[0]-32;
    }
    std::cout<<word;
    return 0;
}