class Solution {
public:
    int longestValidParentheses(string s) {
    char stack[sizeof(s)];
    int k=-1;
    int count=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='(')
        {
            k++;
            stack[k]='(';
        }
        else if(s[i]==')'&&stack[k]=='(')
        {
            k--;
            count++;
        }
    }
    return count;
    }
};