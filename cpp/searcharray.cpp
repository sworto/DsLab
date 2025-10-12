class Solution {
public:
    int search(vector<int>& nums, int target) {
        int k;
        for(k=0;k<nums.length();k++)
        {
            if(nums[k+1]<nums[k])
            {
                break;
            }
        }
        if(target>=nums[0]&&target<nums[k])
        {
            for(int i=0;inums.length();i++)
            {
                if(nums[i]==target)
                {
                    return i;
                }
            }
        }
        else
        {
            for(int i=k;i<nums.length();i++)
            {
                if(nums[i]==target)
                {
                    return i;
                }
            }
        }
        else return -1;
    }
};