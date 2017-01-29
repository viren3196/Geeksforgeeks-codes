class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int mend=0, mfar=INT_MIN;
        for(int i=0 ; i<nums.size() ; i++)
        {
            mend += nums[i];
            if(mend > mfar)
                mfar = mend;
            if(mend < 0)
                mend = 0;
        }
        return mfar;
    }
};
