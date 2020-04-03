class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int pre=nums[0];
        int sum=pre;
        for(int i=1;i<n;i++)
        {
            pre=max(pre+nums[i],nums[i]);
            sum=max(sum,pre);
        }
        return sum;
    }
};
