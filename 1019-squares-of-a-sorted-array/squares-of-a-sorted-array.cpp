class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>e;
        int n=nums.size();
        for(int i=0;i<n;i++){
            e.push_back(nums[i]*nums[i]);
        }
        sort(e.begin(),e.end());
        return e;
    }
};