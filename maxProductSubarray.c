class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxend=1, minend=1, maxfar=1, flag=0, mx=INT_MIN;
        for(int i=0 ; i<nums.size() ; i++)
        {
            mx = max(mx,nums[i]);
            if(nums[i]>0)
            {
                maxend = maxend*nums[i];
                minend = min(minend*nums[i], 1);
            }
            else if(nums[i] == 0)
            {
                maxend = 1;
                minend = 1;
            }
            else
            {
                if(i>0)
                    if(nums[i-1]<0)
                        flag=1;
                int temp = maxend;
                maxend = max(minend*nums[i], 1);
                minend = temp*nums[i];
            }
            if(maxend>maxfar)
                maxfar = maxend;
        }
        if(maxfar==1 && mx<=0 && flag==0)
            return mx;
        return maxfar;
    }
};
