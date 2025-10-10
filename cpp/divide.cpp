class Solution {
public:
    int divide(int dividend, int divisor) {
        int temp;
        int count=0;
        if(dividend<=0&&divisor<=0||dividend>=0&&divisor>=0)
        {
            if(dividend>=0)
            {
                while(temp>0)
                {
                    temp=temp-divisor;
                    count++;
                }
            }
            else
            {
                while(temp<0)
                {
                    temp=temp-divisor;
                    count++;
                }
            }
        }
        else
        {
            if(dividend<0)
            {
                while(temp<0)
                {
                    temp=temp+divisor;
                    count--;
                }
            }
            else
            {
                while(temp>0)
                {
                    temp=temp+divisor;
                    count--;
                }
            }
        }
    }
    return count;
}