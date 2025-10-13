#include <iostream>
#include <string>
class Solution {
public:
    int monotoneIncreasingDigits(int n) {
        int num=n;
        std::string input;
        input=std::to_string(num);
        if(input.length()<=1)
        {
            return num;
        }
        else
        {
            for(int i=0;i<input.length()-1;i++)
            {
                if(input[i]>input[i+1])
                {
                    input[i+1]=input[i];
                    n=std::stoi(input);
                    n=monotoneIncreasingDigits(n);
                    break;
                }
            }
        }
        return n;
    }
};