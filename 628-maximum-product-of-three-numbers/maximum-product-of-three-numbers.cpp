class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int ans=0;
        ans=nums[n-1]*nums[n-2]*nums[n-3];
  int option1 = nums[0] * nums[1] * nums[n-1];

        return max(ans,option1);
    }
};