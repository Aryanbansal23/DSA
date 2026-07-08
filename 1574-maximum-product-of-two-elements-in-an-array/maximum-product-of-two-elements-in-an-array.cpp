class Solution {
public:
    int maxProduct(vector<int>& nums) {
     int sum=0;
       sort(nums.begin(),nums.end());
       int n=nums.size();
       int i=n-2;
       int j=n-1;
       sum=(nums[i]-1)*(nums[j]-1);
      return sum;
    }
};