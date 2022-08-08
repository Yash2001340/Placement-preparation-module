class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long res=INT_MIN;
        long long sum=0;
        for(int i=0;i<nums.size();i++)
        {
            int x=sum+nums[i];
            sum=max(x,nums[i]);
            res=max(sum,res);
        }
        return res;
    }
};
